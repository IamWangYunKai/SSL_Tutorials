// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: game_event.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "game_event.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* SSL_Referee_Game_Event_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SSL_Referee_Game_Event_reflection_ = NULL;
const ::google::protobuf::Descriptor* SSL_Referee_Game_Event_Originator_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SSL_Referee_Game_Event_Originator_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* SSL_Referee_Game_Event_GameEventType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* SSL_Referee_Game_Event_Team_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_game_5fevent_2eproto() {
  protobuf_AddDesc_game_5fevent_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "game_event.proto");
  GOOGLE_CHECK(file != NULL);
  SSL_Referee_Game_Event_descriptor_ = file->message_type(0);
  static const int SSL_Referee_Game_Event_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_Referee_Game_Event, gameeventtype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_Referee_Game_Event, originator_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_Referee_Game_Event, message_),
  };
  SSL_Referee_Game_Event_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SSL_Referee_Game_Event_descriptor_,
      SSL_Referee_Game_Event::default_instance_,
      SSL_Referee_Game_Event_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_Referee_Game_Event, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_Referee_Game_Event, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SSL_Referee_Game_Event));
  SSL_Referee_Game_Event_Originator_descriptor_ = SSL_Referee_Game_Event_descriptor_->nested_type(0);
  static const int SSL_Referee_Game_Event_Originator_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_Referee_Game_Event_Originator, team_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_Referee_Game_Event_Originator, botid_),
  };
  SSL_Referee_Game_Event_Originator_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SSL_Referee_Game_Event_Originator_descriptor_,
      SSL_Referee_Game_Event_Originator::default_instance_,
      SSL_Referee_Game_Event_Originator_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_Referee_Game_Event_Originator, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SSL_Referee_Game_Event_Originator, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SSL_Referee_Game_Event_Originator));
  SSL_Referee_Game_Event_GameEventType_descriptor_ = SSL_Referee_Game_Event_descriptor_->enum_type(0);
  SSL_Referee_Game_Event_Team_descriptor_ = SSL_Referee_Game_Event_descriptor_->enum_type(1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_game_5fevent_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SSL_Referee_Game_Event_descriptor_, &SSL_Referee_Game_Event::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SSL_Referee_Game_Event_Originator_descriptor_, &SSL_Referee_Game_Event_Originator::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_game_5fevent_2eproto() {
  delete SSL_Referee_Game_Event::default_instance_;
  delete SSL_Referee_Game_Event_reflection_;
  delete SSL_Referee_Game_Event_Originator::default_instance_;
  delete SSL_Referee_Game_Event_Originator_reflection_;
}

void protobuf_AddDesc_game_5fevent_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020game_event.proto\"\236\006\n\026SSL_Referee_Game_"
    "Event\022<\n\rgameEventType\030\001 \002(\0162%.SSL_Refer"
    "ee_Game_Event.GameEventType\0226\n\noriginato"
    "r\030\002 \001(\0132\".SSL_Referee_Game_Event.Origina"
    "tor\022\017\n\007message\030\003 \001(\t\032G\n\nOriginator\022*\n\004te"
    "am\030\001 \002(\0162\034.SSL_Referee_Game_Event.Team\022\r"
    "\n\005botId\030\002 \001(\r\"\371\003\n\rGameEventType\022\013\n\007UNKNO"
    "WN\020\000\022\n\n\006CUSTOM\020\001\022\025\n\021NUMBER_OF_PLAYERS\020\002\022"
    "\023\n\017BALL_LEFT_FIELD\020\003\022\010\n\004GOAL\020\004\022\020\n\014KICK_T"
    "IMEOUT\020\005\022\027\n\023NO_PROGRESS_IN_GAME\020\006\022\021\n\rBOT"
    "_COLLISION\020\007\022\025\n\021MULTIPLE_DEFENDER\020\010\022\037\n\033M"
    "ULTIPLE_DEFENDER_PARTIALLY\020\t\022\034\n\030ATTACKER"
    "_IN_DEFENSE_AREA\020\n\022\t\n\005ICING\020\013\022\016\n\nBALL_SP"
    "EED\020\014\022\024\n\020ROBOT_STOP_SPEED\020\r\022\022\n\016BALL_DRIB"
    "BLING\020\016\022\031\n\025ATTACKER_TOUCH_KEEPER\020\017\022\020\n\014DO"
    "UBLE_TOUCH\020\020\022\034\n\030ATTACKER_TO_DEFENCE_AREA"
    "\020\021\022#\n\037DEFENDER_TO_KICK_POINT_DISTANCE\020\022\022"
    "\020\n\014BALL_HOLDING\020\023\022\021\n\rINDIRECT_GOAL\020\024\022\031\n\025"
    "BALL_PLACEMENT_FAILED\020\025\022\020\n\014CHIP_ON_GOAL\020"
    "\026\"8\n\004Team\022\020\n\014TEAM_UNKNOWN\020\000\022\017\n\013TEAM_YELL"
    "OW\020\001\022\r\n\tTEAM_BLUE\020\002", 819);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "game_event.proto", &protobuf_RegisterTypes);
  SSL_Referee_Game_Event::default_instance_ = new SSL_Referee_Game_Event();
  SSL_Referee_Game_Event_Originator::default_instance_ = new SSL_Referee_Game_Event_Originator();
  SSL_Referee_Game_Event::default_instance_->InitAsDefaultInstance();
  SSL_Referee_Game_Event_Originator::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_game_5fevent_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_game_5fevent_2eproto {
  StaticDescriptorInitializer_game_5fevent_2eproto() {
    protobuf_AddDesc_game_5fevent_2eproto();
  }
} static_descriptor_initializer_game_5fevent_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* SSL_Referee_Game_Event_GameEventType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SSL_Referee_Game_Event_GameEventType_descriptor_;
}
bool SSL_Referee_Game_Event_GameEventType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::UNKNOWN;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::CUSTOM;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::NUMBER_OF_PLAYERS;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::BALL_LEFT_FIELD;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::GOAL;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::KICK_TIMEOUT;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::NO_PROGRESS_IN_GAME;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::BOT_COLLISION;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::MULTIPLE_DEFENDER;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::MULTIPLE_DEFENDER_PARTIALLY;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::ATTACKER_IN_DEFENSE_AREA;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::ICING;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::BALL_SPEED;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::ROBOT_STOP_SPEED;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::BALL_DRIBBLING;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::ATTACKER_TOUCH_KEEPER;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::DOUBLE_TOUCH;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::ATTACKER_TO_DEFENCE_AREA;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::DEFENDER_TO_KICK_POINT_DISTANCE;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::BALL_HOLDING;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::INDIRECT_GOAL;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::BALL_PLACEMENT_FAILED;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::CHIP_ON_GOAL;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::GameEventType_MIN;
const SSL_Referee_Game_Event_GameEventType SSL_Referee_Game_Event::GameEventType_MAX;
const int SSL_Referee_Game_Event::GameEventType_ARRAYSIZE;
#endif  // _MSC_VER
const ::google::protobuf::EnumDescriptor* SSL_Referee_Game_Event_Team_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SSL_Referee_Game_Event_Team_descriptor_;
}
bool SSL_Referee_Game_Event_Team_IsValid(int value) {
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
const SSL_Referee_Game_Event_Team SSL_Referee_Game_Event::TEAM_UNKNOWN;
const SSL_Referee_Game_Event_Team SSL_Referee_Game_Event::TEAM_YELLOW;
const SSL_Referee_Game_Event_Team SSL_Referee_Game_Event::TEAM_BLUE;
const SSL_Referee_Game_Event_Team SSL_Referee_Game_Event::Team_MIN;
const SSL_Referee_Game_Event_Team SSL_Referee_Game_Event::Team_MAX;
const int SSL_Referee_Game_Event::Team_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int SSL_Referee_Game_Event_Originator::kTeamFieldNumber;
const int SSL_Referee_Game_Event_Originator::kBotIdFieldNumber;
#endif  // !_MSC_VER

SSL_Referee_Game_Event_Originator::SSL_Referee_Game_Event_Originator()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:SSL_Referee_Game_Event.Originator)
}

void SSL_Referee_Game_Event_Originator::InitAsDefaultInstance() {
}

SSL_Referee_Game_Event_Originator::SSL_Referee_Game_Event_Originator(const SSL_Referee_Game_Event_Originator& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:SSL_Referee_Game_Event.Originator)
}

void SSL_Referee_Game_Event_Originator::SharedCtor() {
  _cached_size_ = 0;
  team_ = 0;
  botid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SSL_Referee_Game_Event_Originator::~SSL_Referee_Game_Event_Originator() {
  // @@protoc_insertion_point(destructor:SSL_Referee_Game_Event.Originator)
  SharedDtor();
}

void SSL_Referee_Game_Event_Originator::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SSL_Referee_Game_Event_Originator::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SSL_Referee_Game_Event_Originator::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SSL_Referee_Game_Event_Originator_descriptor_;
}

const SSL_Referee_Game_Event_Originator& SSL_Referee_Game_Event_Originator::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_game_5fevent_2eproto();
  return *default_instance_;
}

SSL_Referee_Game_Event_Originator* SSL_Referee_Game_Event_Originator::default_instance_ = NULL;

SSL_Referee_Game_Event_Originator* SSL_Referee_Game_Event_Originator::New() const {
  return new SSL_Referee_Game_Event_Originator;
}

void SSL_Referee_Game_Event_Originator::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<SSL_Referee_Game_Event_Originator*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(team_, botid_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SSL_Referee_Game_Event_Originator::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SSL_Referee_Game_Event.Originator)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .SSL_Referee_Game_Event.Team team = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::SSL_Referee_Game_Event_Team_IsValid(value)) {
            set_team(static_cast< ::SSL_Referee_Game_Event_Team >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_botId;
        break;
      }

      // optional uint32 botId = 2;
      case 2: {
        if (tag == 16) {
         parse_botId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &botid_)));
          set_has_botid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SSL_Referee_Game_Event.Originator)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SSL_Referee_Game_Event.Originator)
  return false;
#undef DO_
}

void SSL_Referee_Game_Event_Originator::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SSL_Referee_Game_Event.Originator)
  // required .SSL_Referee_Game_Event.Team team = 1;
  if (has_team()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->team(), output);
  }

  // optional uint32 botId = 2;
  if (has_botid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->botid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:SSL_Referee_Game_Event.Originator)
}

::google::protobuf::uint8* SSL_Referee_Game_Event_Originator::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:SSL_Referee_Game_Event.Originator)
  // required .SSL_Referee_Game_Event.Team team = 1;
  if (has_team()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->team(), target);
  }

  // optional uint32 botId = 2;
  if (has_botid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->botid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SSL_Referee_Game_Event.Originator)
  return target;
}

int SSL_Referee_Game_Event_Originator::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .SSL_Referee_Game_Event.Team team = 1;
    if (has_team()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->team());
    }

    // optional uint32 botId = 2;
    if (has_botid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->botid());
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

void SSL_Referee_Game_Event_Originator::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SSL_Referee_Game_Event_Originator* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SSL_Referee_Game_Event_Originator*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SSL_Referee_Game_Event_Originator::MergeFrom(const SSL_Referee_Game_Event_Originator& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_team()) {
      set_team(from.team());
    }
    if (from.has_botid()) {
      set_botid(from.botid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SSL_Referee_Game_Event_Originator::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SSL_Referee_Game_Event_Originator::CopyFrom(const SSL_Referee_Game_Event_Originator& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SSL_Referee_Game_Event_Originator::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void SSL_Referee_Game_Event_Originator::Swap(SSL_Referee_Game_Event_Originator* other) {
  if (other != this) {
    std::swap(team_, other->team_);
    std::swap(botid_, other->botid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SSL_Referee_Game_Event_Originator::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SSL_Referee_Game_Event_Originator_descriptor_;
  metadata.reflection = SSL_Referee_Game_Event_Originator_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int SSL_Referee_Game_Event::kGameEventTypeFieldNumber;
const int SSL_Referee_Game_Event::kOriginatorFieldNumber;
const int SSL_Referee_Game_Event::kMessageFieldNumber;
#endif  // !_MSC_VER

SSL_Referee_Game_Event::SSL_Referee_Game_Event()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:SSL_Referee_Game_Event)
}

void SSL_Referee_Game_Event::InitAsDefaultInstance() {
  originator_ = const_cast< ::SSL_Referee_Game_Event_Originator*>(&::SSL_Referee_Game_Event_Originator::default_instance());
}

SSL_Referee_Game_Event::SSL_Referee_Game_Event(const SSL_Referee_Game_Event& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:SSL_Referee_Game_Event)
}

void SSL_Referee_Game_Event::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  gameeventtype_ = 0;
  originator_ = NULL;
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SSL_Referee_Game_Event::~SSL_Referee_Game_Event() {
  // @@protoc_insertion_point(destructor:SSL_Referee_Game_Event)
  SharedDtor();
}

void SSL_Referee_Game_Event::SharedDtor() {
  if (message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete message_;
  }
  if (this != default_instance_) {
    delete originator_;
  }
}

void SSL_Referee_Game_Event::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SSL_Referee_Game_Event::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SSL_Referee_Game_Event_descriptor_;
}

const SSL_Referee_Game_Event& SSL_Referee_Game_Event::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_game_5fevent_2eproto();
  return *default_instance_;
}

SSL_Referee_Game_Event* SSL_Referee_Game_Event::default_instance_ = NULL;

SSL_Referee_Game_Event* SSL_Referee_Game_Event::New() const {
  return new SSL_Referee_Game_Event;
}

void SSL_Referee_Game_Event::Clear() {
  if (_has_bits_[0 / 32] & 7) {
    gameeventtype_ = 0;
    if (has_originator()) {
      if (originator_ != NULL) originator_->::SSL_Referee_Game_Event_Originator::Clear();
    }
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        message_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SSL_Referee_Game_Event::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SSL_Referee_Game_Event)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .SSL_Referee_Game_Event.GameEventType gameEventType = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::SSL_Referee_Game_Event_GameEventType_IsValid(value)) {
            set_gameeventtype(static_cast< ::SSL_Referee_Game_Event_GameEventType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_originator;
        break;
      }

      // optional .SSL_Referee_Game_Event.Originator originator = 2;
      case 2: {
        if (tag == 18) {
         parse_originator:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_originator()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_message;
        break;
      }

      // optional string message = 3;
      case 3: {
        if (tag == 26) {
         parse_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "message");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SSL_Referee_Game_Event)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SSL_Referee_Game_Event)
  return false;
#undef DO_
}

void SSL_Referee_Game_Event::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SSL_Referee_Game_Event)
  // required .SSL_Referee_Game_Event.GameEventType gameEventType = 1;
  if (has_gameeventtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->gameeventtype(), output);
  }

  // optional .SSL_Referee_Game_Event.Originator originator = 2;
  if (has_originator()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->originator(), output);
  }

  // optional string message = 3;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->message(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:SSL_Referee_Game_Event)
}

::google::protobuf::uint8* SSL_Referee_Game_Event::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:SSL_Referee_Game_Event)
  // required .SSL_Referee_Game_Event.GameEventType gameEventType = 1;
  if (has_gameeventtype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->gameeventtype(), target);
  }

  // optional .SSL_Referee_Game_Event.Originator originator = 2;
  if (has_originator()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->originator(), target);
  }

  // optional string message = 3;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->message(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SSL_Referee_Game_Event)
  return target;
}

int SSL_Referee_Game_Event::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .SSL_Referee_Game_Event.GameEventType gameEventType = 1;
    if (has_gameeventtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->gameeventtype());
    }

    // optional .SSL_Referee_Game_Event.Originator originator = 2;
    if (has_originator()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->originator());
    }

    // optional string message = 3;
    if (has_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message());
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

void SSL_Referee_Game_Event::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SSL_Referee_Game_Event* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SSL_Referee_Game_Event*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SSL_Referee_Game_Event::MergeFrom(const SSL_Referee_Game_Event& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_gameeventtype()) {
      set_gameeventtype(from.gameeventtype());
    }
    if (from.has_originator()) {
      mutable_originator()->::SSL_Referee_Game_Event_Originator::MergeFrom(from.originator());
    }
    if (from.has_message()) {
      set_message(from.message());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SSL_Referee_Game_Event::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SSL_Referee_Game_Event::CopyFrom(const SSL_Referee_Game_Event& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SSL_Referee_Game_Event::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (has_originator()) {
    if (!this->originator().IsInitialized()) return false;
  }
  return true;
}

void SSL_Referee_Game_Event::Swap(SSL_Referee_Game_Event* other) {
  if (other != this) {
    std::swap(gameeventtype_, other->gameeventtype_);
    std::swap(originator_, other->originator_);
    std::swap(message_, other->message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SSL_Referee_Game_Event::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SSL_Referee_Game_Event_descriptor_;
  metadata.reflection = SSL_Referee_Game_Event_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
