// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: flyteidl/core/errors.proto

#include "flyteidl/core/errors.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_flyteidl_2fcore_2ferrors_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_ContainerError_flyteidl_2fcore_2ferrors_2eproto;
namespace flyteidl {
namespace core {
class ContainerErrorDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ContainerError> _instance;
} _ContainerError_default_instance_;
class ErrorDocumentDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ErrorDocument> _instance;
} _ErrorDocument_default_instance_;
}  // namespace core
}  // namespace flyteidl
static void InitDefaultsContainerError_flyteidl_2fcore_2ferrors_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::flyteidl::core::_ContainerError_default_instance_;
    new (ptr) ::flyteidl::core::ContainerError();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::flyteidl::core::ContainerError::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ContainerError_flyteidl_2fcore_2ferrors_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsContainerError_flyteidl_2fcore_2ferrors_2eproto}, {}};

static void InitDefaultsErrorDocument_flyteidl_2fcore_2ferrors_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::flyteidl::core::_ErrorDocument_default_instance_;
    new (ptr) ::flyteidl::core::ErrorDocument();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::flyteidl::core::ErrorDocument::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_ErrorDocument_flyteidl_2fcore_2ferrors_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsErrorDocument_flyteidl_2fcore_2ferrors_2eproto}, {
      &scc_info_ContainerError_flyteidl_2fcore_2ferrors_2eproto.base,}};

void InitDefaults_flyteidl_2fcore_2ferrors_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_ContainerError_flyteidl_2fcore_2ferrors_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_ErrorDocument_flyteidl_2fcore_2ferrors_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_flyteidl_2fcore_2ferrors_2eproto[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_flyteidl_2fcore_2ferrors_2eproto[1];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_flyteidl_2fcore_2ferrors_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_flyteidl_2fcore_2ferrors_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::ContainerError, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::ContainerError, code_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::ContainerError, message_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::ContainerError, kind_),
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::ContainerError, origin_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::ErrorDocument, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::flyteidl::core::ErrorDocument, error_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::flyteidl::core::ContainerError)},
  { 9, -1, sizeof(::flyteidl::core::ErrorDocument)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::flyteidl::core::_ContainerError_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::flyteidl::core::_ErrorDocument_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_flyteidl_2fcore_2ferrors_2eproto = {
  {}, AddDescriptors_flyteidl_2fcore_2ferrors_2eproto, "flyteidl/core/errors.proto", schemas,
  file_default_instances, TableStruct_flyteidl_2fcore_2ferrors_2eproto::offsets,
  file_level_metadata_flyteidl_2fcore_2ferrors_2eproto, 2, file_level_enum_descriptors_flyteidl_2fcore_2ferrors_2eproto, file_level_service_descriptors_flyteidl_2fcore_2ferrors_2eproto,
};

const char descriptor_table_protodef_flyteidl_2fcore_2ferrors_2eproto[] =
  "\n\032flyteidl/core/errors.proto\022\rflyteidl.c"
  "ore\032\035flyteidl/core/execution.proto\"\310\001\n\016C"
  "ontainerError\022\014\n\004code\030\001 \001(\t\022\017\n\007message\030\002"
  " \001(\t\0220\n\004kind\030\003 \001(\0162\".flyteidl.core.Conta"
  "inerError.Kind\0227\n\006origin\030\004 \001(\0162\'.flyteid"
  "l.core.ExecutionError.ErrorKind\",\n\004Kind\022"
  "\023\n\017NON_RECOVERABLE\020\000\022\017\n\013RECOVERABLE\020\001\"=\n"
  "\rErrorDocument\022,\n\005error\030\001 \001(\0132\035.flyteidl"
  ".core.ContainerErrorB6Z4github.com/flyte"
  "org/flyteidl/gen/pb-go/flyteidl/coreb\006pr"
  "oto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_flyteidl_2fcore_2ferrors_2eproto = {
  false, InitDefaults_flyteidl_2fcore_2ferrors_2eproto, 
  descriptor_table_protodef_flyteidl_2fcore_2ferrors_2eproto,
  "flyteidl/core/errors.proto", &assign_descriptors_table_flyteidl_2fcore_2ferrors_2eproto, 404,
};

void AddDescriptors_flyteidl_2fcore_2ferrors_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_flyteidl_2fcore_2fexecution_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_flyteidl_2fcore_2ferrors_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_flyteidl_2fcore_2ferrors_2eproto = []() { AddDescriptors_flyteidl_2fcore_2ferrors_2eproto(); return true; }();
namespace flyteidl {
namespace core {
const ::google::protobuf::EnumDescriptor* ContainerError_Kind_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_flyteidl_2fcore_2ferrors_2eproto);
  return file_level_enum_descriptors_flyteidl_2fcore_2ferrors_2eproto[0];
}
bool ContainerError_Kind_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const ContainerError_Kind ContainerError::NON_RECOVERABLE;
const ContainerError_Kind ContainerError::RECOVERABLE;
const ContainerError_Kind ContainerError::Kind_MIN;
const ContainerError_Kind ContainerError::Kind_MAX;
const int ContainerError::Kind_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void ContainerError::InitAsDefaultInstance() {
}
class ContainerError::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ContainerError::kCodeFieldNumber;
const int ContainerError::kMessageFieldNumber;
const int ContainerError::kKindFieldNumber;
const int ContainerError::kOriginFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ContainerError::ContainerError()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:flyteidl.core.ContainerError)
}
ContainerError::ContainerError(const ContainerError& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.code().size() > 0) {
    code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.code_);
  }
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.message().size() > 0) {
    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  ::memcpy(&kind_, &from.kind_,
    static_cast<size_t>(reinterpret_cast<char*>(&origin_) -
    reinterpret_cast<char*>(&kind_)) + sizeof(origin_));
  // @@protoc_insertion_point(copy_constructor:flyteidl.core.ContainerError)
}

void ContainerError::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_ContainerError_flyteidl_2fcore_2ferrors_2eproto.base);
  code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&kind_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&origin_) -
      reinterpret_cast<char*>(&kind_)) + sizeof(origin_));
}

ContainerError::~ContainerError() {
  // @@protoc_insertion_point(destructor:flyteidl.core.ContainerError)
  SharedDtor();
}

void ContainerError::SharedDtor() {
  code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ContainerError::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ContainerError& ContainerError::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_ContainerError_flyteidl_2fcore_2ferrors_2eproto.base);
  return *internal_default_instance();
}


void ContainerError::Clear() {
// @@protoc_insertion_point(message_clear_start:flyteidl.core.ContainerError)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&kind_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&origin_) -
      reinterpret_cast<char*>(&kind_)) + sizeof(origin_));
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ContainerError::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<ContainerError*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string code = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("flyteidl.core.ContainerError.code");
        object = msg->mutable_code();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string message = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("flyteidl.core.ContainerError.message");
        object = msg->mutable_message();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // .flyteidl.core.ContainerError.Kind kind = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 24) goto handle_unusual;
        ::google::protobuf::uint64 val = ::google::protobuf::internal::ReadVarint(&ptr);
        msg->set_kind(static_cast<::flyteidl::core::ContainerError_Kind>(val));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // .flyteidl.core.ExecutionError.ErrorKind origin = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 32) goto handle_unusual;
        ::google::protobuf::uint64 val = ::google::protobuf::internal::ReadVarint(&ptr);
        msg->set_origin(static_cast<::flyteidl::core::ExecutionError_ErrorKind>(val));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ContainerError::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:flyteidl.core.ContainerError)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string code = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_code()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->code().data(), static_cast<int>(this->code().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "flyteidl.core.ContainerError.code"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string message = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->message().data(), static_cast<int>(this->message().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "flyteidl.core.ContainerError.message"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .flyteidl.core.ContainerError.Kind kind = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (24 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_kind(static_cast< ::flyteidl::core::ContainerError_Kind >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .flyteidl.core.ExecutionError.ErrorKind origin = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (32 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_origin(static_cast< ::flyteidl::core::ExecutionError_ErrorKind >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:flyteidl.core.ContainerError)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:flyteidl.core.ContainerError)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ContainerError::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:flyteidl.core.ContainerError)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string code = 1;
  if (this->code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->code().data(), static_cast<int>(this->code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.core.ContainerError.code");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->code(), output);
  }

  // string message = 2;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), static_cast<int>(this->message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.core.ContainerError.message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->message(), output);
  }

  // .flyteidl.core.ContainerError.Kind kind = 3;
  if (this->kind() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->kind(), output);
  }

  // .flyteidl.core.ExecutionError.ErrorKind origin = 4;
  if (this->origin() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->origin(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:flyteidl.core.ContainerError)
}

::google::protobuf::uint8* ContainerError::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:flyteidl.core.ContainerError)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string code = 1;
  if (this->code().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->code().data(), static_cast<int>(this->code().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.core.ContainerError.code");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->code(), target);
  }

  // string message = 2;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), static_cast<int>(this->message().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "flyteidl.core.ContainerError.message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->message(), target);
  }

  // .flyteidl.core.ContainerError.Kind kind = 3;
  if (this->kind() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      3, this->kind(), target);
  }

  // .flyteidl.core.ExecutionError.ErrorKind origin = 4;
  if (this->origin() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->origin(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:flyteidl.core.ContainerError)
  return target;
}

size_t ContainerError::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:flyteidl.core.ContainerError)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string code = 1;
  if (this->code().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->code());
  }

  // string message = 2;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->message());
  }

  // .flyteidl.core.ContainerError.Kind kind = 3;
  if (this->kind() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->kind());
  }

  // .flyteidl.core.ExecutionError.ErrorKind origin = 4;
  if (this->origin() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->origin());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ContainerError::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:flyteidl.core.ContainerError)
  GOOGLE_DCHECK_NE(&from, this);
  const ContainerError* source =
      ::google::protobuf::DynamicCastToGenerated<ContainerError>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:flyteidl.core.ContainerError)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:flyteidl.core.ContainerError)
    MergeFrom(*source);
  }
}

void ContainerError::MergeFrom(const ContainerError& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:flyteidl.core.ContainerError)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.code().size() > 0) {

    code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.code_);
  }
  if (from.message().size() > 0) {

    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  if (from.kind() != 0) {
    set_kind(from.kind());
  }
  if (from.origin() != 0) {
    set_origin(from.origin());
  }
}

void ContainerError::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:flyteidl.core.ContainerError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ContainerError::CopyFrom(const ContainerError& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:flyteidl.core.ContainerError)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ContainerError::IsInitialized() const {
  return true;
}

void ContainerError::Swap(ContainerError* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ContainerError::InternalSwap(ContainerError* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  code_.Swap(&other->code_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  message_.Swap(&other->message_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(kind_, other->kind_);
  swap(origin_, other->origin_);
}

::google::protobuf::Metadata ContainerError::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_flyteidl_2fcore_2ferrors_2eproto);
  return ::file_level_metadata_flyteidl_2fcore_2ferrors_2eproto[kIndexInFileMessages];
}


// ===================================================================

void ErrorDocument::InitAsDefaultInstance() {
  ::flyteidl::core::_ErrorDocument_default_instance_._instance.get_mutable()->error_ = const_cast< ::flyteidl::core::ContainerError*>(
      ::flyteidl::core::ContainerError::internal_default_instance());
}
class ErrorDocument::HasBitSetters {
 public:
  static const ::flyteidl::core::ContainerError& error(const ErrorDocument* msg);
};

const ::flyteidl::core::ContainerError&
ErrorDocument::HasBitSetters::error(const ErrorDocument* msg) {
  return *msg->error_;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ErrorDocument::kErrorFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ErrorDocument::ErrorDocument()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:flyteidl.core.ErrorDocument)
}
ErrorDocument::ErrorDocument(const ErrorDocument& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_error()) {
    error_ = new ::flyteidl::core::ContainerError(*from.error_);
  } else {
    error_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:flyteidl.core.ErrorDocument)
}

void ErrorDocument::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_ErrorDocument_flyteidl_2fcore_2ferrors_2eproto.base);
  error_ = nullptr;
}

ErrorDocument::~ErrorDocument() {
  // @@protoc_insertion_point(destructor:flyteidl.core.ErrorDocument)
  SharedDtor();
}

void ErrorDocument::SharedDtor() {
  if (this != internal_default_instance()) delete error_;
}

void ErrorDocument::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ErrorDocument& ErrorDocument::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_ErrorDocument_flyteidl_2fcore_2ferrors_2eproto.base);
  return *internal_default_instance();
}


void ErrorDocument::Clear() {
// @@protoc_insertion_point(message_clear_start:flyteidl.core.ErrorDocument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && error_ != nullptr) {
    delete error_;
  }
  error_ = nullptr;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* ErrorDocument::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<ErrorDocument*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // .flyteidl.core.ContainerError error = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::flyteidl::core::ContainerError::_InternalParse;
        object = msg->mutable_error();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool ErrorDocument::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:flyteidl.core.ErrorDocument)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .flyteidl.core.ContainerError error = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_error()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:flyteidl.core.ErrorDocument)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:flyteidl.core.ErrorDocument)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void ErrorDocument::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:flyteidl.core.ErrorDocument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .flyteidl.core.ContainerError error = 1;
  if (this->has_error()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::error(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:flyteidl.core.ErrorDocument)
}

::google::protobuf::uint8* ErrorDocument::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:flyteidl.core.ErrorDocument)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .flyteidl.core.ContainerError error = 1;
  if (this->has_error()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::error(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:flyteidl.core.ErrorDocument)
  return target;
}

size_t ErrorDocument::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:flyteidl.core.ErrorDocument)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .flyteidl.core.ContainerError error = 1;
  if (this->has_error()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *error_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ErrorDocument::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:flyteidl.core.ErrorDocument)
  GOOGLE_DCHECK_NE(&from, this);
  const ErrorDocument* source =
      ::google::protobuf::DynamicCastToGenerated<ErrorDocument>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:flyteidl.core.ErrorDocument)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:flyteidl.core.ErrorDocument)
    MergeFrom(*source);
  }
}

void ErrorDocument::MergeFrom(const ErrorDocument& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:flyteidl.core.ErrorDocument)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_error()) {
    mutable_error()->::flyteidl::core::ContainerError::MergeFrom(from.error());
  }
}

void ErrorDocument::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:flyteidl.core.ErrorDocument)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ErrorDocument::CopyFrom(const ErrorDocument& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:flyteidl.core.ErrorDocument)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ErrorDocument::IsInitialized() const {
  return true;
}

void ErrorDocument::Swap(ErrorDocument* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ErrorDocument::InternalSwap(ErrorDocument* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(error_, other->error_);
}

::google::protobuf::Metadata ErrorDocument::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_flyteidl_2fcore_2ferrors_2eproto);
  return ::file_level_metadata_flyteidl_2fcore_2ferrors_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace core
}  // namespace flyteidl
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::flyteidl::core::ContainerError* Arena::CreateMaybeMessage< ::flyteidl::core::ContainerError >(Arena* arena) {
  return Arena::CreateInternal< ::flyteidl::core::ContainerError >(arena);
}
template<> PROTOBUF_NOINLINE ::flyteidl::core::ErrorDocument* Arena::CreateMaybeMessage< ::flyteidl::core::ErrorDocument >(Arena* arena) {
  return Arena::CreateInternal< ::flyteidl::core::ErrorDocument >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
