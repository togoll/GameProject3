// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg_RetCode.proto

#ifndef PROTOBUF_Msg_5fRetCode_2eproto__INCLUDED
#define PROTOBUF_Msg_5fRetCode_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3004000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

namespace protobuf_Msg_5fRetCode_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
inline void InitDefaults() {
}
}  // namespace protobuf_Msg_5fRetCode_2eproto

enum MessageRetCode {
  MRC_SUCCESSED = 0,
  MRC_FAILED = 1,
  MRC_DISCONNECT = 2,
  MRC_ACCOUNT_EXIST = 3,
  MRC_NAME_EXIST = 4,
  MRC_INVALID_PASSWORD = 5,
  MRC_INVALID_NAME = 6,
  MRC_INVALID_ROLEID = 7,
  MRC_INVALID_ITEMID = 8,
  MRC_INVALID_COPYID = 9,
  MRC_INVALID_PETID = 10,
  MRC_INVALID_PARTNERID = 11,
  MRC_INVALID_EQUIP_ID = 12,
  MRC_NOT_ENOUGH_ACTOIN = 13,
  MRC_NOT_ENOUGH_MONEY = 14,
  MRC_NOT_ENOUGH_ITEM = 15,
  MRC_NOT_ENOUGH_TIMES = 16,
  MessageRetCode_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MessageRetCode_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MessageRetCode_IsValid(int value);
const MessageRetCode MessageRetCode_MIN = MRC_SUCCESSED;
const MessageRetCode MessageRetCode_MAX = MRC_NOT_ENOUGH_TIMES;
const int MessageRetCode_ARRAYSIZE = MessageRetCode_MAX + 1;

const ::google::protobuf::EnumDescriptor* MessageRetCode_descriptor();
inline const ::std::string& MessageRetCode_Name(MessageRetCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    MessageRetCode_descriptor(), value);
}
inline bool MessageRetCode_Parse(
    const ::std::string& name, MessageRetCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MessageRetCode>(
    MessageRetCode_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::MessageRetCode> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MessageRetCode>() {
  return ::MessageRetCode_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Msg_5fRetCode_2eproto__INCLUDED
