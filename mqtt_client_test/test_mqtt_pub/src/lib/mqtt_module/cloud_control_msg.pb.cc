// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cloud_control_msg.proto

#include "cloud_control_msg.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace cloudProtoPackage {
class cloudControlDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<cloudControl> _instance;
} _cloudControl_default_instance_;
}  // namespace cloudProtoPackage
static void InitDefaultsscc_info_cloudControl_cloud_5fcontrol_5fmsg_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::cloudProtoPackage::_cloudControl_default_instance_;
    new (ptr) ::cloudProtoPackage::cloudControl();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::cloudProtoPackage::cloudControl::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_cloudControl_cloud_5fcontrol_5fmsg_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_cloudControl_cloud_5fcontrol_5fmsg_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_cloud_5fcontrol_5fmsg_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_cloud_5fcontrol_5fmsg_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_cloud_5fcontrol_5fmsg_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_cloud_5fcontrol_5fmsg_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::cloudProtoPackage::cloudControl, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::cloudProtoPackage::cloudControl, remotestart_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::cloudProtoPackage::cloudControl)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::cloudProtoPackage::_cloudControl_default_instance_),
};

const char descriptor_table_protodef_cloud_5fcontrol_5fmsg_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027cloud_control_msg.proto\022\021cloudProtoPac"
  "kage\"#\n\014cloudControl\022\023\n\013remoteStart\030\001 \001("
  "\010b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_cloud_5fcontrol_5fmsg_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_cloud_5fcontrol_5fmsg_2eproto_sccs[1] = {
  &scc_info_cloudControl_cloud_5fcontrol_5fmsg_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_cloud_5fcontrol_5fmsg_2eproto_once;
static bool descriptor_table_cloud_5fcontrol_5fmsg_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cloud_5fcontrol_5fmsg_2eproto = {
  &descriptor_table_cloud_5fcontrol_5fmsg_2eproto_initialized, descriptor_table_protodef_cloud_5fcontrol_5fmsg_2eproto, "cloud_control_msg.proto", 89,
  &descriptor_table_cloud_5fcontrol_5fmsg_2eproto_once, descriptor_table_cloud_5fcontrol_5fmsg_2eproto_sccs, descriptor_table_cloud_5fcontrol_5fmsg_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_cloud_5fcontrol_5fmsg_2eproto::offsets,
  file_level_metadata_cloud_5fcontrol_5fmsg_2eproto, 1, file_level_enum_descriptors_cloud_5fcontrol_5fmsg_2eproto, file_level_service_descriptors_cloud_5fcontrol_5fmsg_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_cloud_5fcontrol_5fmsg_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_cloud_5fcontrol_5fmsg_2eproto)), true);
namespace cloudProtoPackage {

// ===================================================================

void cloudControl::InitAsDefaultInstance() {
}
class cloudControl::_Internal {
 public:
};

cloudControl::cloudControl()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cloudProtoPackage.cloudControl)
}
cloudControl::cloudControl(const cloudControl& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  remotestart_ = from.remotestart_;
  // @@protoc_insertion_point(copy_constructor:cloudProtoPackage.cloudControl)
}

void cloudControl::SharedCtor() {
  remotestart_ = false;
}

cloudControl::~cloudControl() {
  // @@protoc_insertion_point(destructor:cloudProtoPackage.cloudControl)
  SharedDtor();
}

void cloudControl::SharedDtor() {
}

void cloudControl::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const cloudControl& cloudControl::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_cloudControl_cloud_5fcontrol_5fmsg_2eproto.base);
  return *internal_default_instance();
}


void cloudControl::Clear() {
// @@protoc_insertion_point(message_clear_start:cloudProtoPackage.cloudControl)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  remotestart_ = false;
  _internal_metadata_.Clear();
}

const char* cloudControl::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bool remoteStart = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          remotestart_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* cloudControl::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cloudProtoPackage.cloudControl)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bool remoteStart = 1;
  if (this->remotestart() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(1, this->_internal_remotestart(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cloudProtoPackage.cloudControl)
  return target;
}

size_t cloudControl::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cloudProtoPackage.cloudControl)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool remoteStart = 1;
  if (this->remotestart() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void cloudControl::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cloudProtoPackage.cloudControl)
  GOOGLE_DCHECK_NE(&from, this);
  const cloudControl* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<cloudControl>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cloudProtoPackage.cloudControl)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cloudProtoPackage.cloudControl)
    MergeFrom(*source);
  }
}

void cloudControl::MergeFrom(const cloudControl& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cloudProtoPackage.cloudControl)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.remotestart() != 0) {
    _internal_set_remotestart(from._internal_remotestart());
  }
}

void cloudControl::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cloudProtoPackage.cloudControl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void cloudControl::CopyFrom(const cloudControl& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cloudProtoPackage.cloudControl)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool cloudControl::IsInitialized() const {
  return true;
}

void cloudControl::InternalSwap(cloudControl* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(remotestart_, other->remotestart_);
}

::PROTOBUF_NAMESPACE_ID::Metadata cloudControl::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace cloudProtoPackage
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cloudProtoPackage::cloudControl* Arena::CreateMaybeMessage< ::cloudProtoPackage::cloudControl >(Arena* arena) {
  return Arena::CreateInternal< ::cloudProtoPackage::cloudControl >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>