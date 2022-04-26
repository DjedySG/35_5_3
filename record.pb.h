// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: record.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_record_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_record_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_record_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_record_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_record_2eproto;
class Record_buffer;
struct Record_bufferDefaultTypeInternal;
extern Record_bufferDefaultTypeInternal _Record_buffer_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Record_buffer* Arena::CreateMaybeMessage<::Record_buffer>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Record_buffer final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Record_buffer) */ {
 public:
  inline Record_buffer() : Record_buffer(nullptr) {}
  ~Record_buffer() override;
  explicit PROTOBUF_CONSTEXPR Record_buffer(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Record_buffer(const Record_buffer& from);
  Record_buffer(Record_buffer&& from) noexcept
    : Record_buffer() {
    *this = ::std::move(from);
  }

  inline Record_buffer& operator=(const Record_buffer& from) {
    CopyFrom(from);
    return *this;
  }
  inline Record_buffer& operator=(Record_buffer&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Record_buffer& default_instance() {
    return *internal_default_instance();
  }
  static inline const Record_buffer* internal_default_instance() {
    return reinterpret_cast<const Record_buffer*>(
               &_Record_buffer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Record_buffer& a, Record_buffer& b) {
    a.Swap(&b);
  }
  inline void Swap(Record_buffer* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Record_buffer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Record_buffer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Record_buffer>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Record_buffer& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Record_buffer& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Record_buffer* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Record_buffer";
  }
  protected:
  explicit Record_buffer(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kFamileFieldNumber = 2,
    kAgeFieldNumber = 3,
    kMarriedFieldNumber = 4,
  };
  // required string name = 1;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // required string famile = 2;
  bool has_famile() const;
  private:
  bool _internal_has_famile() const;
  public:
  void clear_famile();
  const std::string& famile() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_famile(ArgT0&& arg0, ArgT... args);
  std::string* mutable_famile();
  PROTOBUF_NODISCARD std::string* release_famile();
  void set_allocated_famile(std::string* famile);
  private:
  const std::string& _internal_famile() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_famile(const std::string& value);
  std::string* _internal_mutable_famile();
  public:

  // optional int32 age = 3;
  bool has_age() const;
  private:
  bool _internal_has_age() const;
  public:
  void clear_age();
  int32_t age() const;
  void set_age(int32_t value);
  private:
  int32_t _internal_age() const;
  void _internal_set_age(int32_t value);
  public:

  // optional bool married = 4;
  bool has_married() const;
  private:
  bool _internal_has_married() const;
  public:
  void clear_married();
  bool married() const;
  void set_married(bool value);
  private:
  bool _internal_married() const;
  void _internal_set_married(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Record_buffer)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr famile_;
  int32_t age_;
  bool married_;
  friend struct ::TableStruct_record_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Record_buffer

// required string name = 1;
inline bool Record_buffer::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Record_buffer::has_name() const {
  return _internal_has_name();
}
inline void Record_buffer::clear_name() {
  name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Record_buffer::name() const {
  // @@protoc_insertion_point(field_get:Record_buffer.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Record_buffer::set_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Record_buffer.name)
}
inline std::string* Record_buffer::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:Record_buffer.name)
  return _s;
}
inline const std::string& Record_buffer::_internal_name() const {
  return name_.Get();
}
inline void Record_buffer::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(value, GetArenaForAllocation());
}
inline std::string* Record_buffer::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.Mutable(GetArenaForAllocation());
}
inline std::string* Record_buffer::release_name() {
  // @@protoc_insertion_point(field_release:Record_buffer.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Record_buffer::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Record_buffer.name)
}

// required string famile = 2;
inline bool Record_buffer::_internal_has_famile() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Record_buffer::has_famile() const {
  return _internal_has_famile();
}
inline void Record_buffer::clear_famile() {
  famile_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Record_buffer::famile() const {
  // @@protoc_insertion_point(field_get:Record_buffer.famile)
  return _internal_famile();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Record_buffer::set_famile(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 famile_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Record_buffer.famile)
}
inline std::string* Record_buffer::mutable_famile() {
  std::string* _s = _internal_mutable_famile();
  // @@protoc_insertion_point(field_mutable:Record_buffer.famile)
  return _s;
}
inline const std::string& Record_buffer::_internal_famile() const {
  return famile_.Get();
}
inline void Record_buffer::_internal_set_famile(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  famile_.Set(value, GetArenaForAllocation());
}
inline std::string* Record_buffer::_internal_mutable_famile() {
  _has_bits_[0] |= 0x00000002u;
  return famile_.Mutable(GetArenaForAllocation());
}
inline std::string* Record_buffer::release_famile() {
  // @@protoc_insertion_point(field_release:Record_buffer.famile)
  if (!_internal_has_famile()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = famile_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (famile_.IsDefault()) {
    famile_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Record_buffer::set_allocated_famile(std::string* famile) {
  if (famile != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  famile_.SetAllocated(famile, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (famile_.IsDefault()) {
    famile_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Record_buffer.famile)
}

// optional int32 age = 3;
inline bool Record_buffer::_internal_has_age() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Record_buffer::has_age() const {
  return _internal_has_age();
}
inline void Record_buffer::clear_age() {
  age_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t Record_buffer::_internal_age() const {
  return age_;
}
inline int32_t Record_buffer::age() const {
  // @@protoc_insertion_point(field_get:Record_buffer.age)
  return _internal_age();
}
inline void Record_buffer::_internal_set_age(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  age_ = value;
}
inline void Record_buffer::set_age(int32_t value) {
  _internal_set_age(value);
  // @@protoc_insertion_point(field_set:Record_buffer.age)
}

// optional bool married = 4;
inline bool Record_buffer::_internal_has_married() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Record_buffer::has_married() const {
  return _internal_has_married();
}
inline void Record_buffer::clear_married() {
  married_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool Record_buffer::_internal_married() const {
  return married_;
}
inline bool Record_buffer::married() const {
  // @@protoc_insertion_point(field_get:Record_buffer.married)
  return _internal_married();
}
inline void Record_buffer::_internal_set_married(bool value) {
  _has_bits_[0] |= 0x00000008u;
  married_ = value;
}
inline void Record_buffer::set_married(bool value) {
  _internal_set_married(value);
  // @@protoc_insertion_point(field_set:Record_buffer.married)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_record_2eproto