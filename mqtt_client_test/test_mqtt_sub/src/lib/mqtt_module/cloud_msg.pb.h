// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cloud_msg.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cloud_5fmsg_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cloud_5fmsg_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_cloud_5fmsg_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cloud_5fmsg_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_cloud_5fmsg_2eproto;
namespace acuProtoPackage {
class ACUCarInfo;
class ACUCarInfoDefaultTypeInternal;
extern ACUCarInfoDefaultTypeInternal _ACUCarInfo_default_instance_;
}  // namespace acuProtoPackage
PROTOBUF_NAMESPACE_OPEN
template<> ::acuProtoPackage::ACUCarInfo* Arena::CreateMaybeMessage<::acuProtoPackage::ACUCarInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace acuProtoPackage {

enum accStatusT : int {
  ACC_OFF = 0,
  ACC_INIT = 1,
  ACC_STANDBY = 2,
  ACC_AKTIV_regelt = 3,
  ACC_OVERRIDE = 4,
  ACC_Abschaltreaktion = 5,
  reversibler_Fehler_im_ACC_system = 6,
  irreversibler_Fehler_im_ACC_system = 7,
  accStatusT_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  accStatusT_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool accStatusT_IsValid(int value);
constexpr accStatusT accStatusT_MIN = ACC_OFF;
constexpr accStatusT accStatusT_MAX = irreversibler_Fehler_im_ACC_system;
constexpr int accStatusT_ARRAYSIZE = accStatusT_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* accStatusT_descriptor();
template<typename T>
inline const std::string& accStatusT_Name(T enum_t_value) {
  static_assert(::std::is_same<T, accStatusT>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function accStatusT_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    accStatusT_descriptor(), enum_t_value);
}
inline bool accStatusT_Parse(
    const std::string& name, accStatusT* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<accStatusT>(
    accStatusT_descriptor(), name, value);
}
enum adapModusT : int {
  Manual = 0,
  AI = 1,
  adapModusT_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  adapModusT_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool adapModusT_IsValid(int value);
constexpr adapModusT adapModusT_MIN = Manual;
constexpr adapModusT adapModusT_MAX = AI;
constexpr int adapModusT_ARRAYSIZE = adapModusT_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* adapModusT_descriptor();
template<typename T>
inline const std::string& adapModusT_Name(T enum_t_value) {
  static_assert(::std::is_same<T, adapModusT>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function adapModusT_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    adapModusT_descriptor(), enum_t_value);
}
inline bool adapModusT_Parse(
    const std::string& name, adapModusT* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<adapModusT>(
    adapModusT_descriptor(), name, value);
}
enum epbStatusT : int {
  offen = 0,
  Bremse_geschl = 1,
  Aktuator_im_Lauf = 2,
  Fehler_oder_unbekannt = 3,
  epbStatusT_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  epbStatusT_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool epbStatusT_IsValid(int value);
constexpr epbStatusT epbStatusT_MIN = offen;
constexpr epbStatusT epbStatusT_MAX = Fehler_oder_unbekannt;
constexpr int epbStatusT_ARRAYSIZE = epbStatusT_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* epbStatusT_descriptor();
template<typename T>
inline const std::string& epbStatusT_Name(T enum_t_value) {
  static_assert(::std::is_same<T, epbStatusT>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function epbStatusT_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    epbStatusT_descriptor(), enum_t_value);
}
inline bool epbStatusT_Parse(
    const std::string& name, epbStatusT* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<epbStatusT>(
    epbStatusT_descriptor(), name, value);
}
enum gearModeT : int {
  Zwischenstellung = 0,
  Init = 1,
  Position_P = 5,
  Position_R = 6,
  Position_N = 7,
  Position_D = 8,
  Position_S = 9,
  Effizienz = 10,
  Tipp_in_S = 13,
  Tipp_in_D = 14,
  Fehler = 15,
  gearModeT_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  gearModeT_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool gearModeT_IsValid(int value);
constexpr gearModeT gearModeT_MIN = Zwischenstellung;
constexpr gearModeT gearModeT_MAX = Fehler;
constexpr int gearModeT_ARRAYSIZE = gearModeT_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* gearModeT_descriptor();
template<typename T>
inline const std::string& gearModeT_Name(T enum_t_value) {
  static_assert(::std::is_same<T, gearModeT>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function gearModeT_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    gearModeT_descriptor(), enum_t_value);
}
inline bool gearModeT_Parse(
    const std::string& name, gearModeT* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<gearModeT>(
    gearModeT_descriptor(), name, value);
}
enum tsk_status_t : int {
  Hauptschalter_aus = 0,
  init = 1,
  passiv = 2,
  aktiv = 3,
  uebertreten = 4,
  brake_only_mode = 5,
  reversibel_aus = 6,
  irreversibel_aus = 7,
  tsk_status_t_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  tsk_status_t_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool tsk_status_t_IsValid(int value);
constexpr tsk_status_t tsk_status_t_MIN = Hauptschalter_aus;
constexpr tsk_status_t tsk_status_t_MAX = irreversibel_aus;
constexpr int tsk_status_t_ARRAYSIZE = tsk_status_t_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* tsk_status_t_descriptor();
template<typename T>
inline const std::string& tsk_status_t_Name(T enum_t_value) {
  static_assert(::std::is_same<T, tsk_status_t>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function tsk_status_t_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    tsk_status_t_descriptor(), enum_t_value);
}
inline bool tsk_status_t_Parse(
    const std::string& name, tsk_status_t* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<tsk_status_t>(
    tsk_status_t_descriptor(), name, value);
}
enum steerModeT : int {
  OFF = 0,
  ready = 1,
  RPCSfcRackSpmonTbtMon = 2,
  RPCSfcRackSpMon = 3,
  steerModeT_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  steerModeT_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool steerModeT_IsValid(int value);
constexpr steerModeT steerModeT_MIN = OFF;
constexpr steerModeT steerModeT_MAX = RPCSfcRackSpMon;
constexpr int steerModeT_ARRAYSIZE = steerModeT_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* steerModeT_descriptor();
template<typename T>
inline const std::string& steerModeT_Name(T enum_t_value) {
  static_assert(::std::is_same<T, steerModeT>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function steerModeT_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    steerModeT_descriptor(), enum_t_value);
}
inline bool steerModeT_Parse(
    const std::string& name, steerModeT* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<steerModeT>(
    steerModeT_descriptor(), name, value);
}
// ===================================================================

class ACUCarInfo :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:acuProtoPackage.ACUCarInfo) */ {
 public:
  ACUCarInfo();
  virtual ~ACUCarInfo();

  ACUCarInfo(const ACUCarInfo& from);
  ACUCarInfo(ACUCarInfo&& from) noexcept
    : ACUCarInfo() {
    *this = ::std::move(from);
  }

  inline ACUCarInfo& operator=(const ACUCarInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ACUCarInfo& operator=(ACUCarInfo&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
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
  static const ACUCarInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ACUCarInfo* internal_default_instance() {
    return reinterpret_cast<const ACUCarInfo*>(
               &_ACUCarInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ACUCarInfo& a, ACUCarInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(ACUCarInfo* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ACUCarInfo* New() const final {
    return CreateMaybeMessage<ACUCarInfo>(nullptr);
  }

  ACUCarInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ACUCarInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ACUCarInfo& from);
  void MergeFrom(const ACUCarInfo& from);
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
  void InternalSwap(ACUCarInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "acuProtoPackage.ACUCarInfo";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_cloud_5fmsg_2eproto);
    return ::descriptor_table_cloud_5fmsg_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCarNameFieldNumber = 1,
    kACUSwvFieldNumber = 2,
    kTimeStampFieldNumber = 4,
    kServerAliveFieldNumber = 3,
    kACCStatusFieldNumber = 5,
    kADAPMdusFieldNumber = 6,
    kCrEpbFieldNumber = 7,
    kCrGearFieldNumber = 8,
    kCrSpeedFieldNumber = 9,
    kCrSteerFieldNumber = 10,
    kLocationLatFieldNumber = 12,
    kCrTskFieldNumber = 11,
    kHeadingFieldNumber = 14,
    kLocationLngFieldNumber = 13,
    kMileageFieldNumber = 15,
    kSteerModeFieldNumber = 16,
    kTgAccFieldNumber = 17,
    kFuelFieldNumber = 18,
  };
  // string carName = 1;
  void clear_carname();
  const std::string& carname() const;
  void set_carname(const std::string& value);
  void set_carname(std::string&& value);
  void set_carname(const char* value);
  void set_carname(const char* value, size_t size);
  std::string* mutable_carname();
  std::string* release_carname();
  void set_allocated_carname(std::string* carname);
  private:
  const std::string& _internal_carname() const;
  void _internal_set_carname(const std::string& value);
  std::string* _internal_mutable_carname();
  public:

  // string ACUSwv = 2;
  void clear_acuswv();
  const std::string& acuswv() const;
  void set_acuswv(const std::string& value);
  void set_acuswv(std::string&& value);
  void set_acuswv(const char* value);
  void set_acuswv(const char* value, size_t size);
  std::string* mutable_acuswv();
  std::string* release_acuswv();
  void set_allocated_acuswv(std::string* acuswv);
  private:
  const std::string& _internal_acuswv() const;
  void _internal_set_acuswv(const std::string& value);
  std::string* _internal_mutable_acuswv();
  public:

  // string timeStamp = 4;
  void clear_timestamp();
  const std::string& timestamp() const;
  void set_timestamp(const std::string& value);
  void set_timestamp(std::string&& value);
  void set_timestamp(const char* value);
  void set_timestamp(const char* value, size_t size);
  std::string* mutable_timestamp();
  std::string* release_timestamp();
  void set_allocated_timestamp(std::string* timestamp);
  private:
  const std::string& _internal_timestamp() const;
  void _internal_set_timestamp(const std::string& value);
  std::string* _internal_mutable_timestamp();
  public:

  // uint32 serverAlive = 3;
  void clear_serveralive();
  ::PROTOBUF_NAMESPACE_ID::uint32 serveralive() const;
  void set_serveralive(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_serveralive() const;
  void _internal_set_serveralive(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // .acuProtoPackage.accStatusT ACCStatus = 5;
  void clear_accstatus();
  ::acuProtoPackage::accStatusT accstatus() const;
  void set_accstatus(::acuProtoPackage::accStatusT value);
  private:
  ::acuProtoPackage::accStatusT _internal_accstatus() const;
  void _internal_set_accstatus(::acuProtoPackage::accStatusT value);
  public:

  // .acuProtoPackage.adapModusT ADAPMdus = 6;
  void clear_adapmdus();
  ::acuProtoPackage::adapModusT adapmdus() const;
  void set_adapmdus(::acuProtoPackage::adapModusT value);
  private:
  ::acuProtoPackage::adapModusT _internal_adapmdus() const;
  void _internal_set_adapmdus(::acuProtoPackage::adapModusT value);
  public:

  // .acuProtoPackage.epbStatusT crEpb = 7;
  void clear_crepb();
  ::acuProtoPackage::epbStatusT crepb() const;
  void set_crepb(::acuProtoPackage::epbStatusT value);
  private:
  ::acuProtoPackage::epbStatusT _internal_crepb() const;
  void _internal_set_crepb(::acuProtoPackage::epbStatusT value);
  public:

  // .acuProtoPackage.gearModeT crGear = 8;
  void clear_crgear();
  ::acuProtoPackage::gearModeT crgear() const;
  void set_crgear(::acuProtoPackage::gearModeT value);
  private:
  ::acuProtoPackage::gearModeT _internal_crgear() const;
  void _internal_set_crgear(::acuProtoPackage::gearModeT value);
  public:

  // float crSpeed = 9;
  void clear_crspeed();
  float crspeed() const;
  void set_crspeed(float value);
  private:
  float _internal_crspeed() const;
  void _internal_set_crspeed(float value);
  public:

  // double crSteer = 10;
  void clear_crsteer();
  double crsteer() const;
  void set_crsteer(double value);
  private:
  double _internal_crsteer() const;
  void _internal_set_crsteer(double value);
  public:

  // double locationLat = 12;
  void clear_locationlat();
  double locationlat() const;
  void set_locationlat(double value);
  private:
  double _internal_locationlat() const;
  void _internal_set_locationlat(double value);
  public:

  // uint32 crTsk = 11;
  void clear_crtsk();
  ::PROTOBUF_NAMESPACE_ID::uint32 crtsk() const;
  void set_crtsk(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_crtsk() const;
  void _internal_set_crtsk(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // float heading = 14;
  void clear_heading();
  float heading() const;
  void set_heading(float value);
  private:
  float _internal_heading() const;
  void _internal_set_heading(float value);
  public:

  // double locationLng = 13;
  void clear_locationlng();
  double locationlng() const;
  void set_locationlng(double value);
  private:
  double _internal_locationlng() const;
  void _internal_set_locationlng(double value);
  public:

  // uint32 mileage = 15;
  void clear_mileage();
  ::PROTOBUF_NAMESPACE_ID::uint32 mileage() const;
  void set_mileage(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_mileage() const;
  void _internal_set_mileage(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 steerMode = 16;
  void clear_steermode();
  ::PROTOBUF_NAMESPACE_ID::uint32 steermode() const;
  void set_steermode(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_steermode() const;
  void _internal_set_steermode(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // double tgAcc = 17;
  void clear_tgacc();
  double tgacc() const;
  void set_tgacc(double value);
  private:
  double _internal_tgacc() const;
  void _internal_set_tgacc(double value);
  public:

  // double fuel = 18;
  void clear_fuel();
  double fuel() const;
  void set_fuel(double value);
  private:
  double _internal_fuel() const;
  void _internal_set_fuel(double value);
  public:

  // @@protoc_insertion_point(class_scope:acuProtoPackage.ACUCarInfo)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr carname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr acuswv_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr timestamp_;
  ::PROTOBUF_NAMESPACE_ID::uint32 serveralive_;
  int accstatus_;
  int adapmdus_;
  int crepb_;
  int crgear_;
  float crspeed_;
  double crsteer_;
  double locationlat_;
  ::PROTOBUF_NAMESPACE_ID::uint32 crtsk_;
  float heading_;
  double locationlng_;
  ::PROTOBUF_NAMESPACE_ID::uint32 mileage_;
  ::PROTOBUF_NAMESPACE_ID::uint32 steermode_;
  double tgacc_;
  double fuel_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cloud_5fmsg_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ACUCarInfo

// string carName = 1;
inline void ACUCarInfo::clear_carname() {
  carname_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ACUCarInfo::carname() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.carName)
  return _internal_carname();
}
inline void ACUCarInfo::set_carname(const std::string& value) {
  _internal_set_carname(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.carName)
}
inline std::string* ACUCarInfo::mutable_carname() {
  // @@protoc_insertion_point(field_mutable:acuProtoPackage.ACUCarInfo.carName)
  return _internal_mutable_carname();
}
inline const std::string& ACUCarInfo::_internal_carname() const {
  return carname_.GetNoArena();
}
inline void ACUCarInfo::_internal_set_carname(const std::string& value) {
  
  carname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ACUCarInfo::set_carname(std::string&& value) {
  
  carname_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:acuProtoPackage.ACUCarInfo.carName)
}
inline void ACUCarInfo::set_carname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  carname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:acuProtoPackage.ACUCarInfo.carName)
}
inline void ACUCarInfo::set_carname(const char* value, size_t size) {
  
  carname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:acuProtoPackage.ACUCarInfo.carName)
}
inline std::string* ACUCarInfo::_internal_mutable_carname() {
  
  return carname_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ACUCarInfo::release_carname() {
  // @@protoc_insertion_point(field_release:acuProtoPackage.ACUCarInfo.carName)
  
  return carname_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ACUCarInfo::set_allocated_carname(std::string* carname) {
  if (carname != nullptr) {
    
  } else {
    
  }
  carname_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), carname);
  // @@protoc_insertion_point(field_set_allocated:acuProtoPackage.ACUCarInfo.carName)
}

// string ACUSwv = 2;
inline void ACUCarInfo::clear_acuswv() {
  acuswv_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ACUCarInfo::acuswv() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.ACUSwv)
  return _internal_acuswv();
}
inline void ACUCarInfo::set_acuswv(const std::string& value) {
  _internal_set_acuswv(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.ACUSwv)
}
inline std::string* ACUCarInfo::mutable_acuswv() {
  // @@protoc_insertion_point(field_mutable:acuProtoPackage.ACUCarInfo.ACUSwv)
  return _internal_mutable_acuswv();
}
inline const std::string& ACUCarInfo::_internal_acuswv() const {
  return acuswv_.GetNoArena();
}
inline void ACUCarInfo::_internal_set_acuswv(const std::string& value) {
  
  acuswv_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ACUCarInfo::set_acuswv(std::string&& value) {
  
  acuswv_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:acuProtoPackage.ACUCarInfo.ACUSwv)
}
inline void ACUCarInfo::set_acuswv(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  acuswv_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:acuProtoPackage.ACUCarInfo.ACUSwv)
}
inline void ACUCarInfo::set_acuswv(const char* value, size_t size) {
  
  acuswv_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:acuProtoPackage.ACUCarInfo.ACUSwv)
}
inline std::string* ACUCarInfo::_internal_mutable_acuswv() {
  
  return acuswv_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ACUCarInfo::release_acuswv() {
  // @@protoc_insertion_point(field_release:acuProtoPackage.ACUCarInfo.ACUSwv)
  
  return acuswv_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ACUCarInfo::set_allocated_acuswv(std::string* acuswv) {
  if (acuswv != nullptr) {
    
  } else {
    
  }
  acuswv_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), acuswv);
  // @@protoc_insertion_point(field_set_allocated:acuProtoPackage.ACUCarInfo.ACUSwv)
}

// uint32 serverAlive = 3;
inline void ACUCarInfo::clear_serveralive() {
  serveralive_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ACUCarInfo::_internal_serveralive() const {
  return serveralive_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ACUCarInfo::serveralive() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.serverAlive)
  return _internal_serveralive();
}
inline void ACUCarInfo::_internal_set_serveralive(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  serveralive_ = value;
}
inline void ACUCarInfo::set_serveralive(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_serveralive(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.serverAlive)
}

// string timeStamp = 4;
inline void ACUCarInfo::clear_timestamp() {
  timestamp_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& ACUCarInfo::timestamp() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.timeStamp)
  return _internal_timestamp();
}
inline void ACUCarInfo::set_timestamp(const std::string& value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.timeStamp)
}
inline std::string* ACUCarInfo::mutable_timestamp() {
  // @@protoc_insertion_point(field_mutable:acuProtoPackage.ACUCarInfo.timeStamp)
  return _internal_mutable_timestamp();
}
inline const std::string& ACUCarInfo::_internal_timestamp() const {
  return timestamp_.GetNoArena();
}
inline void ACUCarInfo::_internal_set_timestamp(const std::string& value) {
  
  timestamp_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void ACUCarInfo::set_timestamp(std::string&& value) {
  
  timestamp_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:acuProtoPackage.ACUCarInfo.timeStamp)
}
inline void ACUCarInfo::set_timestamp(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  timestamp_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:acuProtoPackage.ACUCarInfo.timeStamp)
}
inline void ACUCarInfo::set_timestamp(const char* value, size_t size) {
  
  timestamp_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:acuProtoPackage.ACUCarInfo.timeStamp)
}
inline std::string* ACUCarInfo::_internal_mutable_timestamp() {
  
  return timestamp_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ACUCarInfo::release_timestamp() {
  // @@protoc_insertion_point(field_release:acuProtoPackage.ACUCarInfo.timeStamp)
  
  return timestamp_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ACUCarInfo::set_allocated_timestamp(std::string* timestamp) {
  if (timestamp != nullptr) {
    
  } else {
    
  }
  timestamp_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), timestamp);
  // @@protoc_insertion_point(field_set_allocated:acuProtoPackage.ACUCarInfo.timeStamp)
}

// .acuProtoPackage.accStatusT ACCStatus = 5;
inline void ACUCarInfo::clear_accstatus() {
  accstatus_ = 0;
}
inline ::acuProtoPackage::accStatusT ACUCarInfo::_internal_accstatus() const {
  return static_cast< ::acuProtoPackage::accStatusT >(accstatus_);
}
inline ::acuProtoPackage::accStatusT ACUCarInfo::accstatus() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.ACCStatus)
  return _internal_accstatus();
}
inline void ACUCarInfo::_internal_set_accstatus(::acuProtoPackage::accStatusT value) {
  
  accstatus_ = value;
}
inline void ACUCarInfo::set_accstatus(::acuProtoPackage::accStatusT value) {
  _internal_set_accstatus(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.ACCStatus)
}

// .acuProtoPackage.adapModusT ADAPMdus = 6;
inline void ACUCarInfo::clear_adapmdus() {
  adapmdus_ = 0;
}
inline ::acuProtoPackage::adapModusT ACUCarInfo::_internal_adapmdus() const {
  return static_cast< ::acuProtoPackage::adapModusT >(adapmdus_);
}
inline ::acuProtoPackage::adapModusT ACUCarInfo::adapmdus() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.ADAPMdus)
  return _internal_adapmdus();
}
inline void ACUCarInfo::_internal_set_adapmdus(::acuProtoPackage::adapModusT value) {
  
  adapmdus_ = value;
}
inline void ACUCarInfo::set_adapmdus(::acuProtoPackage::adapModusT value) {
  _internal_set_adapmdus(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.ADAPMdus)
}

// .acuProtoPackage.epbStatusT crEpb = 7;
inline void ACUCarInfo::clear_crepb() {
  crepb_ = 0;
}
inline ::acuProtoPackage::epbStatusT ACUCarInfo::_internal_crepb() const {
  return static_cast< ::acuProtoPackage::epbStatusT >(crepb_);
}
inline ::acuProtoPackage::epbStatusT ACUCarInfo::crepb() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.crEpb)
  return _internal_crepb();
}
inline void ACUCarInfo::_internal_set_crepb(::acuProtoPackage::epbStatusT value) {
  
  crepb_ = value;
}
inline void ACUCarInfo::set_crepb(::acuProtoPackage::epbStatusT value) {
  _internal_set_crepb(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.crEpb)
}

// .acuProtoPackage.gearModeT crGear = 8;
inline void ACUCarInfo::clear_crgear() {
  crgear_ = 0;
}
inline ::acuProtoPackage::gearModeT ACUCarInfo::_internal_crgear() const {
  return static_cast< ::acuProtoPackage::gearModeT >(crgear_);
}
inline ::acuProtoPackage::gearModeT ACUCarInfo::crgear() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.crGear)
  return _internal_crgear();
}
inline void ACUCarInfo::_internal_set_crgear(::acuProtoPackage::gearModeT value) {
  
  crgear_ = value;
}
inline void ACUCarInfo::set_crgear(::acuProtoPackage::gearModeT value) {
  _internal_set_crgear(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.crGear)
}

// float crSpeed = 9;
inline void ACUCarInfo::clear_crspeed() {
  crspeed_ = 0;
}
inline float ACUCarInfo::_internal_crspeed() const {
  return crspeed_;
}
inline float ACUCarInfo::crspeed() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.crSpeed)
  return _internal_crspeed();
}
inline void ACUCarInfo::_internal_set_crspeed(float value) {
  
  crspeed_ = value;
}
inline void ACUCarInfo::set_crspeed(float value) {
  _internal_set_crspeed(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.crSpeed)
}

// double crSteer = 10;
inline void ACUCarInfo::clear_crsteer() {
  crsteer_ = 0;
}
inline double ACUCarInfo::_internal_crsteer() const {
  return crsteer_;
}
inline double ACUCarInfo::crsteer() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.crSteer)
  return _internal_crsteer();
}
inline void ACUCarInfo::_internal_set_crsteer(double value) {
  
  crsteer_ = value;
}
inline void ACUCarInfo::set_crsteer(double value) {
  _internal_set_crsteer(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.crSteer)
}

// uint32 crTsk = 11;
inline void ACUCarInfo::clear_crtsk() {
  crtsk_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ACUCarInfo::_internal_crtsk() const {
  return crtsk_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ACUCarInfo::crtsk() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.crTsk)
  return _internal_crtsk();
}
inline void ACUCarInfo::_internal_set_crtsk(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  crtsk_ = value;
}
inline void ACUCarInfo::set_crtsk(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_crtsk(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.crTsk)
}

// double locationLat = 12;
inline void ACUCarInfo::clear_locationlat() {
  locationlat_ = 0;
}
inline double ACUCarInfo::_internal_locationlat() const {
  return locationlat_;
}
inline double ACUCarInfo::locationlat() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.locationLat)
  return _internal_locationlat();
}
inline void ACUCarInfo::_internal_set_locationlat(double value) {
  
  locationlat_ = value;
}
inline void ACUCarInfo::set_locationlat(double value) {
  _internal_set_locationlat(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.locationLat)
}

// double locationLng = 13;
inline void ACUCarInfo::clear_locationlng() {
  locationlng_ = 0;
}
inline double ACUCarInfo::_internal_locationlng() const {
  return locationlng_;
}
inline double ACUCarInfo::locationlng() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.locationLng)
  return _internal_locationlng();
}
inline void ACUCarInfo::_internal_set_locationlng(double value) {
  
  locationlng_ = value;
}
inline void ACUCarInfo::set_locationlng(double value) {
  _internal_set_locationlng(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.locationLng)
}

// float heading = 14;
inline void ACUCarInfo::clear_heading() {
  heading_ = 0;
}
inline float ACUCarInfo::_internal_heading() const {
  return heading_;
}
inline float ACUCarInfo::heading() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.heading)
  return _internal_heading();
}
inline void ACUCarInfo::_internal_set_heading(float value) {
  
  heading_ = value;
}
inline void ACUCarInfo::set_heading(float value) {
  _internal_set_heading(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.heading)
}

// uint32 mileage = 15;
inline void ACUCarInfo::clear_mileage() {
  mileage_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ACUCarInfo::_internal_mileage() const {
  return mileage_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ACUCarInfo::mileage() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.mileage)
  return _internal_mileage();
}
inline void ACUCarInfo::_internal_set_mileage(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  mileage_ = value;
}
inline void ACUCarInfo::set_mileage(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_mileage(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.mileage)
}

// uint32 steerMode = 16;
inline void ACUCarInfo::clear_steermode() {
  steermode_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ACUCarInfo::_internal_steermode() const {
  return steermode_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 ACUCarInfo::steermode() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.steerMode)
  return _internal_steermode();
}
inline void ACUCarInfo::_internal_set_steermode(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  steermode_ = value;
}
inline void ACUCarInfo::set_steermode(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_steermode(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.steerMode)
}

// double tgAcc = 17;
inline void ACUCarInfo::clear_tgacc() {
  tgacc_ = 0;
}
inline double ACUCarInfo::_internal_tgacc() const {
  return tgacc_;
}
inline double ACUCarInfo::tgacc() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.tgAcc)
  return _internal_tgacc();
}
inline void ACUCarInfo::_internal_set_tgacc(double value) {
  
  tgacc_ = value;
}
inline void ACUCarInfo::set_tgacc(double value) {
  _internal_set_tgacc(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.tgAcc)
}

// double fuel = 18;
inline void ACUCarInfo::clear_fuel() {
  fuel_ = 0;
}
inline double ACUCarInfo::_internal_fuel() const {
  return fuel_;
}
inline double ACUCarInfo::fuel() const {
  // @@protoc_insertion_point(field_get:acuProtoPackage.ACUCarInfo.fuel)
  return _internal_fuel();
}
inline void ACUCarInfo::_internal_set_fuel(double value) {
  
  fuel_ = value;
}
inline void ACUCarInfo::set_fuel(double value) {
  _internal_set_fuel(value);
  // @@protoc_insertion_point(field_set:acuProtoPackage.ACUCarInfo.fuel)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace acuProtoPackage

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::acuProtoPackage::accStatusT> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::acuProtoPackage::accStatusT>() {
  return ::acuProtoPackage::accStatusT_descriptor();
}
template <> struct is_proto_enum< ::acuProtoPackage::adapModusT> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::acuProtoPackage::adapModusT>() {
  return ::acuProtoPackage::adapModusT_descriptor();
}
template <> struct is_proto_enum< ::acuProtoPackage::epbStatusT> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::acuProtoPackage::epbStatusT>() {
  return ::acuProtoPackage::epbStatusT_descriptor();
}
template <> struct is_proto_enum< ::acuProtoPackage::gearModeT> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::acuProtoPackage::gearModeT>() {
  return ::acuProtoPackage::gearModeT_descriptor();
}
template <> struct is_proto_enum< ::acuProtoPackage::tsk_status_t> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::acuProtoPackage::tsk_status_t>() {
  return ::acuProtoPackage::tsk_status_t_descriptor();
}
template <> struct is_proto_enum< ::acuProtoPackage::steerModeT> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::acuProtoPackage::steerModeT>() {
  return ::acuProtoPackage::steerModeT_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cloud_5fmsg_2eproto
