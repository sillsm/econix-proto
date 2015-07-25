package main

import (
	"fmt"
	"io"
	"net/http"
)

type agent struct {
	name  string
	value int
}

var agents []agent

func hello(w http.ResponseWriter, r *http.Request) {
	for _, a := range agents {
		io.WriteString(w,
			fmt.Sprintf("Agent: %v, Val:%v\n", a.name, a.value))
	}
}

func main() {
	agents = []agent{
		{"A", 4},
		{"B", 0},
		{"Bank", 50},
	}
	http.HandleFunc("/", hello)
	http.ListenAndServe(":8080", nil)
}
