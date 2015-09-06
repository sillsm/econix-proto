// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: primitives.proto

#ifndef PROTOBUF_primitives_2eproto__INCLUDED
#define PROTOBUF_primitives_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace econix {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_primitives_2eproto();
void protobuf_AssignDesc_primitives_2eproto();
void protobuf_ShutdownFile_primitives_2eproto();

class Transaction;
class Signature;
class Trade;

// ===================================================================

class Transaction : public ::google::protobuf::Message {
 public:
  Transaction();
  virtual ~Transaction();

  Transaction(const Transaction& from);

  inline Transaction& operator=(const Transaction& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Transaction& default_instance();

  void Swap(Transaction* other);

  // implements Message ----------------------------------------------

  Transaction* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Transaction& from);
  void MergeFrom(const Transaction& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional bytes body = 1;
  inline bool has_body() const;
  inline void clear_body();
  static const int kBodyFieldNumber = 1;
  inline const ::std::string& body() const;
  inline void set_body(const ::std::string& value);
  inline void set_body(const char* value);
  inline void set_body(const void* value, size_t size);
  inline ::std::string* mutable_body();
  inline ::std::string* release_body();
  inline void set_allocated_body(::std::string* body);

  // repeated .econix.Signature signatures = 2;
  inline int signatures_size() const;
  inline void clear_signatures();
  static const int kSignaturesFieldNumber = 2;
  inline const ::econix::Signature& signatures(int index) const;
  inline ::econix::Signature* mutable_signatures(int index);
  inline ::econix::Signature* add_signatures();
  inline const ::google::protobuf::RepeatedPtrField< ::econix::Signature >&
      signatures() const;
  inline ::google::protobuf::RepeatedPtrField< ::econix::Signature >*
      mutable_signatures();

  // @@protoc_insertion_point(class_scope:econix.Transaction)
 private:
  inline void set_has_body();
  inline void clear_has_body();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* body_;
  ::google::protobuf::RepeatedPtrField< ::econix::Signature > signatures_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_primitives_2eproto();
  friend void protobuf_AssignDesc_primitives_2eproto();
  friend void protobuf_ShutdownFile_primitives_2eproto();

  void InitAsDefaultInstance();
  static Transaction* default_instance_;
};
// -------------------------------------------------------------------

class Signature : public ::google::protobuf::Message {
 public:
  Signature();
  virtual ~Signature();

  Signature(const Signature& from);

  inline Signature& operator=(const Signature& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Signature& default_instance();

  void Swap(Signature* other);

  // implements Message ----------------------------------------------

  Signature* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Signature& from);
  void MergeFrom(const Signature& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline const ::std::string& id() const;
  inline void set_id(const ::std::string& value);
  inline void set_id(const char* value);
  inline void set_id(const char* value, size_t size);
  inline ::std::string* mutable_id();
  inline ::std::string* release_id();
  inline void set_allocated_id(::std::string* id);

  // optional bytes body = 2;
  inline bool has_body() const;
  inline void clear_body();
  static const int kBodyFieldNumber = 2;
  inline const ::std::string& body() const;
  inline void set_body(const ::std::string& value);
  inline void set_body(const char* value);
  inline void set_body(const void* value, size_t size);
  inline ::std::string* mutable_body();
  inline ::std::string* release_body();
  inline void set_allocated_body(::std::string* body);

  // @@protoc_insertion_point(class_scope:econix.Signature)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_body();
  inline void clear_has_body();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* id_;
  ::std::string* body_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_primitives_2eproto();
  friend void protobuf_AssignDesc_primitives_2eproto();
  friend void protobuf_ShutdownFile_primitives_2eproto();

  void InitAsDefaultInstance();
  static Signature* default_instance_;
};
// -------------------------------------------------------------------

class Trade : public ::google::protobuf::Message {
 public:
  Trade();
  virtual ~Trade();

  Trade(const Trade& from);

  inline Trade& operator=(const Trade& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Trade& default_instance();

  void Swap(Trade* other);

  // implements Message ----------------------------------------------

  Trade* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Trade& from);
  void MergeFrom(const Trade& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 resource = 1;
  inline bool has_resource() const;
  inline void clear_resource();
  static const int kResourceFieldNumber = 1;
  inline ::google::protobuf::uint64 resource() const;
  inline void set_resource(::google::protobuf::uint64 value);

  // optional int32 quantity = 2;
  inline bool has_quantity() const;
  inline void clear_quantity();
  static const int kQuantityFieldNumber = 2;
  inline ::google::protobuf::int32 quantity() const;
  inline void set_quantity(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:econix.Trade)
 private:
  inline void set_has_resource();
  inline void clear_has_resource();
  inline void set_has_quantity();
  inline void clear_has_quantity();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 resource_;
  ::google::protobuf::int32 quantity_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_primitives_2eproto();
  friend void protobuf_AssignDesc_primitives_2eproto();
  friend void protobuf_ShutdownFile_primitives_2eproto();

  void InitAsDefaultInstance();
  static Trade* default_instance_;
};
// ===================================================================


// ===================================================================

// Transaction

// optional bytes body = 1;
inline bool Transaction::has_body() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Transaction::set_has_body() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Transaction::clear_has_body() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Transaction::clear_body() {
  if (body_ != &::google::protobuf::internal::kEmptyString) {
    body_->clear();
  }
  clear_has_body();
}
inline const ::std::string& Transaction::body() const {
  return *body_;
}
inline void Transaction::set_body(const ::std::string& value) {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  body_->assign(value);
}
inline void Transaction::set_body(const char* value) {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  body_->assign(value);
}
inline void Transaction::set_body(const void* value, size_t size) {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  body_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Transaction::mutable_body() {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  return body_;
}
inline ::std::string* Transaction::release_body() {
  clear_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = body_;
    body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Transaction::set_allocated_body(::std::string* body) {
  if (body_ != &::google::protobuf::internal::kEmptyString) {
    delete body_;
  }
  if (body) {
    set_has_body();
    body_ = body;
  } else {
    clear_has_body();
    body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .econix.Signature signatures = 2;
inline int Transaction::signatures_size() const {
  return signatures_.size();
}
inline void Transaction::clear_signatures() {
  signatures_.Clear();
}
inline const ::econix::Signature& Transaction::signatures(int index) const {
  return signatures_.Get(index);
}
inline ::econix::Signature* Transaction::mutable_signatures(int index) {
  return signatures_.Mutable(index);
}
inline ::econix::Signature* Transaction::add_signatures() {
  return signatures_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::econix::Signature >&
Transaction::signatures() const {
  return signatures_;
}
inline ::google::protobuf::RepeatedPtrField< ::econix::Signature >*
Transaction::mutable_signatures() {
  return &signatures_;
}

// -------------------------------------------------------------------

// Signature

// optional string id = 1;
inline bool Signature::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Signature::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Signature::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Signature::clear_id() {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    id_->clear();
  }
  clear_has_id();
}
inline const ::std::string& Signature::id() const {
  return *id_;
}
inline void Signature::set_id(const ::std::string& value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void Signature::set_id(const char* value) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(value);
}
inline void Signature::set_id(const char* value, size_t size) {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Signature::mutable_id() {
  set_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    id_ = new ::std::string;
  }
  return id_;
}
inline ::std::string* Signature::release_id() {
  clear_has_id();
  if (id_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = id_;
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Signature::set_allocated_id(::std::string* id) {
  if (id_ != &::google::protobuf::internal::kEmptyString) {
    delete id_;
  }
  if (id) {
    set_has_id();
    id_ = id;
  } else {
    clear_has_id();
    id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional bytes body = 2;
inline bool Signature::has_body() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Signature::set_has_body() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Signature::clear_has_body() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Signature::clear_body() {
  if (body_ != &::google::protobuf::internal::kEmptyString) {
    body_->clear();
  }
  clear_has_body();
}
inline const ::std::string& Signature::body() const {
  return *body_;
}
inline void Signature::set_body(const ::std::string& value) {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  body_->assign(value);
}
inline void Signature::set_body(const char* value) {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  body_->assign(value);
}
inline void Signature::set_body(const void* value, size_t size) {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  body_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Signature::mutable_body() {
  set_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    body_ = new ::std::string;
  }
  return body_;
}
inline ::std::string* Signature::release_body() {
  clear_has_body();
  if (body_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = body_;
    body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Signature::set_allocated_body(::std::string* body) {
  if (body_ != &::google::protobuf::internal::kEmptyString) {
    delete body_;
  }
  if (body) {
    set_has_body();
    body_ = body;
  } else {
    clear_has_body();
    body_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// Trade

// optional uint64 resource = 1;
inline bool Trade::has_resource() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Trade::set_has_resource() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Trade::clear_has_resource() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Trade::clear_resource() {
  resource_ = GOOGLE_ULONGLONG(0);
  clear_has_resource();
}
inline ::google::protobuf::uint64 Trade::resource() const {
  return resource_;
}
inline void Trade::set_resource(::google::protobuf::uint64 value) {
  set_has_resource();
  resource_ = value;
}

// optional int32 quantity = 2;
inline bool Trade::has_quantity() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Trade::set_has_quantity() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Trade::clear_has_quantity() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Trade::clear_quantity() {
  quantity_ = 0;
  clear_has_quantity();
}
inline ::google::protobuf::int32 Trade::quantity() const {
  return quantity_;
}
inline void Trade::set_quantity(::google::protobuf::int32 value) {
  set_has_quantity();
  quantity_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace econix

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_primitives_2eproto__INCLUDED
