#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_lisp_gpe_lisp_gpe_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_lisp_gpe_lisp_gpe_api_json

#include <stdlib.h>
#include <stddef.h>
#include <arpa/inet.h>
#include <vapi/vapi_internal.h>
#include <vapi/vapi.h>
#include <vapi/vapi_dbg.h>

#ifdef __cplusplus
extern "C" {
#endif
#include <vapi/vpe.api.vapi.h>

extern vapi_msg_id_t vapi_msg_id_gpe_fwd_entries_get_reply;
extern vapi_msg_id_t vapi_msg_id_gpe_fwd_entry_path_details;
extern vapi_msg_id_t vapi_msg_id_gpe_add_del_fwd_entry;
extern vapi_msg_id_t vapi_msg_id_gpe_set_encap_mode;
extern vapi_msg_id_t vapi_msg_id_gpe_fwd_entry_vnis_get_reply;
extern vapi_msg_id_t vapi_msg_id_gpe_add_del_fwd_entry_reply;
extern vapi_msg_id_t vapi_msg_id_gpe_add_del_native_fwd_rpath_reply;
extern vapi_msg_id_t vapi_msg_id_gpe_add_del_native_fwd_rpath;
extern vapi_msg_id_t vapi_msg_id_gpe_native_fwd_rpaths_get;
extern vapi_msg_id_t vapi_msg_id_gpe_add_del_iface_reply;
extern vapi_msg_id_t vapi_msg_id_gpe_enable_disable;
extern vapi_msg_id_t vapi_msg_id_gpe_fwd_entries_get;
extern vapi_msg_id_t vapi_msg_id_gpe_native_fwd_rpaths_get_reply;
extern vapi_msg_id_t vapi_msg_id_gpe_get_encap_mode_reply;
extern vapi_msg_id_t vapi_msg_id_gpe_get_encap_mode;
extern vapi_msg_id_t vapi_msg_id_gpe_add_del_iface;
extern vapi_msg_id_t vapi_msg_id_gpe_set_encap_mode_reply;
extern vapi_msg_id_t vapi_msg_id_gpe_enable_disable_reply;
extern vapi_msg_id_t vapi_msg_id_gpe_fwd_entry_path_dump;
extern vapi_msg_id_t vapi_msg_id_gpe_fwd_entry_vnis_get;

#define DEFINE_VAPI_MSG_IDS_LISP_GPE_API_JSON\
  vapi_msg_id_t vapi_msg_id_gpe_fwd_entries_get_reply;\
  vapi_msg_id_t vapi_msg_id_gpe_fwd_entry_path_details;\
  vapi_msg_id_t vapi_msg_id_gpe_add_del_fwd_entry;\
  vapi_msg_id_t vapi_msg_id_gpe_set_encap_mode;\
  vapi_msg_id_t vapi_msg_id_gpe_fwd_entry_vnis_get_reply;\
  vapi_msg_id_t vapi_msg_id_gpe_add_del_fwd_entry_reply;\
  vapi_msg_id_t vapi_msg_id_gpe_add_del_native_fwd_rpath_reply;\
  vapi_msg_id_t vapi_msg_id_gpe_add_del_native_fwd_rpath;\
  vapi_msg_id_t vapi_msg_id_gpe_native_fwd_rpaths_get;\
  vapi_msg_id_t vapi_msg_id_gpe_add_del_iface_reply;\
  vapi_msg_id_t vapi_msg_id_gpe_enable_disable;\
  vapi_msg_id_t vapi_msg_id_gpe_fwd_entries_get;\
  vapi_msg_id_t vapi_msg_id_gpe_native_fwd_rpaths_get_reply;\
  vapi_msg_id_t vapi_msg_id_gpe_get_encap_mode_reply;\
  vapi_msg_id_t vapi_msg_id_gpe_get_encap_mode;\
  vapi_msg_id_t vapi_msg_id_gpe_add_del_iface;\
  vapi_msg_id_t vapi_msg_id_gpe_set_encap_mode_reply;\
  vapi_msg_id_t vapi_msg_id_gpe_enable_disable_reply;\
  vapi_msg_id_t vapi_msg_id_gpe_fwd_entry_path_dump;\
  vapi_msg_id_t vapi_msg_id_gpe_fwd_entry_vnis_get;


#ifndef defined_vapi_type_gpe_locator
#define defined_vapi_type_gpe_locator
typedef struct __attribute__((__packed__)) {
  u8 is_ip4;
  u8 weight;
  u8 addr[16];
} vapi_type_gpe_locator;

static inline void vapi_type_gpe_locator_hton(vapi_type_gpe_locator *msg)
{

}

static inline void vapi_type_gpe_locator_ntoh(vapi_type_gpe_locator *msg)
{

}
#endif

#ifndef defined_vapi_type_gpe_fwd_entry
#define defined_vapi_type_gpe_fwd_entry
typedef struct __attribute__((__packed__)) {
  u32 fwd_entry_index;
  u32 dp_table;
  u8 eid_type;
  u8 leid_prefix_len;
  u8 reid_prefix_len;
  u8 leid[16];
  u8 reid[16];
  u32 vni;
  u8 action;
} vapi_type_gpe_fwd_entry;

static inline void vapi_type_gpe_fwd_entry_hton(vapi_type_gpe_fwd_entry *msg)
{
  msg->fwd_entry_index = htobe32(msg->fwd_entry_index);
  msg->dp_table = htobe32(msg->dp_table);
  msg->vni = htobe32(msg->vni);
}

static inline void vapi_type_gpe_fwd_entry_ntoh(vapi_type_gpe_fwd_entry *msg)
{
  msg->fwd_entry_index = be32toh(msg->fwd_entry_index);
  msg->dp_table = be32toh(msg->dp_table);
  msg->vni = be32toh(msg->vni);
}
#endif

#ifndef defined_vapi_type_gpe_native_fwd_rpath
#define defined_vapi_type_gpe_native_fwd_rpath
typedef struct __attribute__((__packed__)) {
  u32 fib_index;
  u32 nh_sw_if_index;
  u8 is_ip4;
  u8 nh_addr[16];
} vapi_type_gpe_native_fwd_rpath;

static inline void vapi_type_gpe_native_fwd_rpath_hton(vapi_type_gpe_native_fwd_rpath *msg)
{
  msg->fib_index = htobe32(msg->fib_index);
  msg->nh_sw_if_index = htobe32(msg->nh_sw_if_index);
}

static inline void vapi_type_gpe_native_fwd_rpath_ntoh(vapi_type_gpe_native_fwd_rpath *msg)
{
  msg->fib_index = be32toh(msg->fib_index);
  msg->nh_sw_if_index = be32toh(msg->nh_sw_if_index);
}
#endif

#ifndef defined_vapi_msg_gpe_fwd_entries_get_reply
#define defined_vapi_msg_gpe_fwd_entries_get_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 count;
  vapi_type_gpe_fwd_entry entries[0]; 
} vapi_payload_gpe_fwd_entries_get_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gpe_fwd_entries_get_reply payload;
} vapi_msg_gpe_fwd_entries_get_reply;

static inline void vapi_msg_gpe_fwd_entries_get_reply_payload_hton(vapi_payload_gpe_fwd_entries_get_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->count = htobe32(payload->count);
  do { unsigned i; for (i = 0; i < be32toh(payload->count); ++i) { vapi_type_gpe_fwd_entry_hton(&payload->entries[i]); } } while(0);
}

static inline void vapi_msg_gpe_fwd_entries_get_reply_payload_ntoh(vapi_payload_gpe_fwd_entries_get_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->count = be32toh(payload->count);
  do { unsigned i; for (i = 0; i < payload->count; ++i) { vapi_type_gpe_fwd_entry_ntoh(&payload->entries[i]); } } while(0);
}

static inline void vapi_msg_gpe_fwd_entries_get_reply_hton(vapi_msg_gpe_fwd_entries_get_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entries_get_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gpe_fwd_entries_get_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_fwd_entries_get_reply_ntoh(vapi_msg_gpe_fwd_entries_get_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entries_get_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gpe_fwd_entries_get_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_fwd_entries_get_reply_msg_size(vapi_msg_gpe_fwd_entries_get_reply *msg)
{
  return sizeof(*msg)+ msg->payload.count * sizeof(msg->payload.entries[0]);
}

static void __attribute__((constructor)) __vapi_constructor_gpe_fwd_entries_get_reply()
{
  static const char name[] = "gpe_fwd_entries_get_reply";
  static const char name_with_crc[] = "gpe_fwd_entries_get_reply_07b02c34";
  static vapi_message_desc_t __vapi_metadata_gpe_fwd_entries_get_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gpe_fwd_entries_get_reply, payload),
    sizeof(vapi_msg_gpe_fwd_entries_get_reply),
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entries_get_reply_hton,
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entries_get_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_fwd_entries_get_reply = vapi_register_msg(&__vapi_metadata_gpe_fwd_entries_get_reply);
  VAPI_DBG("Assigned msg id %d to gpe_fwd_entries_get_reply", vapi_msg_id_gpe_fwd_entries_get_reply);
}

static inline void vapi_set_vapi_msg_gpe_fwd_entries_get_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gpe_fwd_entries_get_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gpe_fwd_entries_get_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gpe_fwd_entry_path_details
#define defined_vapi_msg_gpe_fwd_entry_path_details
typedef struct __attribute__ ((__packed__)) {
  vapi_type_gpe_locator lcl_loc;
  vapi_type_gpe_locator rmt_loc; 
} vapi_payload_gpe_fwd_entry_path_details;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gpe_fwd_entry_path_details payload;
} vapi_msg_gpe_fwd_entry_path_details;

static inline void vapi_msg_gpe_fwd_entry_path_details_payload_hton(vapi_payload_gpe_fwd_entry_path_details *payload)
{

}

static inline void vapi_msg_gpe_fwd_entry_path_details_payload_ntoh(vapi_payload_gpe_fwd_entry_path_details *payload)
{

}

static inline void vapi_msg_gpe_fwd_entry_path_details_hton(vapi_msg_gpe_fwd_entry_path_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entry_path_details'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gpe_fwd_entry_path_details_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_fwd_entry_path_details_ntoh(vapi_msg_gpe_fwd_entry_path_details *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entry_path_details'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gpe_fwd_entry_path_details_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_fwd_entry_path_details_msg_size(vapi_msg_gpe_fwd_entry_path_details *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gpe_fwd_entry_path_details()
{
  static const char name[] = "gpe_fwd_entry_path_details";
  static const char name_with_crc[] = "gpe_fwd_entry_path_details_a9bdc1f1";
  static vapi_message_desc_t __vapi_metadata_gpe_fwd_entry_path_details = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gpe_fwd_entry_path_details, payload),
    sizeof(vapi_msg_gpe_fwd_entry_path_details),
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entry_path_details_hton,
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entry_path_details_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_fwd_entry_path_details = vapi_register_msg(&__vapi_metadata_gpe_fwd_entry_path_details);
  VAPI_DBG("Assigned msg id %d to gpe_fwd_entry_path_details", vapi_msg_id_gpe_fwd_entry_path_details);
}

static inline void vapi_set_vapi_msg_gpe_fwd_entry_path_details_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gpe_fwd_entry_path_details *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gpe_fwd_entry_path_details, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gpe_add_del_fwd_entry_reply
#define defined_vapi_msg_gpe_add_del_fwd_entry_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 fwd_entry_index; 
} vapi_payload_gpe_add_del_fwd_entry_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gpe_add_del_fwd_entry_reply payload;
} vapi_msg_gpe_add_del_fwd_entry_reply;

static inline void vapi_msg_gpe_add_del_fwd_entry_reply_payload_hton(vapi_payload_gpe_add_del_fwd_entry_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->fwd_entry_index = htobe32(payload->fwd_entry_index);
}

static inline void vapi_msg_gpe_add_del_fwd_entry_reply_payload_ntoh(vapi_payload_gpe_add_del_fwd_entry_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->fwd_entry_index = be32toh(payload->fwd_entry_index);
}

static inline void vapi_msg_gpe_add_del_fwd_entry_reply_hton(vapi_msg_gpe_add_del_fwd_entry_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_fwd_entry_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gpe_add_del_fwd_entry_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_add_del_fwd_entry_reply_ntoh(vapi_msg_gpe_add_del_fwd_entry_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_fwd_entry_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gpe_add_del_fwd_entry_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_add_del_fwd_entry_reply_msg_size(vapi_msg_gpe_add_del_fwd_entry_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gpe_add_del_fwd_entry_reply()
{
  static const char name[] = "gpe_add_del_fwd_entry_reply";
  static const char name_with_crc[] = "gpe_add_del_fwd_entry_reply_efe5f176";
  static vapi_message_desc_t __vapi_metadata_gpe_add_del_fwd_entry_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gpe_add_del_fwd_entry_reply, payload),
    sizeof(vapi_msg_gpe_add_del_fwd_entry_reply),
    (generic_swap_fn_t)vapi_msg_gpe_add_del_fwd_entry_reply_hton,
    (generic_swap_fn_t)vapi_msg_gpe_add_del_fwd_entry_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_add_del_fwd_entry_reply = vapi_register_msg(&__vapi_metadata_gpe_add_del_fwd_entry_reply);
  VAPI_DBG("Assigned msg id %d to gpe_add_del_fwd_entry_reply", vapi_msg_id_gpe_add_del_fwd_entry_reply);
}

static inline void vapi_set_vapi_msg_gpe_add_del_fwd_entry_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gpe_add_del_fwd_entry_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gpe_add_del_fwd_entry_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gpe_add_del_fwd_entry
#define defined_vapi_msg_gpe_add_del_fwd_entry
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 eid_type;
  u8 rmt_eid[16];
  u8 lcl_eid[16];
  u8 rmt_len;
  u8 lcl_len;
  u32 vni;
  u32 dp_table;
  u8 action;
  u32 loc_num;
  vapi_type_gpe_locator locs[0]; 
} vapi_payload_gpe_add_del_fwd_entry;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gpe_add_del_fwd_entry payload;
} vapi_msg_gpe_add_del_fwd_entry;

static inline void vapi_msg_gpe_add_del_fwd_entry_payload_hton(vapi_payload_gpe_add_del_fwd_entry *payload)
{
  payload->vni = htobe32(payload->vni);
  payload->dp_table = htobe32(payload->dp_table);
  payload->loc_num = htobe32(payload->loc_num);
}

static inline void vapi_msg_gpe_add_del_fwd_entry_payload_ntoh(vapi_payload_gpe_add_del_fwd_entry *payload)
{
  payload->vni = be32toh(payload->vni);
  payload->dp_table = be32toh(payload->dp_table);
  payload->loc_num = be32toh(payload->loc_num);
}

static inline void vapi_msg_gpe_add_del_fwd_entry_hton(vapi_msg_gpe_add_del_fwd_entry *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_fwd_entry'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gpe_add_del_fwd_entry_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_add_del_fwd_entry_ntoh(vapi_msg_gpe_add_del_fwd_entry *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_fwd_entry'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gpe_add_del_fwd_entry_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_add_del_fwd_entry_msg_size(vapi_msg_gpe_add_del_fwd_entry *msg)
{
  return sizeof(*msg)+ msg->payload.loc_num * sizeof(msg->payload.locs[0]);
}

static inline vapi_msg_gpe_add_del_fwd_entry* vapi_alloc_gpe_add_del_fwd_entry(struct vapi_ctx_s *ctx, size_t _locs_array_size)
{
  vapi_msg_gpe_add_del_fwd_entry *msg = NULL;
  const size_t size = sizeof(vapi_msg_gpe_add_del_fwd_entry) + sizeof(msg->payload.locs[0]) * _locs_array_size;
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gpe_add_del_fwd_entry*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gpe_add_del_fwd_entry);
  msg->payload.loc_num = _locs_array_size;

  return msg;
}

static inline vapi_error_e vapi_gpe_add_del_fwd_entry(struct vapi_ctx_s *ctx,
  vapi_msg_gpe_add_del_fwd_entry *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gpe_add_del_fwd_entry_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_gpe_add_del_fwd_entry_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_gpe_add_del_fwd_entry_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gpe_add_del_fwd_entry()
{
  static const char name[] = "gpe_add_del_fwd_entry";
  static const char name_with_crc[] = "gpe_add_del_fwd_entry_afbf857a";
  static vapi_message_desc_t __vapi_metadata_gpe_add_del_fwd_entry = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gpe_add_del_fwd_entry, payload),
    sizeof(vapi_msg_gpe_add_del_fwd_entry),
    (generic_swap_fn_t)vapi_msg_gpe_add_del_fwd_entry_hton,
    (generic_swap_fn_t)vapi_msg_gpe_add_del_fwd_entry_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_add_del_fwd_entry = vapi_register_msg(&__vapi_metadata_gpe_add_del_fwd_entry);
  VAPI_DBG("Assigned msg id %d to gpe_add_del_fwd_entry", vapi_msg_id_gpe_add_del_fwd_entry);
}
#endif

#ifndef defined_vapi_msg_gpe_set_encap_mode_reply
#define defined_vapi_msg_gpe_set_encap_mode_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gpe_set_encap_mode_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gpe_set_encap_mode_reply payload;
} vapi_msg_gpe_set_encap_mode_reply;

static inline void vapi_msg_gpe_set_encap_mode_reply_payload_hton(vapi_payload_gpe_set_encap_mode_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gpe_set_encap_mode_reply_payload_ntoh(vapi_payload_gpe_set_encap_mode_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gpe_set_encap_mode_reply_hton(vapi_msg_gpe_set_encap_mode_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_set_encap_mode_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gpe_set_encap_mode_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_set_encap_mode_reply_ntoh(vapi_msg_gpe_set_encap_mode_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_set_encap_mode_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gpe_set_encap_mode_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_set_encap_mode_reply_msg_size(vapi_msg_gpe_set_encap_mode_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gpe_set_encap_mode_reply()
{
  static const char name[] = "gpe_set_encap_mode_reply";
  static const char name_with_crc[] = "gpe_set_encap_mode_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gpe_set_encap_mode_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gpe_set_encap_mode_reply, payload),
    sizeof(vapi_msg_gpe_set_encap_mode_reply),
    (generic_swap_fn_t)vapi_msg_gpe_set_encap_mode_reply_hton,
    (generic_swap_fn_t)vapi_msg_gpe_set_encap_mode_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_set_encap_mode_reply = vapi_register_msg(&__vapi_metadata_gpe_set_encap_mode_reply);
  VAPI_DBG("Assigned msg id %d to gpe_set_encap_mode_reply", vapi_msg_id_gpe_set_encap_mode_reply);
}

static inline void vapi_set_vapi_msg_gpe_set_encap_mode_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gpe_set_encap_mode_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gpe_set_encap_mode_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gpe_set_encap_mode
#define defined_vapi_msg_gpe_set_encap_mode
typedef struct __attribute__ ((__packed__)) {
  u8 mode; 
} vapi_payload_gpe_set_encap_mode;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gpe_set_encap_mode payload;
} vapi_msg_gpe_set_encap_mode;

static inline void vapi_msg_gpe_set_encap_mode_payload_hton(vapi_payload_gpe_set_encap_mode *payload)
{

}

static inline void vapi_msg_gpe_set_encap_mode_payload_ntoh(vapi_payload_gpe_set_encap_mode *payload)
{

}

static inline void vapi_msg_gpe_set_encap_mode_hton(vapi_msg_gpe_set_encap_mode *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_set_encap_mode'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gpe_set_encap_mode_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_set_encap_mode_ntoh(vapi_msg_gpe_set_encap_mode *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_set_encap_mode'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gpe_set_encap_mode_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_set_encap_mode_msg_size(vapi_msg_gpe_set_encap_mode *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gpe_set_encap_mode* vapi_alloc_gpe_set_encap_mode(struct vapi_ctx_s *ctx)
{
  vapi_msg_gpe_set_encap_mode *msg = NULL;
  const size_t size = sizeof(vapi_msg_gpe_set_encap_mode);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gpe_set_encap_mode*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gpe_set_encap_mode);

  return msg;
}

static inline vapi_error_e vapi_gpe_set_encap_mode(struct vapi_ctx_s *ctx,
  vapi_msg_gpe_set_encap_mode *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gpe_set_encap_mode_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_gpe_set_encap_mode_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_gpe_set_encap_mode_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gpe_set_encap_mode()
{
  static const char name[] = "gpe_set_encap_mode";
  static const char name_with_crc[] = "gpe_set_encap_mode_f3f93ce9";
  static vapi_message_desc_t __vapi_metadata_gpe_set_encap_mode = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gpe_set_encap_mode, payload),
    sizeof(vapi_msg_gpe_set_encap_mode),
    (generic_swap_fn_t)vapi_msg_gpe_set_encap_mode_hton,
    (generic_swap_fn_t)vapi_msg_gpe_set_encap_mode_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_set_encap_mode = vapi_register_msg(&__vapi_metadata_gpe_set_encap_mode);
  VAPI_DBG("Assigned msg id %d to gpe_set_encap_mode", vapi_msg_id_gpe_set_encap_mode);
}
#endif

#ifndef defined_vapi_msg_gpe_fwd_entry_vnis_get_reply
#define defined_vapi_msg_gpe_fwd_entry_vnis_get_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 count;
  u32 vnis[0]; 
} vapi_payload_gpe_fwd_entry_vnis_get_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gpe_fwd_entry_vnis_get_reply payload;
} vapi_msg_gpe_fwd_entry_vnis_get_reply;

static inline void vapi_msg_gpe_fwd_entry_vnis_get_reply_payload_hton(vapi_payload_gpe_fwd_entry_vnis_get_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->count = htobe32(payload->count);
  do { unsigned i; for (i = 0; i < be32toh(payload->count); ++i) { payload->vnis[i] = htobe32(payload->vnis[i]); } } while(0);
}

static inline void vapi_msg_gpe_fwd_entry_vnis_get_reply_payload_ntoh(vapi_payload_gpe_fwd_entry_vnis_get_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->count = be32toh(payload->count);
  do { unsigned i; for (i = 0; i < payload->count; ++i) { payload->vnis[i] = be32toh(payload->vnis[i]); } } while(0);
}

static inline void vapi_msg_gpe_fwd_entry_vnis_get_reply_hton(vapi_msg_gpe_fwd_entry_vnis_get_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entry_vnis_get_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gpe_fwd_entry_vnis_get_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_fwd_entry_vnis_get_reply_ntoh(vapi_msg_gpe_fwd_entry_vnis_get_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entry_vnis_get_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gpe_fwd_entry_vnis_get_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_fwd_entry_vnis_get_reply_msg_size(vapi_msg_gpe_fwd_entry_vnis_get_reply *msg)
{
  return sizeof(*msg)+ msg->payload.count * sizeof(msg->payload.vnis[0]);
}

static void __attribute__((constructor)) __vapi_constructor_gpe_fwd_entry_vnis_get_reply()
{
  static const char name[] = "gpe_fwd_entry_vnis_get_reply";
  static const char name_with_crc[] = "gpe_fwd_entry_vnis_get_reply_aa70da20";
  static vapi_message_desc_t __vapi_metadata_gpe_fwd_entry_vnis_get_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gpe_fwd_entry_vnis_get_reply, payload),
    sizeof(vapi_msg_gpe_fwd_entry_vnis_get_reply),
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entry_vnis_get_reply_hton,
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entry_vnis_get_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_fwd_entry_vnis_get_reply = vapi_register_msg(&__vapi_metadata_gpe_fwd_entry_vnis_get_reply);
  VAPI_DBG("Assigned msg id %d to gpe_fwd_entry_vnis_get_reply", vapi_msg_id_gpe_fwd_entry_vnis_get_reply);
}

static inline void vapi_set_vapi_msg_gpe_fwd_entry_vnis_get_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gpe_fwd_entry_vnis_get_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gpe_fwd_entry_vnis_get_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gpe_add_del_native_fwd_rpath_reply
#define defined_vapi_msg_gpe_add_del_native_fwd_rpath_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gpe_add_del_native_fwd_rpath_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gpe_add_del_native_fwd_rpath_reply payload;
} vapi_msg_gpe_add_del_native_fwd_rpath_reply;

static inline void vapi_msg_gpe_add_del_native_fwd_rpath_reply_payload_hton(vapi_payload_gpe_add_del_native_fwd_rpath_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gpe_add_del_native_fwd_rpath_reply_payload_ntoh(vapi_payload_gpe_add_del_native_fwd_rpath_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gpe_add_del_native_fwd_rpath_reply_hton(vapi_msg_gpe_add_del_native_fwd_rpath_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_native_fwd_rpath_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gpe_add_del_native_fwd_rpath_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_add_del_native_fwd_rpath_reply_ntoh(vapi_msg_gpe_add_del_native_fwd_rpath_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_native_fwd_rpath_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gpe_add_del_native_fwd_rpath_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_add_del_native_fwd_rpath_reply_msg_size(vapi_msg_gpe_add_del_native_fwd_rpath_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gpe_add_del_native_fwd_rpath_reply()
{
  static const char name[] = "gpe_add_del_native_fwd_rpath_reply";
  static const char name_with_crc[] = "gpe_add_del_native_fwd_rpath_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gpe_add_del_native_fwd_rpath_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gpe_add_del_native_fwd_rpath_reply, payload),
    sizeof(vapi_msg_gpe_add_del_native_fwd_rpath_reply),
    (generic_swap_fn_t)vapi_msg_gpe_add_del_native_fwd_rpath_reply_hton,
    (generic_swap_fn_t)vapi_msg_gpe_add_del_native_fwd_rpath_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_add_del_native_fwd_rpath_reply = vapi_register_msg(&__vapi_metadata_gpe_add_del_native_fwd_rpath_reply);
  VAPI_DBG("Assigned msg id %d to gpe_add_del_native_fwd_rpath_reply", vapi_msg_id_gpe_add_del_native_fwd_rpath_reply);
}

static inline void vapi_set_vapi_msg_gpe_add_del_native_fwd_rpath_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gpe_add_del_native_fwd_rpath_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gpe_add_del_native_fwd_rpath_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gpe_add_del_native_fwd_rpath
#define defined_vapi_msg_gpe_add_del_native_fwd_rpath
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u32 table_id;
  u32 nh_sw_if_index;
  u8 is_ip4;
  u8 nh_addr[16]; 
} vapi_payload_gpe_add_del_native_fwd_rpath;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gpe_add_del_native_fwd_rpath payload;
} vapi_msg_gpe_add_del_native_fwd_rpath;

static inline void vapi_msg_gpe_add_del_native_fwd_rpath_payload_hton(vapi_payload_gpe_add_del_native_fwd_rpath *payload)
{
  payload->table_id = htobe32(payload->table_id);
  payload->nh_sw_if_index = htobe32(payload->nh_sw_if_index);
}

static inline void vapi_msg_gpe_add_del_native_fwd_rpath_payload_ntoh(vapi_payload_gpe_add_del_native_fwd_rpath *payload)
{
  payload->table_id = be32toh(payload->table_id);
  payload->nh_sw_if_index = be32toh(payload->nh_sw_if_index);
}

static inline void vapi_msg_gpe_add_del_native_fwd_rpath_hton(vapi_msg_gpe_add_del_native_fwd_rpath *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_native_fwd_rpath'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gpe_add_del_native_fwd_rpath_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_add_del_native_fwd_rpath_ntoh(vapi_msg_gpe_add_del_native_fwd_rpath *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_native_fwd_rpath'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gpe_add_del_native_fwd_rpath_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_add_del_native_fwd_rpath_msg_size(vapi_msg_gpe_add_del_native_fwd_rpath *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gpe_add_del_native_fwd_rpath* vapi_alloc_gpe_add_del_native_fwd_rpath(struct vapi_ctx_s *ctx)
{
  vapi_msg_gpe_add_del_native_fwd_rpath *msg = NULL;
  const size_t size = sizeof(vapi_msg_gpe_add_del_native_fwd_rpath);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gpe_add_del_native_fwd_rpath*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gpe_add_del_native_fwd_rpath);

  return msg;
}

static inline vapi_error_e vapi_gpe_add_del_native_fwd_rpath(struct vapi_ctx_s *ctx,
  vapi_msg_gpe_add_del_native_fwd_rpath *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gpe_add_del_native_fwd_rpath_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_gpe_add_del_native_fwd_rpath_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_gpe_add_del_native_fwd_rpath_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gpe_add_del_native_fwd_rpath()
{
  static const char name[] = "gpe_add_del_native_fwd_rpath";
  static const char name_with_crc[] = "gpe_add_del_native_fwd_rpath_bfc42b8f";
  static vapi_message_desc_t __vapi_metadata_gpe_add_del_native_fwd_rpath = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gpe_add_del_native_fwd_rpath, payload),
    sizeof(vapi_msg_gpe_add_del_native_fwd_rpath),
    (generic_swap_fn_t)vapi_msg_gpe_add_del_native_fwd_rpath_hton,
    (generic_swap_fn_t)vapi_msg_gpe_add_del_native_fwd_rpath_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_add_del_native_fwd_rpath = vapi_register_msg(&__vapi_metadata_gpe_add_del_native_fwd_rpath);
  VAPI_DBG("Assigned msg id %d to gpe_add_del_native_fwd_rpath", vapi_msg_id_gpe_add_del_native_fwd_rpath);
}
#endif

#ifndef defined_vapi_msg_gpe_native_fwd_rpaths_get_reply
#define defined_vapi_msg_gpe_native_fwd_rpaths_get_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u32 count;
  vapi_type_gpe_native_fwd_rpath entries[0]; 
} vapi_payload_gpe_native_fwd_rpaths_get_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gpe_native_fwd_rpaths_get_reply payload;
} vapi_msg_gpe_native_fwd_rpaths_get_reply;

static inline void vapi_msg_gpe_native_fwd_rpaths_get_reply_payload_hton(vapi_payload_gpe_native_fwd_rpaths_get_reply *payload)
{
  payload->retval = htobe32(payload->retval);
  payload->count = htobe32(payload->count);
  do { unsigned i; for (i = 0; i < be32toh(payload->count); ++i) { vapi_type_gpe_native_fwd_rpath_hton(&payload->entries[i]); } } while(0);
}

static inline void vapi_msg_gpe_native_fwd_rpaths_get_reply_payload_ntoh(vapi_payload_gpe_native_fwd_rpaths_get_reply *payload)
{
  payload->retval = be32toh(payload->retval);
  payload->count = be32toh(payload->count);
  do { unsigned i; for (i = 0; i < payload->count; ++i) { vapi_type_gpe_native_fwd_rpath_ntoh(&payload->entries[i]); } } while(0);
}

static inline void vapi_msg_gpe_native_fwd_rpaths_get_reply_hton(vapi_msg_gpe_native_fwd_rpaths_get_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_native_fwd_rpaths_get_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gpe_native_fwd_rpaths_get_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_native_fwd_rpaths_get_reply_ntoh(vapi_msg_gpe_native_fwd_rpaths_get_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_native_fwd_rpaths_get_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gpe_native_fwd_rpaths_get_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_native_fwd_rpaths_get_reply_msg_size(vapi_msg_gpe_native_fwd_rpaths_get_reply *msg)
{
  return sizeof(*msg)+ msg->payload.count * sizeof(msg->payload.entries[0]);
}

static void __attribute__((constructor)) __vapi_constructor_gpe_native_fwd_rpaths_get_reply()
{
  static const char name[] = "gpe_native_fwd_rpaths_get_reply";
  static const char name_with_crc[] = "gpe_native_fwd_rpaths_get_reply_1e4536e3";
  static vapi_message_desc_t __vapi_metadata_gpe_native_fwd_rpaths_get_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gpe_native_fwd_rpaths_get_reply, payload),
    sizeof(vapi_msg_gpe_native_fwd_rpaths_get_reply),
    (generic_swap_fn_t)vapi_msg_gpe_native_fwd_rpaths_get_reply_hton,
    (generic_swap_fn_t)vapi_msg_gpe_native_fwd_rpaths_get_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_native_fwd_rpaths_get_reply = vapi_register_msg(&__vapi_metadata_gpe_native_fwd_rpaths_get_reply);
  VAPI_DBG("Assigned msg id %d to gpe_native_fwd_rpaths_get_reply", vapi_msg_id_gpe_native_fwd_rpaths_get_reply);
}

static inline void vapi_set_vapi_msg_gpe_native_fwd_rpaths_get_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gpe_native_fwd_rpaths_get_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gpe_native_fwd_rpaths_get_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gpe_native_fwd_rpaths_get
#define defined_vapi_msg_gpe_native_fwd_rpaths_get
typedef struct __attribute__ ((__packed__)) {
  u8 is_ip4; 
} vapi_payload_gpe_native_fwd_rpaths_get;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gpe_native_fwd_rpaths_get payload;
} vapi_msg_gpe_native_fwd_rpaths_get;

static inline void vapi_msg_gpe_native_fwd_rpaths_get_payload_hton(vapi_payload_gpe_native_fwd_rpaths_get *payload)
{

}

static inline void vapi_msg_gpe_native_fwd_rpaths_get_payload_ntoh(vapi_payload_gpe_native_fwd_rpaths_get *payload)
{

}

static inline void vapi_msg_gpe_native_fwd_rpaths_get_hton(vapi_msg_gpe_native_fwd_rpaths_get *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_native_fwd_rpaths_get'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gpe_native_fwd_rpaths_get_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_native_fwd_rpaths_get_ntoh(vapi_msg_gpe_native_fwd_rpaths_get *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_native_fwd_rpaths_get'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gpe_native_fwd_rpaths_get_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_native_fwd_rpaths_get_msg_size(vapi_msg_gpe_native_fwd_rpaths_get *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gpe_native_fwd_rpaths_get* vapi_alloc_gpe_native_fwd_rpaths_get(struct vapi_ctx_s *ctx)
{
  vapi_msg_gpe_native_fwd_rpaths_get *msg = NULL;
  const size_t size = sizeof(vapi_msg_gpe_native_fwd_rpaths_get);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gpe_native_fwd_rpaths_get*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gpe_native_fwd_rpaths_get);

  return msg;
}

static inline vapi_error_e vapi_gpe_native_fwd_rpaths_get(struct vapi_ctx_s *ctx,
  vapi_msg_gpe_native_fwd_rpaths_get *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gpe_native_fwd_rpaths_get_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_gpe_native_fwd_rpaths_get_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_gpe_native_fwd_rpaths_get_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gpe_native_fwd_rpaths_get()
{
  static const char name[] = "gpe_native_fwd_rpaths_get";
  static const char name_with_crc[] = "gpe_native_fwd_rpaths_get_c5e0d91b";
  static vapi_message_desc_t __vapi_metadata_gpe_native_fwd_rpaths_get = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gpe_native_fwd_rpaths_get, payload),
    sizeof(vapi_msg_gpe_native_fwd_rpaths_get),
    (generic_swap_fn_t)vapi_msg_gpe_native_fwd_rpaths_get_hton,
    (generic_swap_fn_t)vapi_msg_gpe_native_fwd_rpaths_get_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_native_fwd_rpaths_get = vapi_register_msg(&__vapi_metadata_gpe_native_fwd_rpaths_get);
  VAPI_DBG("Assigned msg id %d to gpe_native_fwd_rpaths_get", vapi_msg_id_gpe_native_fwd_rpaths_get);
}
#endif

#ifndef defined_vapi_msg_gpe_add_del_iface_reply
#define defined_vapi_msg_gpe_add_del_iface_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gpe_add_del_iface_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gpe_add_del_iface_reply payload;
} vapi_msg_gpe_add_del_iface_reply;

static inline void vapi_msg_gpe_add_del_iface_reply_payload_hton(vapi_payload_gpe_add_del_iface_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gpe_add_del_iface_reply_payload_ntoh(vapi_payload_gpe_add_del_iface_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gpe_add_del_iface_reply_hton(vapi_msg_gpe_add_del_iface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_iface_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gpe_add_del_iface_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_add_del_iface_reply_ntoh(vapi_msg_gpe_add_del_iface_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_iface_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gpe_add_del_iface_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_add_del_iface_reply_msg_size(vapi_msg_gpe_add_del_iface_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gpe_add_del_iface_reply()
{
  static const char name[] = "gpe_add_del_iface_reply";
  static const char name_with_crc[] = "gpe_add_del_iface_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gpe_add_del_iface_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gpe_add_del_iface_reply, payload),
    sizeof(vapi_msg_gpe_add_del_iface_reply),
    (generic_swap_fn_t)vapi_msg_gpe_add_del_iface_reply_hton,
    (generic_swap_fn_t)vapi_msg_gpe_add_del_iface_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_add_del_iface_reply = vapi_register_msg(&__vapi_metadata_gpe_add_del_iface_reply);
  VAPI_DBG("Assigned msg id %d to gpe_add_del_iface_reply", vapi_msg_id_gpe_add_del_iface_reply);
}

static inline void vapi_set_vapi_msg_gpe_add_del_iface_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gpe_add_del_iface_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gpe_add_del_iface_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gpe_enable_disable_reply
#define defined_vapi_msg_gpe_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_gpe_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gpe_enable_disable_reply payload;
} vapi_msg_gpe_enable_disable_reply;

static inline void vapi_msg_gpe_enable_disable_reply_payload_hton(vapi_payload_gpe_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gpe_enable_disable_reply_payload_ntoh(vapi_payload_gpe_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gpe_enable_disable_reply_hton(vapi_msg_gpe_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gpe_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_enable_disable_reply_ntoh(vapi_msg_gpe_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gpe_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_enable_disable_reply_msg_size(vapi_msg_gpe_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gpe_enable_disable_reply()
{
  static const char name[] = "gpe_enable_disable_reply";
  static const char name_with_crc[] = "gpe_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_gpe_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gpe_enable_disable_reply, payload),
    sizeof(vapi_msg_gpe_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_gpe_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_gpe_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_enable_disable_reply = vapi_register_msg(&__vapi_metadata_gpe_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to gpe_enable_disable_reply", vapi_msg_id_gpe_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_gpe_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gpe_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gpe_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gpe_enable_disable
#define defined_vapi_msg_gpe_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u8 is_en; 
} vapi_payload_gpe_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gpe_enable_disable payload;
} vapi_msg_gpe_enable_disable;

static inline void vapi_msg_gpe_enable_disable_payload_hton(vapi_payload_gpe_enable_disable *payload)
{

}

static inline void vapi_msg_gpe_enable_disable_payload_ntoh(vapi_payload_gpe_enable_disable *payload)
{

}

static inline void vapi_msg_gpe_enable_disable_hton(vapi_msg_gpe_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gpe_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_enable_disable_ntoh(vapi_msg_gpe_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gpe_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_enable_disable_msg_size(vapi_msg_gpe_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gpe_enable_disable* vapi_alloc_gpe_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_gpe_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_gpe_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gpe_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gpe_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_gpe_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_gpe_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gpe_enable_disable_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_gpe_enable_disable_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_gpe_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gpe_enable_disable()
{
  static const char name[] = "gpe_enable_disable";
  static const char name_with_crc[] = "gpe_enable_disable_eb0e943b";
  static vapi_message_desc_t __vapi_metadata_gpe_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gpe_enable_disable, payload),
    sizeof(vapi_msg_gpe_enable_disable),
    (generic_swap_fn_t)vapi_msg_gpe_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_gpe_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_enable_disable = vapi_register_msg(&__vapi_metadata_gpe_enable_disable);
  VAPI_DBG("Assigned msg id %d to gpe_enable_disable", vapi_msg_id_gpe_enable_disable);
}
#endif

#ifndef defined_vapi_msg_gpe_fwd_entries_get
#define defined_vapi_msg_gpe_fwd_entries_get
typedef struct __attribute__ ((__packed__)) {
  u32 vni; 
} vapi_payload_gpe_fwd_entries_get;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gpe_fwd_entries_get payload;
} vapi_msg_gpe_fwd_entries_get;

static inline void vapi_msg_gpe_fwd_entries_get_payload_hton(vapi_payload_gpe_fwd_entries_get *payload)
{
  payload->vni = htobe32(payload->vni);
}

static inline void vapi_msg_gpe_fwd_entries_get_payload_ntoh(vapi_payload_gpe_fwd_entries_get *payload)
{
  payload->vni = be32toh(payload->vni);
}

static inline void vapi_msg_gpe_fwd_entries_get_hton(vapi_msg_gpe_fwd_entries_get *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entries_get'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gpe_fwd_entries_get_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_fwd_entries_get_ntoh(vapi_msg_gpe_fwd_entries_get *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entries_get'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gpe_fwd_entries_get_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_fwd_entries_get_msg_size(vapi_msg_gpe_fwd_entries_get *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gpe_fwd_entries_get* vapi_alloc_gpe_fwd_entries_get(struct vapi_ctx_s *ctx)
{
  vapi_msg_gpe_fwd_entries_get *msg = NULL;
  const size_t size = sizeof(vapi_msg_gpe_fwd_entries_get);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gpe_fwd_entries_get*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gpe_fwd_entries_get);

  return msg;
}

static inline vapi_error_e vapi_gpe_fwd_entries_get(struct vapi_ctx_s *ctx,
  vapi_msg_gpe_fwd_entries_get *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gpe_fwd_entries_get_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_gpe_fwd_entries_get_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_gpe_fwd_entries_get_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gpe_fwd_entries_get()
{
  static const char name[] = "gpe_fwd_entries_get";
  static const char name_with_crc[] = "gpe_fwd_entries_get_8d1f2fe9";
  static vapi_message_desc_t __vapi_metadata_gpe_fwd_entries_get = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gpe_fwd_entries_get, payload),
    sizeof(vapi_msg_gpe_fwd_entries_get),
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entries_get_hton,
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entries_get_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_fwd_entries_get = vapi_register_msg(&__vapi_metadata_gpe_fwd_entries_get);
  VAPI_DBG("Assigned msg id %d to gpe_fwd_entries_get", vapi_msg_id_gpe_fwd_entries_get);
}
#endif

#ifndef defined_vapi_msg_gpe_get_encap_mode_reply
#define defined_vapi_msg_gpe_get_encap_mode_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval;
  u8 encap_mode; 
} vapi_payload_gpe_get_encap_mode_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_gpe_get_encap_mode_reply payload;
} vapi_msg_gpe_get_encap_mode_reply;

static inline void vapi_msg_gpe_get_encap_mode_reply_payload_hton(vapi_payload_gpe_get_encap_mode_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_gpe_get_encap_mode_reply_payload_ntoh(vapi_payload_gpe_get_encap_mode_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_gpe_get_encap_mode_reply_hton(vapi_msg_gpe_get_encap_mode_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_get_encap_mode_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_gpe_get_encap_mode_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_get_encap_mode_reply_ntoh(vapi_msg_gpe_get_encap_mode_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_get_encap_mode_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_gpe_get_encap_mode_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_get_encap_mode_reply_msg_size(vapi_msg_gpe_get_encap_mode_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_gpe_get_encap_mode_reply()
{
  static const char name[] = "gpe_get_encap_mode_reply";
  static const char name_with_crc[] = "gpe_get_encap_mode_reply_36e3f7ca";
  static vapi_message_desc_t __vapi_metadata_gpe_get_encap_mode_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_gpe_get_encap_mode_reply, payload),
    sizeof(vapi_msg_gpe_get_encap_mode_reply),
    (generic_swap_fn_t)vapi_msg_gpe_get_encap_mode_reply_hton,
    (generic_swap_fn_t)vapi_msg_gpe_get_encap_mode_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_get_encap_mode_reply = vapi_register_msg(&__vapi_metadata_gpe_get_encap_mode_reply);
  VAPI_DBG("Assigned msg id %d to gpe_get_encap_mode_reply", vapi_msg_id_gpe_get_encap_mode_reply);
}

static inline void vapi_set_vapi_msg_gpe_get_encap_mode_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_gpe_get_encap_mode_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_gpe_get_encap_mode_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_gpe_get_encap_mode
#define defined_vapi_msg_gpe_get_encap_mode
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_gpe_get_encap_mode;

static inline void vapi_msg_gpe_get_encap_mode_hton(vapi_msg_gpe_get_encap_mode *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_get_encap_mode'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_gpe_get_encap_mode_ntoh(vapi_msg_gpe_get_encap_mode *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_get_encap_mode'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_gpe_get_encap_mode_msg_size(vapi_msg_gpe_get_encap_mode *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gpe_get_encap_mode* vapi_alloc_gpe_get_encap_mode(struct vapi_ctx_s *ctx)
{
  vapi_msg_gpe_get_encap_mode *msg = NULL;
  const size_t size = sizeof(vapi_msg_gpe_get_encap_mode);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gpe_get_encap_mode*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gpe_get_encap_mode);

  return msg;
}

static inline vapi_error_e vapi_gpe_get_encap_mode(struct vapi_ctx_s *ctx,
  vapi_msg_gpe_get_encap_mode *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gpe_get_encap_mode_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_gpe_get_encap_mode_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_gpe_get_encap_mode_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gpe_get_encap_mode()
{
  static const char name[] = "gpe_get_encap_mode";
  static const char name_with_crc[] = "gpe_get_encap_mode_51077d14";
  static vapi_message_desc_t __vapi_metadata_gpe_get_encap_mode = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_gpe_get_encap_mode),
    (generic_swap_fn_t)vapi_msg_gpe_get_encap_mode_hton,
    (generic_swap_fn_t)vapi_msg_gpe_get_encap_mode_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_get_encap_mode = vapi_register_msg(&__vapi_metadata_gpe_get_encap_mode);
  VAPI_DBG("Assigned msg id %d to gpe_get_encap_mode", vapi_msg_id_gpe_get_encap_mode);
}
#endif

#ifndef defined_vapi_msg_gpe_add_del_iface
#define defined_vapi_msg_gpe_add_del_iface
typedef struct __attribute__ ((__packed__)) {
  u8 is_add;
  u8 is_l2;
  u32 dp_table;
  u32 vni; 
} vapi_payload_gpe_add_del_iface;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gpe_add_del_iface payload;
} vapi_msg_gpe_add_del_iface;

static inline void vapi_msg_gpe_add_del_iface_payload_hton(vapi_payload_gpe_add_del_iface *payload)
{
  payload->dp_table = htobe32(payload->dp_table);
  payload->vni = htobe32(payload->vni);
}

static inline void vapi_msg_gpe_add_del_iface_payload_ntoh(vapi_payload_gpe_add_del_iface *payload)
{
  payload->dp_table = be32toh(payload->dp_table);
  payload->vni = be32toh(payload->vni);
}

static inline void vapi_msg_gpe_add_del_iface_hton(vapi_msg_gpe_add_del_iface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_iface'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gpe_add_del_iface_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_add_del_iface_ntoh(vapi_msg_gpe_add_del_iface *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_add_del_iface'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gpe_add_del_iface_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_add_del_iface_msg_size(vapi_msg_gpe_add_del_iface *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gpe_add_del_iface* vapi_alloc_gpe_add_del_iface(struct vapi_ctx_s *ctx)
{
  vapi_msg_gpe_add_del_iface *msg = NULL;
  const size_t size = sizeof(vapi_msg_gpe_add_del_iface);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gpe_add_del_iface*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gpe_add_del_iface);

  return msg;
}

static inline vapi_error_e vapi_gpe_add_del_iface(struct vapi_ctx_s *ctx,
  vapi_msg_gpe_add_del_iface *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gpe_add_del_iface_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_gpe_add_del_iface_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_gpe_add_del_iface_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gpe_add_del_iface()
{
  static const char name[] = "gpe_add_del_iface";
  static const char name_with_crc[] = "gpe_add_del_iface_42d6b533";
  static vapi_message_desc_t __vapi_metadata_gpe_add_del_iface = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gpe_add_del_iface, payload),
    sizeof(vapi_msg_gpe_add_del_iface),
    (generic_swap_fn_t)vapi_msg_gpe_add_del_iface_hton,
    (generic_swap_fn_t)vapi_msg_gpe_add_del_iface_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_add_del_iface = vapi_register_msg(&__vapi_metadata_gpe_add_del_iface);
  VAPI_DBG("Assigned msg id %d to gpe_add_del_iface", vapi_msg_id_gpe_add_del_iface);
}
#endif

#ifndef defined_vapi_msg_gpe_fwd_entry_path_dump
#define defined_vapi_msg_gpe_fwd_entry_path_dump
typedef struct __attribute__ ((__packed__)) {
  u32 fwd_entry_index; 
} vapi_payload_gpe_fwd_entry_path_dump;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_gpe_fwd_entry_path_dump payload;
} vapi_msg_gpe_fwd_entry_path_dump;

static inline void vapi_msg_gpe_fwd_entry_path_dump_payload_hton(vapi_payload_gpe_fwd_entry_path_dump *payload)
{
  payload->fwd_entry_index = htobe32(payload->fwd_entry_index);
}

static inline void vapi_msg_gpe_fwd_entry_path_dump_payload_ntoh(vapi_payload_gpe_fwd_entry_path_dump *payload)
{
  payload->fwd_entry_index = be32toh(payload->fwd_entry_index);
}

static inline void vapi_msg_gpe_fwd_entry_path_dump_hton(vapi_msg_gpe_fwd_entry_path_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entry_path_dump'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_gpe_fwd_entry_path_dump_payload_hton(&msg->payload);
}

static inline void vapi_msg_gpe_fwd_entry_path_dump_ntoh(vapi_msg_gpe_fwd_entry_path_dump *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entry_path_dump'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_gpe_fwd_entry_path_dump_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_gpe_fwd_entry_path_dump_msg_size(vapi_msg_gpe_fwd_entry_path_dump *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gpe_fwd_entry_path_dump* vapi_alloc_gpe_fwd_entry_path_dump(struct vapi_ctx_s *ctx)
{
  vapi_msg_gpe_fwd_entry_path_dump *msg = NULL;
  const size_t size = sizeof(vapi_msg_gpe_fwd_entry_path_dump);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gpe_fwd_entry_path_dump*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gpe_fwd_entry_path_dump);

  return msg;
}

static inline vapi_error_e vapi_gpe_fwd_entry_path_dump(struct vapi_ctx_s *ctx,
  vapi_msg_gpe_fwd_entry_path_dump *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gpe_fwd_entry_path_details *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_gpe_fwd_entry_path_dump_hton(msg);
  if (VAPI_OK == (rv = vapi_send_with_control_ping (ctx, msg, req_context))) {
    vapi_store_request(ctx, req_context, true, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_gpe_fwd_entry_path_dump_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gpe_fwd_entry_path_dump()
{
  static const char name[] = "gpe_fwd_entry_path_dump";
  static const char name_with_crc[] = "gpe_fwd_entry_path_dump_39bce980";
  static vapi_message_desc_t __vapi_metadata_gpe_fwd_entry_path_dump = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_gpe_fwd_entry_path_dump, payload),
    sizeof(vapi_msg_gpe_fwd_entry_path_dump),
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entry_path_dump_hton,
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entry_path_dump_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_fwd_entry_path_dump = vapi_register_msg(&__vapi_metadata_gpe_fwd_entry_path_dump);
  VAPI_DBG("Assigned msg id %d to gpe_fwd_entry_path_dump", vapi_msg_id_gpe_fwd_entry_path_dump);
}
#endif

#ifndef defined_vapi_msg_gpe_fwd_entry_vnis_get
#define defined_vapi_msg_gpe_fwd_entry_vnis_get
typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
} vapi_msg_gpe_fwd_entry_vnis_get;

static inline void vapi_msg_gpe_fwd_entry_vnis_get_hton(vapi_msg_gpe_fwd_entry_vnis_get *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entry_vnis_get'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);

}

static inline void vapi_msg_gpe_fwd_entry_vnis_get_ntoh(vapi_msg_gpe_fwd_entry_vnis_get *msg)
{
  VAPI_DBG("Swapping `vapi_msg_gpe_fwd_entry_vnis_get'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);

}

static inline uword vapi_calc_gpe_fwd_entry_vnis_get_msg_size(vapi_msg_gpe_fwd_entry_vnis_get *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_gpe_fwd_entry_vnis_get* vapi_alloc_gpe_fwd_entry_vnis_get(struct vapi_ctx_s *ctx)
{
  vapi_msg_gpe_fwd_entry_vnis_get *msg = NULL;
  const size_t size = sizeof(vapi_msg_gpe_fwd_entry_vnis_get);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_gpe_fwd_entry_vnis_get*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_gpe_fwd_entry_vnis_get);

  return msg;
}

static inline vapi_error_e vapi_gpe_fwd_entry_vnis_get(struct vapi_ctx_s *ctx,
  vapi_msg_gpe_fwd_entry_vnis_get *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_gpe_fwd_entry_vnis_get_reply *reply),
  void *callback_ctx)
{
  if (!msg || !callback) {
    return VAPI_EINVAL;
  }
  if (vapi_is_nonblocking(ctx) && vapi_requests_full(ctx)) {
    return VAPI_EAGAIN;
  }
  vapi_error_e rv;
  if (VAPI_OK != (rv = vapi_producer_lock (ctx))) {
    return rv;
  }
  u32 req_context = vapi_gen_req_context(ctx);
  msg->header.context = req_context;
  vapi_msg_gpe_fwd_entry_vnis_get_hton(msg);
  if (VAPI_OK == (rv = vapi_send (ctx, msg))) {
    vapi_store_request(ctx, req_context, false, (vapi_cb_t)callback, callback_ctx);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
    if (vapi_is_nonblocking(ctx)) {
      rv = VAPI_OK;
    } else {
      rv = vapi_dispatch(ctx);
    }
  } else {
    vapi_msg_gpe_fwd_entry_vnis_get_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_gpe_fwd_entry_vnis_get()
{
  static const char name[] = "gpe_fwd_entry_vnis_get";
  static const char name_with_crc[] = "gpe_fwd_entry_vnis_get_51077d14";
  static vapi_message_desc_t __vapi_metadata_gpe_fwd_entry_vnis_get = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    VAPI_INVALID_MSG_ID,
    sizeof(vapi_msg_gpe_fwd_entry_vnis_get),
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entry_vnis_get_hton,
    (generic_swap_fn_t)vapi_msg_gpe_fwd_entry_vnis_get_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_gpe_fwd_entry_vnis_get = vapi_register_msg(&__vapi_metadata_gpe_fwd_entry_vnis_get);
  VAPI_DBG("Assigned msg id %d to gpe_fwd_entry_vnis_get", vapi_msg_id_gpe_fwd_entry_vnis_get);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
