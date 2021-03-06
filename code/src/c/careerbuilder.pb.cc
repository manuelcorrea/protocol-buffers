// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: careerbuilder.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "careerbuilder.pb.h"

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

namespace cb {

namespace {

const ::google::protobuf::Descriptor* Job_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Job_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Job_Type_descriptor_ = NULL;
const ::google::protobuf::Descriptor* Company_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Company_reflection_ = NULL;
const ::google::protobuf::Descriptor* Company_PhoneNumber_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Company_PhoneNumber_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* Company_PhoneType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_careerbuilder_2eproto() {
  protobuf_AddDesc_careerbuilder_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "careerbuilder.proto");
  GOOGLE_CHECK(file != NULL);
  Job_descriptor_ = file->message_type(0);
  static const int Job_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Job, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Job, title_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Job, description_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Job, other_ids_),
  };
  Job_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Job_descriptor_,
      Job::default_instance_,
      Job_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Job, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Job, _unknown_fields_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Job, _extensions_),
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Job));
  Job_Type_descriptor_ = Job_descriptor_->enum_type(0);
  Company_descriptor_ = file->message_type(1);
  static const int Company_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company, jobs_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company, address_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company, ranking_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company, phone_),
  };
  Company_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Company_descriptor_,
      Company::default_instance_,
      Company_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company, _unknown_fields_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company, _extensions_),
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Company));
  Company_PhoneNumber_descriptor_ = Company_descriptor_->nested_type(0);
  static const int Company_PhoneNumber_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company_PhoneNumber, number_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company_PhoneNumber, type_),
  };
  Company_PhoneNumber_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Company_PhoneNumber_descriptor_,
      Company_PhoneNumber::default_instance_,
      Company_PhoneNumber_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company_PhoneNumber, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Company_PhoneNumber, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Company_PhoneNumber));
  Company_PhoneType_descriptor_ = Company_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_careerbuilder_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Job_descriptor_, &Job::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Company_descriptor_, &Company::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Company_PhoneNumber_descriptor_, &Company_PhoneNumber::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_careerbuilder_2eproto() {
  delete Job::default_instance_;
  delete Job_reflection_;
  delete Company::default_instance_;
  delete Company_reflection_;
  delete Company_PhoneNumber::default_instance_;
  delete Company_PhoneNumber_reflection_;
}

void protobuf_AddDesc_careerbuilder_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023careerbuilder.proto\022\002cb\"\207\001\n\003Job\022\n\n\002id\030"
    "\001 \002(\005\022\r\n\005title\030\002 \002(\t\022\023\n\013description\030\003 \001("
    "\t\022\025\n\tother_ids\030\004 \003(\005B\002\020\001\"2\n\004Type\022\r\n\tFULL"
    "_TIME\020\000\022\r\n\tPART_TIME\020\001\022\014\n\010CONTRACT\020\002*\005\010d"
    "\020\270\027\"\212\002\n\007Company\022\n\n\002id\030\001 \002(\005\022\014\n\004name\030\002 \002("
    "\t\022\025\n\004jobs\030\003 \003(\0132\007.cb.Job\022\017\n\007address\030\004 \001("
    "\t\022\023\n\007ranking\030\005 \001(\005:\00210\022&\n\005phone\030\006 \003(\0132\027."
    "cb.Company.PhoneNumber\032H\n\013PhoneNumber\022\016\n"
    "\006number\030\001 \002(\t\022)\n\004type\030\002 \001(\0162\025.cb.Company"
    ".PhoneType:\004HOME\"+\n\tPhoneType\022\n\n\006MOBILE\020"
    "\000\022\010\n\004HOME\020\001\022\010\n\004WORK\020\003*\t\010\350\007\020\200\200\200\200\002B\002H\002", 436);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "careerbuilder.proto", &protobuf_RegisterTypes);
  Job::default_instance_ = new Job();
  Company::default_instance_ = new Company();
  Company_PhoneNumber::default_instance_ = new Company_PhoneNumber();
  Job::default_instance_->InitAsDefaultInstance();
  Company::default_instance_->InitAsDefaultInstance();
  Company_PhoneNumber::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_careerbuilder_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_careerbuilder_2eproto {
  StaticDescriptorInitializer_careerbuilder_2eproto() {
    protobuf_AddDesc_careerbuilder_2eproto();
  }
} static_descriptor_initializer_careerbuilder_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* Job_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Job_Type_descriptor_;
}
bool Job_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Job_Type Job::FULL_TIME;
const Job_Type Job::PART_TIME;
const Job_Type Job::CONTRACT;
const Job_Type Job::Type_MIN;
const Job_Type Job::Type_MAX;
const int Job::Type_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Job::kIdFieldNumber;
const int Job::kTitleFieldNumber;
const int Job::kDescriptionFieldNumber;
const int Job::kOtherIdsFieldNumber;
#endif  // !_MSC_VER

Job::Job()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Job::InitAsDefaultInstance() {
}

Job::Job(const Job& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Job::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  description_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Job::~Job() {
  SharedDtor();
}

void Job::SharedDtor() {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    delete title_;
  }
  if (description_ != &::google::protobuf::internal::kEmptyString) {
    delete description_;
  }
  if (this != default_instance_) {
  }
}

void Job::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Job::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Job_descriptor_;
}

const Job& Job::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_careerbuilder_2eproto();
  return *default_instance_;
}

Job* Job::default_instance_ = NULL;

Job* Job::New() const {
  return new Job;
}

void Job::Swap(Job* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata Job::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Job_descriptor_;
  metadata.reflection = Job_reflection_;
  return metadata;
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* Company_PhoneType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Company_PhoneType_descriptor_;
}
bool Company_PhoneType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 3:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const Company_PhoneType Company::MOBILE;
const Company_PhoneType Company::HOME;
const Company_PhoneType Company::WORK;
const Company_PhoneType Company::PhoneType_MIN;
const Company_PhoneType Company::PhoneType_MAX;
const int Company::PhoneType_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int Company_PhoneNumber::kNumberFieldNumber;
const int Company_PhoneNumber::kTypeFieldNumber;
#endif  // !_MSC_VER

Company_PhoneNumber::Company_PhoneNumber()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Company_PhoneNumber::InitAsDefaultInstance() {
}

Company_PhoneNumber::Company_PhoneNumber(const Company_PhoneNumber& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Company_PhoneNumber::SharedCtor() {
  _cached_size_ = 0;
  number_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  type_ = 1;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Company_PhoneNumber::~Company_PhoneNumber() {
  SharedDtor();
}

void Company_PhoneNumber::SharedDtor() {
  if (number_ != &::google::protobuf::internal::kEmptyString) {
    delete number_;
  }
  if (this != default_instance_) {
  }
}

void Company_PhoneNumber::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Company_PhoneNumber::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Company_PhoneNumber_descriptor_;
}

const Company_PhoneNumber& Company_PhoneNumber::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_careerbuilder_2eproto();
  return *default_instance_;
}

Company_PhoneNumber* Company_PhoneNumber::default_instance_ = NULL;

Company_PhoneNumber* Company_PhoneNumber::New() const {
  return new Company_PhoneNumber;
}

void Company_PhoneNumber::Swap(Company_PhoneNumber* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata Company_PhoneNumber::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Company_PhoneNumber_descriptor_;
  metadata.reflection = Company_PhoneNumber_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int Company::kIdFieldNumber;
const int Company::kNameFieldNumber;
const int Company::kJobsFieldNumber;
const int Company::kAddressFieldNumber;
const int Company::kRankingFieldNumber;
const int Company::kPhoneFieldNumber;
#endif  // !_MSC_VER

Company::Company()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Company::InitAsDefaultInstance() {
}

Company::Company(const Company& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Company::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  address_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ranking_ = 10;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Company::~Company() {
  SharedDtor();
}

void Company::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (address_ != &::google::protobuf::internal::kEmptyString) {
    delete address_;
  }
  if (this != default_instance_) {
  }
}

void Company::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Company::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Company_descriptor_;
}

const Company& Company::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_careerbuilder_2eproto();
  return *default_instance_;
}

Company* Company::default_instance_ = NULL;

Company* Company::New() const {
  return new Company;
}

void Company::Swap(Company* other) {
  if (other != this) {
    GetReflection()->Swap(this, other);}
}

::google::protobuf::Metadata Company::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Company_descriptor_;
  metadata.reflection = Company_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace cb

// @@protoc_insertion_point(global_scope)
