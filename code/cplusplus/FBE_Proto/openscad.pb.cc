// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: openscad.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "openscad.pb.h"

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

namespace FabByExample {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* OpenscadParameter_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OpenscadParameter_reflection_ = NULL;
const ::google::protobuf::Descriptor* OpenscadDesign_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  OpenscadDesign_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_openscad_2eproto() {
  protobuf_AddDesc_openscad_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "openscad.proto");
  GOOGLE_CHECK(file != NULL);
  OpenscadParameter_descriptor_ = file->message_type(0);
  static const int OpenscadParameter_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OpenscadParameter, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OpenscadParameter, initial_value_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OpenscadParameter, min_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OpenscadParameter, max_),
  };
  OpenscadParameter_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      OpenscadParameter_descriptor_,
      OpenscadParameter::default_instance_,
      OpenscadParameter_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OpenscadParameter, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OpenscadParameter, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(OpenscadParameter));
  OpenscadDesign_descriptor_ = file->message_type(1);
  static const int OpenscadDesign_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OpenscadDesign, parameter_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OpenscadDesign, code_),
  };
  OpenscadDesign_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      OpenscadDesign_descriptor_,
      OpenscadDesign::default_instance_,
      OpenscadDesign_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OpenscadDesign, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(OpenscadDesign, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(OpenscadDesign));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_openscad_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    OpenscadParameter_descriptor_, &OpenscadParameter::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    OpenscadDesign_descriptor_, &OpenscadDesign::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_openscad_2eproto() {
  delete OpenscadParameter::default_instance_;
  delete OpenscadParameter_reflection_;
  delete OpenscadDesign::default_instance_;
  delete OpenscadDesign_reflection_;
}

void protobuf_AddDesc_openscad_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016openscad.proto\022\022FabByExample.proto\"R\n\021"
    "OpenscadParameter\022\014\n\004name\030\001 \002(\t\022\025\n\riniti"
    "al_value\030\002 \002(\001\022\013\n\003min\030\003 \001(\001\022\013\n\003max\030\004 \001(\001"
    "\"X\n\016OpenscadDesign\0228\n\tparameter\030\001 \003(\0132%."
    "FabByExample.proto.OpenscadParameter\022\014\n\004"
    "code\030\002 \002(\t", 210);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "openscad.proto", &protobuf_RegisterTypes);
  OpenscadParameter::default_instance_ = new OpenscadParameter();
  OpenscadDesign::default_instance_ = new OpenscadDesign();
  OpenscadParameter::default_instance_->InitAsDefaultInstance();
  OpenscadDesign::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_openscad_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_openscad_2eproto {
  StaticDescriptorInitializer_openscad_2eproto() {
    protobuf_AddDesc_openscad_2eproto();
  }
} static_descriptor_initializer_openscad_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int OpenscadParameter::kNameFieldNumber;
const int OpenscadParameter::kInitialValueFieldNumber;
const int OpenscadParameter::kMinFieldNumber;
const int OpenscadParameter::kMaxFieldNumber;
#endif  // !_MSC_VER

OpenscadParameter::OpenscadParameter()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void OpenscadParameter::InitAsDefaultInstance() {
}

OpenscadParameter::OpenscadParameter(const OpenscadParameter& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void OpenscadParameter::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  initial_value_ = 0;
  min_ = 0;
  max_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OpenscadParameter::~OpenscadParameter() {
  SharedDtor();
}

void OpenscadParameter::SharedDtor() {
  if (name_ != &::google::protobuf::internal::GetEmptyString()) {
    delete name_;
  }
  if (this != default_instance_) {
  }
}

void OpenscadParameter::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OpenscadParameter::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OpenscadParameter_descriptor_;
}

const OpenscadParameter& OpenscadParameter::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_openscad_2eproto();
  return *default_instance_;
}

OpenscadParameter* OpenscadParameter::default_instance_ = NULL;

OpenscadParameter* OpenscadParameter::New() const {
  return new OpenscadParameter;
}

void OpenscadParameter::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::GetEmptyString()) {
        name_->clear();
      }
    }
    initial_value_ = 0;
    min_ = 0;
    max_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool OpenscadParameter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(17)) goto parse_initial_value;
        break;
      }

      // required double initial_value = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_initial_value:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &initial_value_)));
          set_has_initial_value();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(25)) goto parse_min;
        break;
      }

      // optional double min = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_min:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &min_)));
          set_has_min();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(33)) goto parse_max;
        break;
      }

      // optional double max = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
         parse_max:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &max_)));
          set_has_max();
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

void OpenscadParameter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(), output);
  }

  // required double initial_value = 2;
  if (has_initial_value()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->initial_value(), output);
  }

  // optional double min = 3;
  if (has_min()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->min(), output);
  }

  // optional double max = 4;
  if (has_max()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->max(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* OpenscadParameter::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // required double initial_value = 2;
  if (has_initial_value()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->initial_value(), target);
  }

  // optional double min = 3;
  if (has_min()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->min(), target);
  }

  // optional double max = 4;
  if (has_max()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->max(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int OpenscadParameter::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }

    // required double initial_value = 2;
    if (has_initial_value()) {
      total_size += 1 + 8;
    }

    // optional double min = 3;
    if (has_min()) {
      total_size += 1 + 8;
    }

    // optional double max = 4;
    if (has_max()) {
      total_size += 1 + 8;
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

void OpenscadParameter::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const OpenscadParameter* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const OpenscadParameter*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OpenscadParameter::MergeFrom(const OpenscadParameter& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_initial_value()) {
      set_initial_value(from.initial_value());
    }
    if (from.has_min()) {
      set_min(from.min());
    }
    if (from.has_max()) {
      set_max(from.max());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void OpenscadParameter::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OpenscadParameter::CopyFrom(const OpenscadParameter& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OpenscadParameter::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void OpenscadParameter::Swap(OpenscadParameter* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(initial_value_, other->initial_value_);
    std::swap(min_, other->min_);
    std::swap(max_, other->max_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata OpenscadParameter::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OpenscadParameter_descriptor_;
  metadata.reflection = OpenscadParameter_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int OpenscadDesign::kParameterFieldNumber;
const int OpenscadDesign::kCodeFieldNumber;
#endif  // !_MSC_VER

OpenscadDesign::OpenscadDesign()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void OpenscadDesign::InitAsDefaultInstance() {
}

OpenscadDesign::OpenscadDesign(const OpenscadDesign& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void OpenscadDesign::SharedCtor() {
  _cached_size_ = 0;
  code_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

OpenscadDesign::~OpenscadDesign() {
  SharedDtor();
}

void OpenscadDesign::SharedDtor() {
  if (code_ != &::google::protobuf::internal::GetEmptyString()) {
    delete code_;
  }
  if (this != default_instance_) {
  }
}

void OpenscadDesign::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OpenscadDesign::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return OpenscadDesign_descriptor_;
}

const OpenscadDesign& OpenscadDesign::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_openscad_2eproto();
  return *default_instance_;
}

OpenscadDesign* OpenscadDesign::default_instance_ = NULL;

OpenscadDesign* OpenscadDesign::New() const {
  return new OpenscadDesign;
}

void OpenscadDesign::Clear() {
  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (has_code()) {
      if (code_ != &::google::protobuf::internal::GetEmptyString()) {
        code_->clear();
      }
    }
  }
  parameter_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool OpenscadDesign::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .FabByExample.proto.OpenscadParameter parameter = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_parameter:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_parameter()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_parameter;
        if (input->ExpectTag(18)) goto parse_code;
        break;
      }

      // required string code = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_code:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_code()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->code().data(), this->code().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
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

void OpenscadDesign::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .FabByExample.proto.OpenscadParameter parameter = 1;
  for (int i = 0; i < this->parameter_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->parameter(i), output);
  }

  // required string code = 2;
  if (has_code()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->code().data(), this->code().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->code(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* OpenscadDesign::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .FabByExample.proto.OpenscadParameter parameter = 1;
  for (int i = 0; i < this->parameter_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->parameter(i), target);
  }

  // required string code = 2;
  if (has_code()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->code().data(), this->code().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->code(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int OpenscadDesign::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // required string code = 2;
    if (has_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->code());
    }

  }
  // repeated .FabByExample.proto.OpenscadParameter parameter = 1;
  total_size += 1 * this->parameter_size();
  for (int i = 0; i < this->parameter_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->parameter(i));
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

void OpenscadDesign::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const OpenscadDesign* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const OpenscadDesign*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void OpenscadDesign::MergeFrom(const OpenscadDesign& from) {
  GOOGLE_CHECK_NE(&from, this);
  parameter_.MergeFrom(from.parameter_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_code()) {
      set_code(from.code());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void OpenscadDesign::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void OpenscadDesign::CopyFrom(const OpenscadDesign& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool OpenscadDesign::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000002) != 0x00000002) return false;

  for (int i = 0; i < parameter_size(); i++) {
    if (!this->parameter(i).IsInitialized()) return false;
  }
  return true;
}

void OpenscadDesign::Swap(OpenscadDesign* other) {
  if (other != this) {
    parameter_.Swap(&other->parameter_);
    std::swap(code_, other->code_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata OpenscadDesign::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = OpenscadDesign_descriptor_;
  metadata.reflection = OpenscadDesign_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace FabByExample

// @@protoc_insertion_point(global_scope)