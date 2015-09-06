package main

import (
        "github.com/sillsm/econix-proto/compiled/go"
	"fmt"
	"io"
	"net/http"
)

type agent struct {
	name  string
	value int
}

var tick int
var agents []*agent
var broadcastGroup []chan bool

func broadcastTick(cs []chan bool) {
	for _, c := range cs {
		c <- true
	}
}

func hello(w http.ResponseWriter, r *http.Request) {
	broadcastTick(broadcastGroup)
	tick++
	for _, a := range agents {
		io.WriteString(w,
			fmt.Sprintf("Agent: %v, Val:%v\n", a.name, a.value))
	}
	io.WriteString(w, "\n___________\n")
	io.WriteString(w, "Stuff\n")
	io.WriteString(w, "\n___________\n")
	io.WriteString(w, fmt.Sprintf("Tick: %v", tick))
	io.WriteString(w, "\n___________\n")
}

func addAgent(name string, v int) {
	agent := &agent{name, v}
	agents = append(agents, agent)
	tick := make(chan bool, 1)
	broadcastGroup = append(broadcastGroup, tick)
	go func() {
		for {
			<-tick // Wait for tick.
			agent.value++
		}
	}()
}

func main() {
	addAgent("a", 0)
	addAgent("b", 1)
	addAgent("bank", 50)
        var e econix.Transaction
        e = e
	http.HandleFunc("/view", hello)
	http.ListenAndServe(":8080", nil)
}
