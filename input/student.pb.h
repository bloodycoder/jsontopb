// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: student.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_student_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_student_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_student_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_student_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_student_2eproto;
namespace somepack {
class somestudent;
class somestudentDefaultTypeInternal;
extern somestudentDefaultTypeInternal _somestudent_default_instance_;
class somestudent_Course;
class somestudent_CourseDefaultTypeInternal;
extern somestudent_CourseDefaultTypeInternal _somestudent_Course_default_instance_;
}  // namespace somepack
PROTOBUF_NAMESPACE_OPEN
template<> ::somepack::somestudent* Arena::CreateMaybeMessage<::somepack::somestudent>(Arena*);
template<> ::somepack::somestudent_Course* Arena::CreateMaybeMessage<::somepack::somestudent_Course>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace somepack {

// ===================================================================

class somestudent_Course :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:somepack.somestudent.Course) */ {
 public:
  somestudent_Course();
  virtual ~somestudent_Course();

  somestudent_Course(const somestudent_Course& from);
  somestudent_Course(somestudent_Course&& from) noexcept
    : somestudent_Course() {
    *this = ::std::move(from);
  }

  inline somestudent_Course& operator=(const somestudent_Course& from) {
    CopyFrom(from);
    return *this;
  }
  inline somestudent_Course& operator=(somestudent_Course&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const somestudent_Course& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const somestudent_Course* internal_default_instance() {
    return reinterpret_cast<const somestudent_Course*>(
               &_somestudent_Course_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(somestudent_Course& a, somestudent_Course& b) {
    a.Swap(&b);
  }
  inline void Swap(somestudent_Course* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline somestudent_Course* New() const final {
    return CreateMaybeMessage<somestudent_Course>(nullptr);
  }

  somestudent_Course* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<somestudent_Course>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const somestudent_Course& from);
  void MergeFrom(const somestudent_Course& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(somestudent_Course* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "somepack.somestudent.Course";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_student_2eproto);
    return ::descriptor_table_student_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCoursenameFieldNumber = 1,
    kCourseidFieldNumber = 2,
  };
  // required string _coursename = 1;
  bool has__coursename() const;
  private:
  bool _internal_has__coursename() const;
  public:
  void clear__coursename();
  const std::string& _coursename() const;
  void set__coursename(const std::string& value);
  void set__coursename(std::string&& value);
  void set__coursename(const char* value);
  void set__coursename(const char* value, size_t size);
  std::string* mutable__coursename();
  std::string* release__coursename();
  void set_allocated__coursename(std::string* _coursename);
  private:
  const std::string& _internal__coursename() const;
  void _internal_set__coursename(const std::string& value);
  std::string* _internal_mutable__coursename();
  public:

  // required int32 _courseid = 2;
  bool has__courseid() const;
  private:
  bool _internal_has__courseid() const;
  public:
  void clear__courseid();
  ::PROTOBUF_NAMESPACE_ID::int32 _courseid() const;
  void set__courseid(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal__courseid() const;
  void _internal_set__courseid(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:somepack.somestudent.Course)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr _coursename_;
  ::PROTOBUF_NAMESPACE_ID::int32 _courseid_;
  friend struct ::TableStruct_student_2eproto;
};
// -------------------------------------------------------------------

class somestudent :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:somepack.somestudent) */ {
 public:
  somestudent();
  virtual ~somestudent();

  somestudent(const somestudent& from);
  somestudent(somestudent&& from) noexcept
    : somestudent() {
    *this = ::std::move(from);
  }

  inline somestudent& operator=(const somestudent& from) {
    CopyFrom(from);
    return *this;
  }
  inline somestudent& operator=(somestudent&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const somestudent& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const somestudent* internal_default_instance() {
    return reinterpret_cast<const somestudent*>(
               &_somestudent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(somestudent& a, somestudent& b) {
    a.Swap(&b);
  }
  inline void Swap(somestudent* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline somestudent* New() const final {
    return CreateMaybeMessage<somestudent>(nullptr);
  }

  somestudent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<somestudent>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const somestudent& from);
  void MergeFrom(const somestudent& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(somestudent* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "somepack.somestudent";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_student_2eproto);
    return ::descriptor_table_student_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef somestudent_Course Course;

  // accessors -------------------------------------------------------

  enum : int {
    kPhonenumberFieldNumber = 11,
    kSelectedcourseFieldNumber = 12,
    kNameFieldNumber = 1,
    kStudentidFieldNumber = 4,
    kAgeFieldNumber = 3,
    kSexFieldNumber = 2,
    kMarriageFieldNumber = 5,
  };
  // repeated string _phonenumber = 11;
  int _phonenumber_size() const;
  private:
  int _internal__phonenumber_size() const;
  public:
  void clear__phonenumber();
  const std::string& _phonenumber(int index) const;
  std::string* mutable__phonenumber(int index);
  void set__phonenumber(int index, const std::string& value);
  void set__phonenumber(int index, std::string&& value);
  void set__phonenumber(int index, const char* value);
  void set__phonenumber(int index, const char* value, size_t size);
  std::string* add__phonenumber();
  void add__phonenumber(const std::string& value);
  void add__phonenumber(std::string&& value);
  void add__phonenumber(const char* value);
  void add__phonenumber(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& _phonenumber() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable__phonenumber();
  private:
  const std::string& _internal__phonenumber(int index) const;
  std::string* _internal_add__phonenumber();
  public:

  // repeated .somepack.somestudent.Course _selectedcourse = 12;
  int _selectedcourse_size() const;
  private:
  int _internal__selectedcourse_size() const;
  public:
  void clear__selectedcourse();
  ::somepack::somestudent_Course* mutable__selectedcourse(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::somepack::somestudent_Course >*
      mutable__selectedcourse();
  private:
  const ::somepack::somestudent_Course& _internal__selectedcourse(int index) const;
  ::somepack::somestudent_Course* _internal_add__selectedcourse();
  public:
  const ::somepack::somestudent_Course& _selectedcourse(int index) const;
  ::somepack::somestudent_Course* add__selectedcourse();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::somepack::somestudent_Course >&
      _selectedcourse() const;

  // required string _name = 1;
  bool has__name() const;
  private:
  bool _internal_has__name() const;
  public:
  void clear__name();
  const std::string& _name() const;
  void set__name(const std::string& value);
  void set__name(std::string&& value);
  void set__name(const char* value);
  void set__name(const char* value, size_t size);
  std::string* mutable__name();
  std::string* release__name();
  void set_allocated__name(std::string* _name);
  private:
  const std::string& _internal__name() const;
  void _internal_set__name(const std::string& value);
  std::string* _internal_mutable__name();
  public:

  // required string _studentid = 4;
  bool has__studentid() const;
  private:
  bool _internal_has__studentid() const;
  public:
  void clear__studentid();
  const std::string& _studentid() const;
  void set__studentid(const std::string& value);
  void set__studentid(std::string&& value);
  void set__studentid(const char* value);
  void set__studentid(const char* value, size_t size);
  std::string* mutable__studentid();
  std::string* release__studentid();
  void set_allocated__studentid(std::string* _studentid);
  private:
  const std::string& _internal__studentid() const;
  void _internal_set__studentid(const std::string& value);
  std::string* _internal_mutable__studentid();
  public:

  // required int32 _age = 3;
  bool has__age() const;
  private:
  bool _internal_has__age() const;
  public:
  void clear__age();
  ::PROTOBUF_NAMESPACE_ID::int32 _age() const;
  void set__age(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal__age() const;
  void _internal_set__age(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required bool _sex = 2;
  bool has__sex() const;
  private:
  bool _internal_has__sex() const;
  public:
  void clear__sex();
  bool _sex() const;
  void set__sex(bool value);
  private:
  bool _internal__sex() const;
  void _internal_set__sex(bool value);
  public:

  // optional bool _marriage = 5;
  bool has__marriage() const;
  private:
  bool _internal_has__marriage() const;
  public:
  void clear__marriage();
  bool _marriage() const;
  void set__marriage(bool value);
  private:
  bool _internal__marriage() const;
  void _internal_set__marriage(bool value);
  public:

  // @@protoc_insertion_point(class_scope:somepack.somestudent)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> _phonenumber_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::somepack::somestudent_Course > _selectedcourse_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr _name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr _studentid_;
  ::PROTOBUF_NAMESPACE_ID::int32 _age_;
  bool _sex_;
  bool _marriage_;
  friend struct ::TableStruct_student_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// somestudent_Course

// required string _coursename = 1;
inline bool somestudent_Course::_internal_has__coursename() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool somestudent_Course::has__coursename() const {
  return _internal_has__coursename();
}
inline void somestudent_Course::clear__coursename() {
  _coursename_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& somestudent_Course::_coursename() const {
  // @@protoc_insertion_point(field_get:somepack.somestudent.Course._coursename)
  return _internal__coursename();
}
inline void somestudent_Course::set__coursename(const std::string& value) {
  _internal_set__coursename(value);
  // @@protoc_insertion_point(field_set:somepack.somestudent.Course._coursename)
}
inline std::string* somestudent_Course::mutable__coursename() {
  // @@protoc_insertion_point(field_mutable:somepack.somestudent.Course._coursename)
  return _internal_mutable__coursename();
}
inline const std::string& somestudent_Course::_internal__coursename() const {
  return _coursename_.GetNoArena();
}
inline void somestudent_Course::_internal_set__coursename(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  _coursename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void somestudent_Course::set__coursename(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  _coursename_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:somepack.somestudent.Course._coursename)
}
inline void somestudent_Course::set__coursename(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  _coursename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:somepack.somestudent.Course._coursename)
}
inline void somestudent_Course::set__coursename(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  _coursename_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:somepack.somestudent.Course._coursename)
}
inline std::string* somestudent_Course::_internal_mutable__coursename() {
  _has_bits_[0] |= 0x00000001u;
  return _coursename_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* somestudent_Course::release__coursename() {
  // @@protoc_insertion_point(field_release:somepack.somestudent.Course._coursename)
  if (!_internal_has__coursename()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return _coursename_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void somestudent_Course::set_allocated__coursename(std::string* _coursename) {
  if (_coursename != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  _coursename_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), _coursename);
  // @@protoc_insertion_point(field_set_allocated:somepack.somestudent.Course._coursename)
}

// required int32 _courseid = 2;
inline bool somestudent_Course::_internal_has__courseid() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool somestudent_Course::has__courseid() const {
  return _internal_has__courseid();
}
inline void somestudent_Course::clear__courseid() {
  _courseid_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 somestudent_Course::_internal__courseid() const {
  return _courseid_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 somestudent_Course::_courseid() const {
  // @@protoc_insertion_point(field_get:somepack.somestudent.Course._courseid)
  return _internal__courseid();
}
inline void somestudent_Course::_internal_set__courseid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  _courseid_ = value;
}
inline void somestudent_Course::set__courseid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set__courseid(value);
  // @@protoc_insertion_point(field_set:somepack.somestudent.Course._courseid)
}

// -------------------------------------------------------------------

// somestudent

// required string _name = 1;
inline bool somestudent::_internal_has__name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool somestudent::has__name() const {
  return _internal_has__name();
}
inline void somestudent::clear__name() {
  _name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& somestudent::_name() const {
  // @@protoc_insertion_point(field_get:somepack.somestudent._name)
  return _internal__name();
}
inline void somestudent::set__name(const std::string& value) {
  _internal_set__name(value);
  // @@protoc_insertion_point(field_set:somepack.somestudent._name)
}
inline std::string* somestudent::mutable__name() {
  // @@protoc_insertion_point(field_mutable:somepack.somestudent._name)
  return _internal_mutable__name();
}
inline const std::string& somestudent::_internal__name() const {
  return _name_.GetNoArena();
}
inline void somestudent::_internal_set__name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  _name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void somestudent::set__name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  _name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:somepack.somestudent._name)
}
inline void somestudent::set__name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  _name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:somepack.somestudent._name)
}
inline void somestudent::set__name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  _name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:somepack.somestudent._name)
}
inline std::string* somestudent::_internal_mutable__name() {
  _has_bits_[0] |= 0x00000001u;
  return _name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* somestudent::release__name() {
  // @@protoc_insertion_point(field_release:somepack.somestudent._name)
  if (!_internal_has__name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return _name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void somestudent::set_allocated__name(std::string* _name) {
  if (_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  _name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), _name);
  // @@protoc_insertion_point(field_set_allocated:somepack.somestudent._name)
}

// required bool _sex = 2;
inline bool somestudent::_internal_has__sex() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool somestudent::has__sex() const {
  return _internal_has__sex();
}
inline void somestudent::clear__sex() {
  _sex_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool somestudent::_internal__sex() const {
  return _sex_;
}
inline bool somestudent::_sex() const {
  // @@protoc_insertion_point(field_get:somepack.somestudent._sex)
  return _internal__sex();
}
inline void somestudent::_internal_set__sex(bool value) {
  _has_bits_[0] |= 0x00000008u;
  _sex_ = value;
}
inline void somestudent::set__sex(bool value) {
  _internal_set__sex(value);
  // @@protoc_insertion_point(field_set:somepack.somestudent._sex)
}

// required int32 _age = 3;
inline bool somestudent::_internal_has__age() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool somestudent::has__age() const {
  return _internal_has__age();
}
inline void somestudent::clear__age() {
  _age_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 somestudent::_internal__age() const {
  return _age_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 somestudent::_age() const {
  // @@protoc_insertion_point(field_get:somepack.somestudent._age)
  return _internal__age();
}
inline void somestudent::_internal_set__age(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  _age_ = value;
}
inline void somestudent::set__age(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set__age(value);
  // @@protoc_insertion_point(field_set:somepack.somestudent._age)
}

// required string _studentid = 4;
inline bool somestudent::_internal_has__studentid() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool somestudent::has__studentid() const {
  return _internal_has__studentid();
}
inline void somestudent::clear__studentid() {
  _studentid_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& somestudent::_studentid() const {
  // @@protoc_insertion_point(field_get:somepack.somestudent._studentid)
  return _internal__studentid();
}
inline void somestudent::set__studentid(const std::string& value) {
  _internal_set__studentid(value);
  // @@protoc_insertion_point(field_set:somepack.somestudent._studentid)
}
inline std::string* somestudent::mutable__studentid() {
  // @@protoc_insertion_point(field_mutable:somepack.somestudent._studentid)
  return _internal_mutable__studentid();
}
inline const std::string& somestudent::_internal__studentid() const {
  return _studentid_.GetNoArena();
}
inline void somestudent::_internal_set__studentid(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  _studentid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void somestudent::set__studentid(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  _studentid_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:somepack.somestudent._studentid)
}
inline void somestudent::set__studentid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  _studentid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:somepack.somestudent._studentid)
}
inline void somestudent::set__studentid(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  _studentid_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:somepack.somestudent._studentid)
}
inline std::string* somestudent::_internal_mutable__studentid() {
  _has_bits_[0] |= 0x00000002u;
  return _studentid_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* somestudent::release__studentid() {
  // @@protoc_insertion_point(field_release:somepack.somestudent._studentid)
  if (!_internal_has__studentid()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return _studentid_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void somestudent::set_allocated__studentid(std::string* _studentid) {
  if (_studentid != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  _studentid_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), _studentid);
  // @@protoc_insertion_point(field_set_allocated:somepack.somestudent._studentid)
}

// optional bool _marriage = 5;
inline bool somestudent::_internal_has__marriage() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool somestudent::has__marriage() const {
  return _internal_has__marriage();
}
inline void somestudent::clear__marriage() {
  _marriage_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool somestudent::_internal__marriage() const {
  return _marriage_;
}
inline bool somestudent::_marriage() const {
  // @@protoc_insertion_point(field_get:somepack.somestudent._marriage)
  return _internal__marriage();
}
inline void somestudent::_internal_set__marriage(bool value) {
  _has_bits_[0] |= 0x00000010u;
  _marriage_ = value;
}
inline void somestudent::set__marriage(bool value) {
  _internal_set__marriage(value);
  // @@protoc_insertion_point(field_set:somepack.somestudent._marriage)
}

// repeated string _phonenumber = 11;
inline int somestudent::_internal__phonenumber_size() const {
  return _phonenumber_.size();
}
inline int somestudent::_phonenumber_size() const {
  return _internal__phonenumber_size();
}
inline void somestudent::clear__phonenumber() {
  _phonenumber_.Clear();
}
inline std::string* somestudent::add__phonenumber() {
  // @@protoc_insertion_point(field_add_mutable:somepack.somestudent._phonenumber)
  return _internal_add__phonenumber();
}
inline const std::string& somestudent::_internal__phonenumber(int index) const {
  return _phonenumber_.Get(index);
}
inline const std::string& somestudent::_phonenumber(int index) const {
  // @@protoc_insertion_point(field_get:somepack.somestudent._phonenumber)
  return _internal__phonenumber(index);
}
inline std::string* somestudent::mutable__phonenumber(int index) {
  // @@protoc_insertion_point(field_mutable:somepack.somestudent._phonenumber)
  return _phonenumber_.Mutable(index);
}
inline void somestudent::set__phonenumber(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:somepack.somestudent._phonenumber)
  _phonenumber_.Mutable(index)->assign(value);
}
inline void somestudent::set__phonenumber(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:somepack.somestudent._phonenumber)
  _phonenumber_.Mutable(index)->assign(std::move(value));
}
inline void somestudent::set__phonenumber(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _phonenumber_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:somepack.somestudent._phonenumber)
}
inline void somestudent::set__phonenumber(int index, const char* value, size_t size) {
  _phonenumber_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:somepack.somestudent._phonenumber)
}
inline std::string* somestudent::_internal_add__phonenumber() {
  return _phonenumber_.Add();
}
inline void somestudent::add__phonenumber(const std::string& value) {
  _phonenumber_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:somepack.somestudent._phonenumber)
}
inline void somestudent::add__phonenumber(std::string&& value) {
  _phonenumber_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:somepack.somestudent._phonenumber)
}
inline void somestudent::add__phonenumber(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _phonenumber_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:somepack.somestudent._phonenumber)
}
inline void somestudent::add__phonenumber(const char* value, size_t size) {
  _phonenumber_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:somepack.somestudent._phonenumber)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
somestudent::_phonenumber() const {
  // @@protoc_insertion_point(field_list:somepack.somestudent._phonenumber)
  return _phonenumber_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
somestudent::mutable__phonenumber() {
  // @@protoc_insertion_point(field_mutable_list:somepack.somestudent._phonenumber)
  return &_phonenumber_;
}

// repeated .somepack.somestudent.Course _selectedcourse = 12;
inline int somestudent::_internal__selectedcourse_size() const {
  return _selectedcourse_.size();
}
inline int somestudent::_selectedcourse_size() const {
  return _internal__selectedcourse_size();
}
inline void somestudent::clear__selectedcourse() {
  _selectedcourse_.Clear();
}
inline ::somepack::somestudent_Course* somestudent::mutable__selectedcourse(int index) {
  // @@protoc_insertion_point(field_mutable:somepack.somestudent._selectedcourse)
  return _selectedcourse_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::somepack::somestudent_Course >*
somestudent::mutable__selectedcourse() {
  // @@protoc_insertion_point(field_mutable_list:somepack.somestudent._selectedcourse)
  return &_selectedcourse_;
}
inline const ::somepack::somestudent_Course& somestudent::_internal__selectedcourse(int index) const {
  return _selectedcourse_.Get(index);
}
inline const ::somepack::somestudent_Course& somestudent::_selectedcourse(int index) const {
  // @@protoc_insertion_point(field_get:somepack.somestudent._selectedcourse)
  return _internal__selectedcourse(index);
}
inline ::somepack::somestudent_Course* somestudent::_internal_add__selectedcourse() {
  return _selectedcourse_.Add();
}
inline ::somepack::somestudent_Course* somestudent::add__selectedcourse() {
  // @@protoc_insertion_point(field_add:somepack.somestudent._selectedcourse)
  return _internal_add__selectedcourse();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::somepack::somestudent_Course >&
somestudent::_selectedcourse() const {
  // @@protoc_insertion_point(field_list:somepack.somestudent._selectedcourse)
  return _selectedcourse_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace somepack

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_student_2eproto
