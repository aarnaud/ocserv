/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ctl.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "ctl.pb-c.h"
void   status_rep__init
                     (StatusRep         *message)
{
  static StatusRep init_value = STATUS_REP__INIT;
  *message = init_value;
}
size_t status_rep__get_packed_size
                     (const StatusRep *message)
{
  assert(message->base.descriptor == &status_rep__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t status_rep__pack
                     (const StatusRep *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &status_rep__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t status_rep__pack_to_buffer
                     (const StatusRep *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &status_rep__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
StatusRep *
       status_rep__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (StatusRep *)
     protobuf_c_message_unpack (&status_rep__descriptor,
                                allocator, len, data);
}
void   status_rep__free_unpacked
                     (StatusRep *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &status_rep__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   bool_msg__init
                     (BoolMsg         *message)
{
  static BoolMsg init_value = BOOL_MSG__INIT;
  *message = init_value;
}
size_t bool_msg__get_packed_size
                     (const BoolMsg *message)
{
  assert(message->base.descriptor == &bool_msg__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t bool_msg__pack
                     (const BoolMsg *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &bool_msg__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t bool_msg__pack_to_buffer
                     (const BoolMsg *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &bool_msg__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
BoolMsg *
       bool_msg__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (BoolMsg *)
     protobuf_c_message_unpack (&bool_msg__descriptor,
                                allocator, len, data);
}
void   bool_msg__free_unpacked
                     (BoolMsg *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &bool_msg__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   user_info_rep__init
                     (UserInfoRep         *message)
{
  static UserInfoRep init_value = USER_INFO_REP__INIT;
  *message = init_value;
}
size_t user_info_rep__get_packed_size
                     (const UserInfoRep *message)
{
  assert(message->base.descriptor == &user_info_rep__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t user_info_rep__pack
                     (const UserInfoRep *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &user_info_rep__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t user_info_rep__pack_to_buffer
                     (const UserInfoRep *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &user_info_rep__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UserInfoRep *
       user_info_rep__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UserInfoRep *)
     protobuf_c_message_unpack (&user_info_rep__descriptor,
                                allocator, len, data);
}
void   user_info_rep__free_unpacked
                     (UserInfoRep *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &user_info_rep__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   user_list_rep__init
                     (UserListRep         *message)
{
  static UserListRep init_value = USER_LIST_REP__INIT;
  *message = init_value;
}
size_t user_list_rep__get_packed_size
                     (const UserListRep *message)
{
  assert(message->base.descriptor == &user_list_rep__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t user_list_rep__pack
                     (const UserListRep *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &user_list_rep__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t user_list_rep__pack_to_buffer
                     (const UserListRep *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &user_list_rep__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UserListRep *
       user_list_rep__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UserListRep *)
     protobuf_c_message_unpack (&user_list_rep__descriptor,
                                allocator, len, data);
}
void   user_list_rep__free_unpacked
                     (UserListRep *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &user_list_rep__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   top_update_rep__init
                     (TopUpdateRep         *message)
{
  static TopUpdateRep init_value = TOP_UPDATE_REP__INIT;
  *message = init_value;
}
size_t top_update_rep__get_packed_size
                     (const TopUpdateRep *message)
{
  assert(message->base.descriptor == &top_update_rep__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t top_update_rep__pack
                     (const TopUpdateRep *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &top_update_rep__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t top_update_rep__pack_to_buffer
                     (const TopUpdateRep *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &top_update_rep__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
TopUpdateRep *
       top_update_rep__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (TopUpdateRep *)
     protobuf_c_message_unpack (&top_update_rep__descriptor,
                                allocator, len, data);
}
void   top_update_rep__free_unpacked
                     (TopUpdateRep *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &top_update_rep__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   username_req__init
                     (UsernameReq         *message)
{
  static UsernameReq init_value = USERNAME_REQ__INIT;
  *message = init_value;
}
size_t username_req__get_packed_size
                     (const UsernameReq *message)
{
  assert(message->base.descriptor == &username_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t username_req__pack
                     (const UsernameReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &username_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t username_req__pack_to_buffer
                     (const UsernameReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &username_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UsernameReq *
       username_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UsernameReq *)
     protobuf_c_message_unpack (&username_req__descriptor,
                                allocator, len, data);
}
void   username_req__free_unpacked
                     (UsernameReq *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &username_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   id_req__init
                     (IdReq         *message)
{
  static IdReq init_value = ID_REQ__INIT;
  *message = init_value;
}
size_t id_req__get_packed_size
                     (const IdReq *message)
{
  assert(message->base.descriptor == &id_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t id_req__pack
                     (const IdReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &id_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t id_req__pack_to_buffer
                     (const IdReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &id_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
IdReq *
       id_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (IdReq *)
     protobuf_c_message_unpack (&id_req__descriptor,
                                allocator, len, data);
}
void   id_req__free_unpacked
                     (IdReq *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &id_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ban_info_rep__init
                     (BanInfoRep         *message)
{
  static BanInfoRep init_value = BAN_INFO_REP__INIT;
  *message = init_value;
}
size_t ban_info_rep__get_packed_size
                     (const BanInfoRep *message)
{
  assert(message->base.descriptor == &ban_info_rep__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ban_info_rep__pack
                     (const BanInfoRep *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ban_info_rep__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ban_info_rep__pack_to_buffer
                     (const BanInfoRep *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ban_info_rep__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
BanInfoRep *
       ban_info_rep__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (BanInfoRep *)
     protobuf_c_message_unpack (&ban_info_rep__descriptor,
                                allocator, len, data);
}
void   ban_info_rep__free_unpacked
                     (BanInfoRep *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &ban_info_rep__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   ban_list_rep__init
                     (BanListRep         *message)
{
  static BanListRep init_value = BAN_LIST_REP__INIT;
  *message = init_value;
}
size_t ban_list_rep__get_packed_size
                     (const BanListRep *message)
{
  assert(message->base.descriptor == &ban_list_rep__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t ban_list_rep__pack
                     (const BanListRep *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &ban_list_rep__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t ban_list_rep__pack_to_buffer
                     (const BanListRep *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &ban_list_rep__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
BanListRep *
       ban_list_rep__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (BanListRep *)
     protobuf_c_message_unpack (&ban_list_rep__descriptor,
                                allocator, len, data);
}
void   ban_list_rep__free_unpacked
                     (BanListRep *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &ban_list_rep__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   unban_req__init
                     (UnbanReq         *message)
{
  static UnbanReq init_value = UNBAN_REQ__INIT;
  *message = init_value;
}
size_t unban_req__get_packed_size
                     (const UnbanReq *message)
{
  assert(message->base.descriptor == &unban_req__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t unban_req__pack
                     (const UnbanReq *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &unban_req__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t unban_req__pack_to_buffer
                     (const UnbanReq *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &unban_req__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
UnbanReq *
       unban_req__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (UnbanReq *)
     protobuf_c_message_unpack (&unban_req__descriptor,
                                allocator, len, data);
}
void   unban_req__free_unpacked
                     (UnbanReq *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &unban_req__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor status_rep__field_descriptors[8] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(StatusRep, status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pid",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(StatusRep, pid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sec_mod_pid",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(StatusRep, sec_mod_pid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "active_clients",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(StatusRep, active_clients),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "start_time",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(StatusRep, start_time),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "stored_tls_sessions",
    7,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(StatusRep, stored_tls_sessions),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "banned_ips",
    8,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(StatusRep, banned_ips),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "secmod_client_entries",
    9,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(StatusRep, secmod_client_entries),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned status_rep__field_indices_by_name[] = {
  3,   /* field[3] = active_clients */
  6,   /* field[6] = banned_ips */
  1,   /* field[1] = pid */
  2,   /* field[2] = sec_mod_pid */
  7,   /* field[7] = secmod_client_entries */
  4,   /* field[4] = start_time */
  0,   /* field[0] = status */
  5,   /* field[5] = stored_tls_sessions */
};
static const ProtobufCIntRange status_rep__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 7, 5 },
  { 0, 8 }
};
const ProtobufCMessageDescriptor status_rep__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "status_rep",
  "StatusRep",
  "StatusRep",
  "",
  sizeof(StatusRep),
  8,
  status_rep__field_descriptors,
  status_rep__field_indices_by_name,
  2,  status_rep__number_ranges,
  (ProtobufCMessageInit) status_rep__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const protobuf_c_boolean bool_msg__status__default_value = 0;
static const ProtobufCFieldDescriptor bool_msg__field_descriptors[1] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(BoolMsg, status),
    NULL,
    &bool_msg__status__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned bool_msg__field_indices_by_name[] = {
  0,   /* field[0] = status */
};
static const ProtobufCIntRange bool_msg__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor bool_msg__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "bool_msg",
  "BoolMsg",
  "BoolMsg",
  "",
  sizeof(BoolMsg),
  1,
  bool_msg__field_descriptors,
  bool_msg__field_indices_by_name,
  1,  bool_msg__number_ranges,
  (ProtobufCMessageInit) bool_msg__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor user_info_rep__field_descriptors[32] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_SINT32,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "username",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, username),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "groupname",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, groupname),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ip",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, ip),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tun",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, tun),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "remote_ip",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, remote_ip),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "local_ip",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, local_ip),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "remote_ip6",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, remote_ip6),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "local_ip6",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, local_ip6),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "conn_time",
    10,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, conn_time),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "hostname",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, hostname),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "user_agent",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, user_agent),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "status",
    13,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tls_ciphersuite",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, tls_ciphersuite),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dtls_ciphersuite",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, dtls_ciphersuite),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "rx_per_sec",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(UserInfoRep, has_rx_per_sec),
    offsetof(UserInfoRep, rx_per_sec),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "tx_per_sec",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(UserInfoRep, has_tx_per_sec),
    offsetof(UserInfoRep, tx_per_sec),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dns",
    18,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(UserInfoRep, n_dns),
    offsetof(UserInfoRep, dns),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "nbns",
    19,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(UserInfoRep, n_nbns),
    offsetof(UserInfoRep, nbns),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "routes",
    20,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(UserInfoRep, n_routes),
    offsetof(UserInfoRep, routes),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "iroutes",
    21,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(UserInfoRep, n_iroutes),
    offsetof(UserInfoRep, iroutes),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "mtu",
    22,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(UserInfoRep, has_mtu),
    offsetof(UserInfoRep, mtu),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cstp_compr",
    23,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, cstp_compr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dtls_compr",
    24,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, dtls_compr),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "no_routes",
    25,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(UserInfoRep, n_no_routes),
    offsetof(UserInfoRep, no_routes),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "local_dev_ip",
    26,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, local_dev_ip),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "domains",
    27,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(UserInfoRep, n_domains),
    offsetof(UserInfoRep, domains),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "dpd",
    28,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, dpd),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "keepalive",
    29,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, keepalive),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "restrict_to_routes",
    30,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BOOL,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, restrict_to_routes),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "fw_ports",
    31,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(UserInfoRep, n_fw_ports),
    offsetof(UserInfoRep, fw_ports),
    &fw_port_st__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sid",
    32,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(UserInfoRep, sid),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned user_info_rep__field_indices_by_name[] = {
  9,   /* field[9] = conn_time */
  22,   /* field[22] = cstp_compr */
  17,   /* field[17] = dns */
  26,   /* field[26] = domains */
  27,   /* field[27] = dpd */
  14,   /* field[14] = dtls_ciphersuite */
  23,   /* field[23] = dtls_compr */
  30,   /* field[30] = fw_ports */
  2,   /* field[2] = groupname */
  10,   /* field[10] = hostname */
  0,   /* field[0] = id */
  3,   /* field[3] = ip */
  20,   /* field[20] = iroutes */
  28,   /* field[28] = keepalive */
  25,   /* field[25] = local_dev_ip */
  6,   /* field[6] = local_ip */
  8,   /* field[8] = local_ip6 */
  21,   /* field[21] = mtu */
  18,   /* field[18] = nbns */
  24,   /* field[24] = no_routes */
  5,   /* field[5] = remote_ip */
  7,   /* field[7] = remote_ip6 */
  29,   /* field[29] = restrict_to_routes */
  19,   /* field[19] = routes */
  15,   /* field[15] = rx_per_sec */
  31,   /* field[31] = sid */
  12,   /* field[12] = status */
  13,   /* field[13] = tls_ciphersuite */
  4,   /* field[4] = tun */
  16,   /* field[16] = tx_per_sec */
  11,   /* field[11] = user_agent */
  1,   /* field[1] = username */
};
static const ProtobufCIntRange user_info_rep__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 32 }
};
const ProtobufCMessageDescriptor user_info_rep__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "user_info_rep",
  "UserInfoRep",
  "UserInfoRep",
  "",
  sizeof(UserInfoRep),
  32,
  user_info_rep__field_descriptors,
  user_info_rep__field_indices_by_name,
  1,  user_info_rep__number_ranges,
  (ProtobufCMessageInit) user_info_rep__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor user_list_rep__field_descriptors[1] =
{
  {
    "user",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(UserListRep, n_user),
    offsetof(UserListRep, user),
    &user_info_rep__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned user_list_rep__field_indices_by_name[] = {
  0,   /* field[0] = user */
};
static const ProtobufCIntRange user_list_rep__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor user_list_rep__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "user_list_rep",
  "UserListRep",
  "UserListRep",
  "",
  sizeof(UserListRep),
  1,
  user_list_rep__field_descriptors,
  user_list_rep__field_indices_by_name,
  1,  user_list_rep__number_ranges,
  (ProtobufCMessageInit) user_list_rep__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor top_update_rep__field_descriptors[4] =
{
  {
    "connected",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(TopUpdateRep, connected),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "discon_reason",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(TopUpdateRep, has_discon_reason),
    offsetof(TopUpdateRep, discon_reason),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "discon_reason_txt",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(TopUpdateRep, discon_reason_txt),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "user",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(TopUpdateRep, user),
    &user_list_rep__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned top_update_rep__field_indices_by_name[] = {
  0,   /* field[0] = connected */
  1,   /* field[1] = discon_reason */
  2,   /* field[2] = discon_reason_txt */
  3,   /* field[3] = user */
};
static const ProtobufCIntRange top_update_rep__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor top_update_rep__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "top_update_rep",
  "TopUpdateRep",
  "TopUpdateRep",
  "",
  sizeof(TopUpdateRep),
  4,
  top_update_rep__field_descriptors,
  top_update_rep__field_indices_by_name,
  1,  top_update_rep__number_ranges,
  (ProtobufCMessageInit) top_update_rep__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor username_req__field_descriptors[1] =
{
  {
    "username",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(UsernameReq, username),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned username_req__field_indices_by_name[] = {
  0,   /* field[0] = username */
};
static const ProtobufCIntRange username_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor username_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "username_req",
  "UsernameReq",
  "UsernameReq",
  "",
  sizeof(UsernameReq),
  1,
  username_req__field_descriptors,
  username_req__field_indices_by_name,
  1,  username_req__number_ranges,
  (ProtobufCMessageInit) username_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor id_req__field_descriptors[1] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_SINT32,
    0,   /* quantifier_offset */
    offsetof(IdReq, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned id_req__field_indices_by_name[] = {
  0,   /* field[0] = id */
};
static const ProtobufCIntRange id_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor id_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "id_req",
  "IdReq",
  "IdReq",
  "",
  sizeof(IdReq),
  1,
  id_req__field_descriptors,
  id_req__field_indices_by_name,
  1,  id_req__number_ranges,
  (ProtobufCMessageInit) id_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ban_info_rep__field_descriptors[3] =
{
  {
    "ip",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(BanInfoRep, ip),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "score",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(BanInfoRep, score),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "expires",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(BanInfoRep, has_expires),
    offsetof(BanInfoRep, expires),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ban_info_rep__field_indices_by_name[] = {
  2,   /* field[2] = expires */
  0,   /* field[0] = ip */
  1,   /* field[1] = score */
};
static const ProtobufCIntRange ban_info_rep__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor ban_info_rep__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "ban_info_rep",
  "BanInfoRep",
  "BanInfoRep",
  "",
  sizeof(BanInfoRep),
  3,
  ban_info_rep__field_descriptors,
  ban_info_rep__field_indices_by_name,
  1,  ban_info_rep__number_ranges,
  (ProtobufCMessageInit) ban_info_rep__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor ban_list_rep__field_descriptors[1] =
{
  {
    "info",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(BanListRep, n_info),
    offsetof(BanListRep, info),
    &ban_info_rep__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned ban_list_rep__field_indices_by_name[] = {
  0,   /* field[0] = info */
};
static const ProtobufCIntRange ban_list_rep__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor ban_list_rep__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "ban_list_rep",
  "BanListRep",
  "BanListRep",
  "",
  sizeof(BanListRep),
  1,
  ban_list_rep__field_descriptors,
  ban_list_rep__field_indices_by_name,
  1,  ban_list_rep__number_ranges,
  (ProtobufCMessageInit) ban_list_rep__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor unban_req__field_descriptors[1] =
{
  {
    "ip",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_BYTES,
    0,   /* quantifier_offset */
    offsetof(UnbanReq, ip),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned unban_req__field_indices_by_name[] = {
  0,   /* field[0] = ip */
};
static const ProtobufCIntRange unban_req__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor unban_req__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "unban_req",
  "UnbanReq",
  "UnbanReq",
  "",
  sizeof(UnbanReq),
  1,
  unban_req__field_descriptors,
  unban_req__field_indices_by_name,
  1,  unban_req__number_ranges,
  (ProtobufCMessageInit) unban_req__init,
  NULL,NULL,NULL    /* reserved[123] */
};
