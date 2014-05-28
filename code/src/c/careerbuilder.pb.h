// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: careerbuilder.proto

#ifndef PROTOBUF_careerbuilder_2eproto__INCLUDED
#define PROTOBUF_careerbuilder_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace cb {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_careerbuilder_2eproto();
void protobuf_AssignDesc_careerbuilder_2eproto();
void protobuf_ShutdownFile_careerbuilder_2eproto();

class Job;
class Company;
class Company_PhoneNumber;

enum Job_Type {
  Job_Type_FULL_TIME = 0,
  Job_Type_PART_TIME = 1,
  Job_Type_CONTRACT = 2
};
bool Job_Type_IsValid(int value);
const Job_Type Job_Type_Type_MIN = Job_Type_FULL_TIME;
const Job_Type Job_Type_Type_MAX = Job_Type_CONTRACT;
const int Job_Type_Type_ARRAYSIZE = Job_Type_Type_MAX + 1;

const ::google::protobuf::EnumDescriptor* Job_Type_descriptor();
inline const ::std::string& Job_Type_Name(Job_Type value) {
  return ::google::protobuf::internal::NameOfEnum(
    Job_Type_descriptor(), value);
}
inline bool Job_Type_Parse(
    const ::std::string& name, Job_Type* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Job_Type>(
    Job_Type_descriptor(), name, value);
}
enum Company_PhoneType {
  Company_PhoneType_MOBILE = 0,
  Company_PhoneType_HOME = 1,
  Company_PhoneType_WORK = 3
};
bool Company_PhoneType_IsValid(int value);
const Company_PhoneType Company_PhoneType_PhoneType_MIN = Company_PhoneType_MOBILE;
const Company_PhoneType Company_PhoneType_PhoneType_MAX = Company_PhoneType_WORK;
const int Company_PhoneType_PhoneType_ARRAYSIZE = Company_PhoneType_PhoneType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Company_PhoneType_descriptor();
inline const ::std::string& Company_PhoneType_Name(Company_PhoneType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Company_PhoneType_descriptor(), value);
}
inline bool Company_PhoneType_Parse(
    const ::std::string& name, Company_PhoneType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Company_PhoneType>(
    Company_PhoneType_descriptor(), name, value);
}
// ===================================================================

class Job : public ::google::protobuf::Message {
 public:
  Job();
  virtual ~Job();

  Job(const Job& from);

  inline Job& operator=(const Job& from) {
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
  static const Job& default_instance();

  void Swap(Job* other);

  // implements Message ----------------------------------------------

  Job* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Job_Type Type;
  static const Type FULL_TIME = Job_Type_FULL_TIME;
  static const Type PART_TIME = Job_Type_PART_TIME;
  static const Type CONTRACT = Job_Type_CONTRACT;
  static inline bool Type_IsValid(int value) {
    return Job_Type_IsValid(value);
  }
  static const Type Type_MIN =
    Job_Type_Type_MIN;
  static const Type Type_MAX =
    Job_Type_Type_MAX;
  static const int Type_ARRAYSIZE =
    Job_Type_Type_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Type_descriptor() {
    return Job_Type_descriptor();
  }
  static inline const ::std::string& Type_Name(Type value) {
    return Job_Type_Name(value);
  }
  static inline bool Type_Parse(const ::std::string& name,
      Type* value) {
    return Job_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required string title = 2;
  inline bool has_title() const;
  inline void clear_title();
  static const int kTitleFieldNumber = 2;
  inline const ::std::string& title() const;
  inline void set_title(const ::std::string& value);
  inline void set_title(const char* value);
  inline void set_title(const char* value, size_t size);
  inline ::std::string* mutable_title();
  inline ::std::string* release_title();
  inline void set_allocated_title(::std::string* title);

  // optional string description = 3;
  inline bool has_description() const;
  inline void clear_description();
  static const int kDescriptionFieldNumber = 3;
  inline const ::std::string& description() const;
  inline void set_description(const ::std::string& value);
  inline void set_description(const char* value);
  inline void set_description(const char* value, size_t size);
  inline ::std::string* mutable_description();
  inline ::std::string* release_description();
  inline void set_allocated_description(::std::string* description);

  // repeated int32 other_ids = 4 [packed = true];
  inline int other_ids_size() const;
  inline void clear_other_ids();
  static const int kOtherIdsFieldNumber = 4;
  inline ::google::protobuf::int32 other_ids(int index) const;
  inline void set_other_ids(int index, ::google::protobuf::int32 value);
  inline void add_other_ids(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      other_ids() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_other_ids();

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(Job)
  // @@protoc_insertion_point(class_scope:cb.Job)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_title();
  inline void clear_has_title();
  inline void set_has_description();
  inline void clear_has_description();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* title_;
  ::std::string* description_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > other_ids_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_careerbuilder_2eproto();
  friend void protobuf_AssignDesc_careerbuilder_2eproto();
  friend void protobuf_ShutdownFile_careerbuilder_2eproto();

  void InitAsDefaultInstance();
  static Job* default_instance_;
};
// -------------------------------------------------------------------

class Company_PhoneNumber : public ::google::protobuf::Message {
 public:
  Company_PhoneNumber();
  virtual ~Company_PhoneNumber();

  Company_PhoneNumber(const Company_PhoneNumber& from);

  inline Company_PhoneNumber& operator=(const Company_PhoneNumber& from) {
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
  static const Company_PhoneNumber& default_instance();

  void Swap(Company_PhoneNumber* other);

  // implements Message ----------------------------------------------

  Company_PhoneNumber* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string number = 1;
  inline bool has_number() const;
  inline void clear_number();
  static const int kNumberFieldNumber = 1;
  inline const ::std::string& number() const;
  inline void set_number(const ::std::string& value);
  inline void set_number(const char* value);
  inline void set_number(const char* value, size_t size);
  inline ::std::string* mutable_number();
  inline ::std::string* release_number();
  inline void set_allocated_number(::std::string* number);

  // optional .cb.Company.PhoneType type = 2 [default = HOME];
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::cb::Company_PhoneType type() const;
  inline void set_type(::cb::Company_PhoneType value);

  // @@protoc_insertion_point(class_scope:cb.Company.PhoneNumber)
 private:
  inline void set_has_number();
  inline void clear_has_number();
  inline void set_has_type();
  inline void clear_has_type();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* number_;
  int type_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_careerbuilder_2eproto();
  friend void protobuf_AssignDesc_careerbuilder_2eproto();
  friend void protobuf_ShutdownFile_careerbuilder_2eproto();

  void InitAsDefaultInstance();
  static Company_PhoneNumber* default_instance_;
};
// -------------------------------------------------------------------

class Company : public ::google::protobuf::Message {
 public:
  Company();
  virtual ~Company();

  Company(const Company& from);

  inline Company& operator=(const Company& from) {
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
  static const Company& default_instance();

  void Swap(Company* other);

  // implements Message ----------------------------------------------

  Company* New() const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef Company_PhoneNumber PhoneNumber;

  typedef Company_PhoneType PhoneType;
  static const PhoneType MOBILE = Company_PhoneType_MOBILE;
  static const PhoneType HOME = Company_PhoneType_HOME;
  static const PhoneType WORK = Company_PhoneType_WORK;
  static inline bool PhoneType_IsValid(int value) {
    return Company_PhoneType_IsValid(value);
  }
  static const PhoneType PhoneType_MIN =
    Company_PhoneType_PhoneType_MIN;
  static const PhoneType PhoneType_MAX =
    Company_PhoneType_PhoneType_MAX;
  static const int PhoneType_ARRAYSIZE =
    Company_PhoneType_PhoneType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  PhoneType_descriptor() {
    return Company_PhoneType_descriptor();
  }
  static inline const ::std::string& PhoneType_Name(PhoneType value) {
    return Company_PhoneType_Name(value);
  }
  static inline bool PhoneType_Parse(const ::std::string& name,
      PhoneType* value) {
    return Company_PhoneType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // required string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // repeated .cb.Job jobs = 3;
  inline int jobs_size() const;
  inline void clear_jobs();
  static const int kJobsFieldNumber = 3;
  inline const ::cb::Job& jobs(int index) const;
  inline ::cb::Job* mutable_jobs(int index);
  inline ::cb::Job* add_jobs();
  inline const ::google::protobuf::RepeatedPtrField< ::cb::Job >&
      jobs() const;
  inline ::google::protobuf::RepeatedPtrField< ::cb::Job >*
      mutable_jobs();

  // optional string address = 4;
  inline bool has_address() const;
  inline void clear_address();
  static const int kAddressFieldNumber = 4;
  inline const ::std::string& address() const;
  inline void set_address(const ::std::string& value);
  inline void set_address(const char* value);
  inline void set_address(const char* value, size_t size);
  inline ::std::string* mutable_address();
  inline ::std::string* release_address();
  inline void set_allocated_address(::std::string* address);

  // optional int32 ranking = 5 [default = 10];
  inline bool has_ranking() const;
  inline void clear_ranking();
  static const int kRankingFieldNumber = 5;
  inline ::google::protobuf::int32 ranking() const;
  inline void set_ranking(::google::protobuf::int32 value);

  // repeated .cb.Company.PhoneNumber phone = 6;
  inline int phone_size() const;
  inline void clear_phone();
  static const int kPhoneFieldNumber = 6;
  inline const ::cb::Company_PhoneNumber& phone(int index) const;
  inline ::cb::Company_PhoneNumber* mutable_phone(int index);
  inline ::cb::Company_PhoneNumber* add_phone();
  inline const ::google::protobuf::RepeatedPtrField< ::cb::Company_PhoneNumber >&
      phone() const;
  inline ::google::protobuf::RepeatedPtrField< ::cb::Company_PhoneNumber >*
      mutable_phone();

  GOOGLE_PROTOBUF_EXTENSION_ACCESSORS(Company)
  // @@protoc_insertion_point(class_scope:cb.Company)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_address();
  inline void clear_has_address();
  inline void set_has_ranking();
  inline void clear_has_ranking();

  ::google::protobuf::internal::ExtensionSet _extensions_;

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* name_;
  ::google::protobuf::RepeatedPtrField< ::cb::Job > jobs_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 ranking_;
  ::std::string* address_;
  ::google::protobuf::RepeatedPtrField< ::cb::Company_PhoneNumber > phone_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];

  friend void  protobuf_AddDesc_careerbuilder_2eproto();
  friend void protobuf_AssignDesc_careerbuilder_2eproto();
  friend void protobuf_ShutdownFile_careerbuilder_2eproto();

  void InitAsDefaultInstance();
  static Company* default_instance_;
};
// ===================================================================


// ===================================================================

// Job

// required int32 id = 1;
inline bool Job::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Job::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Job::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Job::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Job::id() const {
  return id_;
}
inline void Job::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required string title = 2;
inline bool Job::has_title() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Job::set_has_title() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Job::clear_has_title() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Job::clear_title() {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    title_->clear();
  }
  clear_has_title();
}
inline const ::std::string& Job::title() const {
  return *title_;
}
inline void Job::set_title(const ::std::string& value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void Job::set_title(const char* value) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(value);
}
inline void Job::set_title(const char* value, size_t size) {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  title_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Job::mutable_title() {
  set_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    title_ = new ::std::string;
  }
  return title_;
}
inline ::std::string* Job::release_title() {
  clear_has_title();
  if (title_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = title_;
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Job::set_allocated_title(::std::string* title) {
  if (title_ != &::google::protobuf::internal::kEmptyString) {
    delete title_;
  }
  if (title) {
    set_has_title();
    title_ = title;
  } else {
    clear_has_title();
    title_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string description = 3;
inline bool Job::has_description() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Job::set_has_description() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Job::clear_has_description() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Job::clear_description() {
  if (description_ != &::google::protobuf::internal::kEmptyString) {
    description_->clear();
  }
  clear_has_description();
}
inline const ::std::string& Job::description() const {
  return *description_;
}
inline void Job::set_description(const ::std::string& value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(value);
}
inline void Job::set_description(const char* value) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(value);
}
inline void Job::set_description(const char* value, size_t size) {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  description_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Job::mutable_description() {
  set_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    description_ = new ::std::string;
  }
  return description_;
}
inline ::std::string* Job::release_description() {
  clear_has_description();
  if (description_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = description_;
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Job::set_allocated_description(::std::string* description) {
  if (description_ != &::google::protobuf::internal::kEmptyString) {
    delete description_;
  }
  if (description) {
    set_has_description();
    description_ = description;
  } else {
    clear_has_description();
    description_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated int32 other_ids = 4 [packed = true];
inline int Job::other_ids_size() const {
  return other_ids_.size();
}
inline void Job::clear_other_ids() {
  other_ids_.Clear();
}
inline ::google::protobuf::int32 Job::other_ids(int index) const {
  return other_ids_.Get(index);
}
inline void Job::set_other_ids(int index, ::google::protobuf::int32 value) {
  other_ids_.Set(index, value);
}
inline void Job::add_other_ids(::google::protobuf::int32 value) {
  other_ids_.Add(value);
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
Job::other_ids() const {
  return other_ids_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
Job::mutable_other_ids() {
  return &other_ids_;
}

// -------------------------------------------------------------------

// Company_PhoneNumber

// required string number = 1;
inline bool Company_PhoneNumber::has_number() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Company_PhoneNumber::set_has_number() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Company_PhoneNumber::clear_has_number() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Company_PhoneNumber::clear_number() {
  if (number_ != &::google::protobuf::internal::kEmptyString) {
    number_->clear();
  }
  clear_has_number();
}
inline const ::std::string& Company_PhoneNumber::number() const {
  return *number_;
}
inline void Company_PhoneNumber::set_number(const ::std::string& value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(value);
}
inline void Company_PhoneNumber::set_number(const char* value) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(value);
}
inline void Company_PhoneNumber::set_number(const char* value, size_t size) {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  number_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Company_PhoneNumber::mutable_number() {
  set_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    number_ = new ::std::string;
  }
  return number_;
}
inline ::std::string* Company_PhoneNumber::release_number() {
  clear_has_number();
  if (number_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = number_;
    number_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Company_PhoneNumber::set_allocated_number(::std::string* number) {
  if (number_ != &::google::protobuf::internal::kEmptyString) {
    delete number_;
  }
  if (number) {
    set_has_number();
    number_ = number;
  } else {
    clear_has_number();
    number_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional .cb.Company.PhoneType type = 2 [default = HOME];
inline bool Company_PhoneNumber::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Company_PhoneNumber::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Company_PhoneNumber::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Company_PhoneNumber::clear_type() {
  type_ = 1;
  clear_has_type();
}
inline ::cb::Company_PhoneType Company_PhoneNumber::type() const {
  return static_cast< ::cb::Company_PhoneType >(type_);
}
inline void Company_PhoneNumber::set_type(::cb::Company_PhoneType value) {
  assert(::cb::Company_PhoneType_IsValid(value));
  set_has_type();
  type_ = value;
}

// -------------------------------------------------------------------

// Company

// required int32 id = 1;
inline bool Company::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Company::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Company::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Company::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 Company::id() const {
  return id_;
}
inline void Company::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// required string name = 2;
inline bool Company::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Company::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Company::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Company::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& Company::name() const {
  return *name_;
}
inline void Company::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Company::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void Company::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Company::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* Company::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Company::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated .cb.Job jobs = 3;
inline int Company::jobs_size() const {
  return jobs_.size();
}
inline void Company::clear_jobs() {
  jobs_.Clear();
}
inline const ::cb::Job& Company::jobs(int index) const {
  return jobs_.Get(index);
}
inline ::cb::Job* Company::mutable_jobs(int index) {
  return jobs_.Mutable(index);
}
inline ::cb::Job* Company::add_jobs() {
  return jobs_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::cb::Job >&
Company::jobs() const {
  return jobs_;
}
inline ::google::protobuf::RepeatedPtrField< ::cb::Job >*
Company::mutable_jobs() {
  return &jobs_;
}

// optional string address = 4;
inline bool Company::has_address() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Company::set_has_address() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Company::clear_has_address() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Company::clear_address() {
  if (address_ != &::google::protobuf::internal::kEmptyString) {
    address_->clear();
  }
  clear_has_address();
}
inline const ::std::string& Company::address() const {
  return *address_;
}
inline void Company::set_address(const ::std::string& value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(value);
}
inline void Company::set_address(const char* value) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(value);
}
inline void Company::set_address(const char* value, size_t size) {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  address_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Company::mutable_address() {
  set_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    address_ = new ::std::string;
  }
  return address_;
}
inline ::std::string* Company::release_address() {
  clear_has_address();
  if (address_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = address_;
    address_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Company::set_allocated_address(::std::string* address) {
  if (address_ != &::google::protobuf::internal::kEmptyString) {
    delete address_;
  }
  if (address) {
    set_has_address();
    address_ = address;
  } else {
    clear_has_address();
    address_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 ranking = 5 [default = 10];
inline bool Company::has_ranking() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Company::set_has_ranking() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Company::clear_has_ranking() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Company::clear_ranking() {
  ranking_ = 10;
  clear_has_ranking();
}
inline ::google::protobuf::int32 Company::ranking() const {
  return ranking_;
}
inline void Company::set_ranking(::google::protobuf::int32 value) {
  set_has_ranking();
  ranking_ = value;
}

// repeated .cb.Company.PhoneNumber phone = 6;
inline int Company::phone_size() const {
  return phone_.size();
}
inline void Company::clear_phone() {
  phone_.Clear();
}
inline const ::cb::Company_PhoneNumber& Company::phone(int index) const {
  return phone_.Get(index);
}
inline ::cb::Company_PhoneNumber* Company::mutable_phone(int index) {
  return phone_.Mutable(index);
}
inline ::cb::Company_PhoneNumber* Company::add_phone() {
  return phone_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::cb::Company_PhoneNumber >&
Company::phone() const {
  return phone_;
}
inline ::google::protobuf::RepeatedPtrField< ::cb::Company_PhoneNumber >*
Company::mutable_phone() {
  return &phone_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace cb

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::cb::Job_Type>() {
  return ::cb::Job_Type_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::cb::Company_PhoneType>() {
  return ::cb::Company_PhoneType_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_careerbuilder_2eproto__INCLUDED
