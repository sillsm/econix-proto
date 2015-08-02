// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: a.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "a.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Econix {

namespace {

const ::google::protobuf::Descriptor* Transaction_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Transaction_reflection_ = NULL;
const ::google::protobuf::Descriptor* Transaction_MsgItem_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Transaction_MsgItem_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Transaction_ItemType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_a_2eproto() {
  protobuf_AddDesc_a_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "a.proto");
  GOOGLE_CHECK(file != NULL);
  Transaction_descriptor_ = file->message_type(0);
  static const int Transaction_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, clientname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, clientid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, description_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, messageitems_),
  };
  Transaction_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Transaction_descriptor_,
      Transaction::default_instance_,
      Transaction_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Transaction));
  Transaction_MsgItem_descriptor_ = Transaction_descriptor_->nested_type(0);
  static const int Transaction_MsgItem_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction_MsgItem, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction_MsgItem, itemname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction_MsgItem, itemvalue_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction_MsgItem, itemtype_),
  };
  Transaction_MsgItem_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Transaction_MsgItem_descriptor_,
      Transaction_MsgItem::default_instance_,
      Transaction_MsgItem_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction_MsgItem, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Transaction_MsgItem, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Transaction_MsgItem));
  Transaction_ItemType_descriptor_ = Transaction_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_a_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Transaction_descriptor_, &Transaction::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Transaction_MsgItem_descriptor_, &Transaction_MsgItem::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_a_2eproto() {
  delete Transaction::default_instance_;
  delete Transaction_reflection_;
  delete Transaction::_default_description_;
  delete Transaction_MsgItem::default_instance_;
  delete Transaction_MsgItem_reflection_;
}

void protobuf_AddDesc_a_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\007a.proto\022\006Econix\"\245\002\n\013Transaction\022\022\n\ncli"
    "entName\030\001 \002(\t\022\020\n\010clientId\030\002 \002(\005\022\031\n\013descr"
    "iption\030\003 \001(\t:\004NONE\0221\n\014messageitems\030\004 \003(\013"
    "2\033.Econix.Transaction.MsgItem\032j\n\007MsgItem"
    "\022\n\n\002id\030\001 \002(\005\022\020\n\010itemName\030\002 \001(\t\022\021\n\titemVa"
    "lue\030\003 \001(\005\022.\n\010itemType\030\004 \001(\0162\034.Econix.Tra"
    "nsaction.ItemType\"6\n\010ItemType\022\t\n\005TypeX\020\000"
    "\022\t\n\005TypeY\020\001\022\t\n\005TypeZ\020\002\022\t\n\005TypeA\020\003", 313);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "a.proto", &protobuf_RegisterTypes);
  Transaction::_default_description_ =
      new ::std::string("NONE", 4);
  Transaction::default_instance_ = new Transaction();
  Transaction_MsgItem::default_instance_ = new Transaction_MsgItem();
  Transaction::default_instance_->InitAsDefaultInstance();
  Transaction_MsgItem::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_a_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_a_2eproto {
  StaticDescriptorInitializer_a_2eproto() {
    protobuf_AddDesc_a_2eproto();
  }
} static_descriptor_initializer_a_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Transaction_ItemType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Transaction_ItemType_descriptor_;
}
bool Transaction_ItemType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Transaction_ItemType Transaction::TypeX;
const Transaction_ItemType Transaction::TypeY;
const Transaction_ItemType Transaction::TypeZ;
const Transaction_ItemType Transaction::TypeA;
const Transaction_ItemType Transaction::ItemType_MIN;
const Transaction_ItemType Transaction::ItemType_MAX;
const int Transaction::ItemType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Transaction_MsgItem::kIdFieldNumber;
const int Transaction_MsgItem::kItemNameFieldNumber;
const int Transaction_MsgItem::kItemValueFieldNumber;
const int Transaction_MsgItem::kItemTypeFieldNumber;
#endif  // !_MSC_VER

Transaction_MsgItem::Transaction_MsgItem()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Transaction_MsgItem::InitAsDefaultInstance() {
}

Transaction_MsgItem::Transaction_MsgItem(const Transaction_MsgItem& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Transaction_MsgItem::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  itemname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  itemvalue_ = 0;
  itemtype_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Transaction_MsgItem::~Transaction_MsgItem() {
  SharedDtor();
}

void Transaction_MsgItem::SharedDtor() {
  if (itemname_ != &::google::protobuf::internal::kEmptyString) {
    delete itemname_;
  }
  if (this != default_instance_) {
  }
}

void Transaction_MsgItem::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Transaction_MsgItem::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Transaction_MsgItem_descriptor_;
}

const Transaction_MsgItem& Transaction_MsgItem::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_a_2eproto();
  return *default_instance_;
}

Transaction_MsgItem* Transaction_MsgItem::default_instance_ = NULL;

Transaction_MsgItem* Transaction_MsgItem::New() const {
  return new Transaction_MsgItem;
}

void Transaction_MsgItem::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    if (has_itemname()) {
      if (itemname_ != &::google::protobuf::internal::kEmptyString) {
        itemname_->clear();
      }
    }
    itemvalue_ = 0;
    itemtype_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Transaction_MsgItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_itemName;
        break;
      }

      // optional string itemName = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_itemName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_itemname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->itemname().data(), this->itemname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_itemValue;
        break;
      }

      // optional int32 itemValue = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_itemValue:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &itemvalue_)));
          set_has_itemvalue();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_itemType;
        break;
      }

      // optional .Econix.Transaction.ItemType itemType = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_itemType:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::Econix::Transaction_ItemType_IsValid(value)) {
            set_itemtype(static_cast< ::Econix::Transaction_ItemType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Transaction_MsgItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional string itemName = 2;
  if (has_itemname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->itemname().data(), this->itemname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->itemname(), output);
  }

  // optional int32 itemValue = 3;
  if (has_itemvalue()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->itemvalue(), output);
  }

  // optional .Econix.Transaction.ItemType itemType = 4;
  if (has_itemtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->itemtype(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Transaction_MsgItem::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional string itemName = 2;
  if (has_itemname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->itemname().data(), this->itemname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->itemname(), target);
  }

  // optional int32 itemValue = 3;
  if (has_itemvalue()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->itemvalue(), target);
  }

  // optional .Econix.Transaction.ItemType itemType = 4;
  if (has_itemtype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->itemtype(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Transaction_MsgItem::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional string itemName = 2;
    if (has_itemname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->itemname());
    }

    // optional int32 itemValue = 3;
    if (has_itemvalue()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->itemvalue());
    }

    // optional .Econix.Transaction.ItemType itemType = 4;
    if (has_itemtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->itemtype());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Transaction_MsgItem::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Transaction_MsgItem* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Transaction_MsgItem*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Transaction_MsgItem::MergeFrom(const Transaction_MsgItem& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_itemname()) {
      set_itemname(from.itemname());
    }
    if (from.has_itemvalue()) {
      set_itemvalue(from.itemvalue());
    }
    if (from.has_itemtype()) {
      set_itemtype(from.itemtype());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Transaction_MsgItem::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Transaction_MsgItem::CopyFrom(const Transaction_MsgItem& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Transaction_MsgItem::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void Transaction_MsgItem::Swap(Transaction_MsgItem* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(itemname_, other->itemname_);
    std::swap(itemvalue_, other->itemvalue_);
    std::swap(itemtype_, other->itemtype_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Transaction_MsgItem::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Transaction_MsgItem_descriptor_;
  metadata.reflection = Transaction_MsgItem_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

::std::string* Transaction::_default_description_ = NULL;
#ifndef _MSC_VER
const int Transaction::kClientNameFieldNumber;
const int Transaction::kClientIdFieldNumber;
const int Transaction::kDescriptionFieldNumber;
const int Transaction::kMessageitemsFieldNumber;
#endif  // !_MSC_VER

Transaction::Transaction()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Transaction::InitAsDefaultInstance() {
}

Transaction::Transaction(const Transaction& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Transaction::SharedCtor() {
  _cached_size_ = 0;
  clientname_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  clientid_ = 0;
  description_ = const_cast< ::std::string*>(_default_description_);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Transaction::~Transaction() {
  SharedDtor();
}

void Transaction::SharedDtor() {
  if (clientname_ != &::google::protobuf::internal::kEmptyString) {
    delete clientname_;
  }
  if (description_ != _default_description_) {
    delete description_;
  }
  if (this != default_instance_) {
  }
}

void Transaction::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Transaction::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Transaction_descriptor_;
}

const Transaction& Transaction::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_a_2eproto();
  return *default_instance_;
}

Transaction* Transaction::default_instance_ = NULL;

Transaction* Transaction::New() const {
  return new Transaction;
}

void Transaction::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_clientname()) {
      if (clientname_ != &::google::protobuf::internal::kEmptyString) {
        clientname_->clear();
      }
    }
    clientid_ = 0;
    if (has_description()) {
      if (description_ != _default_description_) {
        description_->assign(*_default_description_);
      }
    }
  }
  messageitems_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Transaction::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string clientName = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_clientname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->clientname().data(), this->clientname().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_clientId;
        break;
      }

      // required int32 clientId = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_clientId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &clientid_)));
          set_has_clientid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_description;
        break;
      }

      // optional string description = 3 [default = "NONE"];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_description:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_description()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->description().data(), this->description().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_messageitems;
        break;
      }

      // repeated .Econix.Transaction.MsgItem messageitems = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_messageitems:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_messageitems()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_messageitems;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Transaction::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string clientName = 1;
  if (has_clientname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->clientname().data(), this->clientname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->clientname(), output);
  }

  // required int32 clientId = 2;
  if (has_clientid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->clientid(), output);
  }

  // optional string description = 3 [default = "NONE"];
  if (has_description()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->description(), output);
  }

  // repeated .Econix.Transaction.MsgItem messageitems = 4;
  for (int i = 0; i < this->messageitems_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->messageitems(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Transaction::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string clientName = 1;
  if (has_clientname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->clientname().data(), this->clientname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->clientname(), target);
  }

  // required int32 clientId = 2;
  if (has_clientid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->clientid(), target);
  }

  // optional string description = 3 [default = "NONE"];
  if (has_description()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->description().data(), this->description().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->description(), target);
  }

  // repeated .Econix.Transaction.MsgItem messageitems = 4;
  for (int i = 0; i < this->messageitems_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->messageitems(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Transaction::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string clientName = 1;
    if (has_clientname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->clientname());
    }

    // required int32 clientId = 2;
    if (has_clientid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->clientid());
    }

    // optional string description = 3 [default = "NONE"];
    if (has_description()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->description());
    }

  }
  // repeated .Econix.Transaction.MsgItem messageitems = 4;
  total_size += 1 * this->messageitems_size();
  for (int i = 0; i < this->messageitems_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->messageitems(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Transaction::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Transaction* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Transaction*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Transaction::MergeFrom(const Transaction& from) {
  GOOGLE_CHECK_NE(&from, this);
  messageitems_.MergeFrom(from.messageitems_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_clientname()) {
      set_clientname(from.clientname());
    }
    if (from.has_clientid()) {
      set_clientid(from.clientid());
    }
    if (from.has_description()) {
      set_description(from.description());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Transaction::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Transaction::CopyFrom(const Transaction& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Transaction::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  for (int i = 0; i < messageitems_size(); i++) {
    if (!this->messageitems(i).IsInitialized()) return false;
  }
  return true;
}

void Transaction::Swap(Transaction* other) {
  if (other != this) {
    std::swap(clientname_, other->clientname_);
    std::swap(clientid_, other->clientid_);
    std::swap(description_, other->description_);
    messageitems_.Swap(&other->messageitems_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Transaction::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Transaction_descriptor_;
  metadata.reflection = Transaction_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace Econix

// @@protoc_insertion_point(global_scope)
