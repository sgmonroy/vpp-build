#ifndef __included__src_vpp_build_root_build_vpp_native_vpp_plugins_ioam_export_ioam_export_api_json
#define __included__src_vpp_build_root_build_vpp_native_vpp_plugins_ioam_export_ioam_export_api_json

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

extern vapi_msg_id_t vapi_msg_id_ioam_export_ip6_enable_disable;
extern vapi_msg_id_t vapi_msg_id_ioam_export_ip6_enable_disable_reply;

#define DEFINE_VAPI_MSG_IDS_IOAM_EXPORT_API_JSON\
  vapi_msg_id_t vapi_msg_id_ioam_export_ip6_enable_disable;\
  vapi_msg_id_t vapi_msg_id_ioam_export_ip6_enable_disable_reply;


#ifndef defined_vapi_msg_ioam_export_ip6_enable_disable_reply
#define defined_vapi_msg_ioam_export_ip6_enable_disable_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_ioam_export_ip6_enable_disable_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_ioam_export_ip6_enable_disable_reply payload;
} vapi_msg_ioam_export_ip6_enable_disable_reply;

static inline void vapi_msg_ioam_export_ip6_enable_disable_reply_payload_hton(vapi_payload_ioam_export_ip6_enable_disable_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_ioam_export_ip6_enable_disable_reply_payload_ntoh(vapi_payload_ioam_export_ip6_enable_disable_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_ioam_export_ip6_enable_disable_reply_hton(vapi_msg_ioam_export_ip6_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_export_ip6_enable_disable_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_ioam_export_ip6_enable_disable_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_ioam_export_ip6_enable_disable_reply_ntoh(vapi_msg_ioam_export_ip6_enable_disable_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_export_ip6_enable_disable_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_ioam_export_ip6_enable_disable_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ioam_export_ip6_enable_disable_reply_msg_size(vapi_msg_ioam_export_ip6_enable_disable_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_ioam_export_ip6_enable_disable_reply()
{
  static const char name[] = "ioam_export_ip6_enable_disable_reply";
  static const char name_with_crc[] = "ioam_export_ip6_enable_disable_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_ioam_export_ip6_enable_disable_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_ioam_export_ip6_enable_disable_reply, payload),
    sizeof(vapi_msg_ioam_export_ip6_enable_disable_reply),
    (generic_swap_fn_t)vapi_msg_ioam_export_ip6_enable_disable_reply_hton,
    (generic_swap_fn_t)vapi_msg_ioam_export_ip6_enable_disable_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ioam_export_ip6_enable_disable_reply = vapi_register_msg(&__vapi_metadata_ioam_export_ip6_enable_disable_reply);
  VAPI_DBG("Assigned msg id %d to ioam_export_ip6_enable_disable_reply", vapi_msg_id_ioam_export_ip6_enable_disable_reply);
}

static inline void vapi_set_vapi_msg_ioam_export_ip6_enable_disable_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_ioam_export_ip6_enable_disable_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_ioam_export_ip6_enable_disable_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_ioam_export_ip6_enable_disable
#define defined_vapi_msg_ioam_export_ip6_enable_disable
typedef struct __attribute__ ((__packed__)) {
  u8 is_disable;
  u8 collector_address[4];
  u8 src_address[4]; 
} vapi_payload_ioam_export_ip6_enable_disable;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_ioam_export_ip6_enable_disable payload;
} vapi_msg_ioam_export_ip6_enable_disable;

static inline void vapi_msg_ioam_export_ip6_enable_disable_payload_hton(vapi_payload_ioam_export_ip6_enable_disable *payload)
{

}

static inline void vapi_msg_ioam_export_ip6_enable_disable_payload_ntoh(vapi_payload_ioam_export_ip6_enable_disable *payload)
{

}

static inline void vapi_msg_ioam_export_ip6_enable_disable_hton(vapi_msg_ioam_export_ip6_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_export_ip6_enable_disable'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_ioam_export_ip6_enable_disable_payload_hton(&msg->payload);
}

static inline void vapi_msg_ioam_export_ip6_enable_disable_ntoh(vapi_msg_ioam_export_ip6_enable_disable *msg)
{
  VAPI_DBG("Swapping `vapi_msg_ioam_export_ip6_enable_disable'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_ioam_export_ip6_enable_disable_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_ioam_export_ip6_enable_disable_msg_size(vapi_msg_ioam_export_ip6_enable_disable *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_ioam_export_ip6_enable_disable* vapi_alloc_ioam_export_ip6_enable_disable(struct vapi_ctx_s *ctx)
{
  vapi_msg_ioam_export_ip6_enable_disable *msg = NULL;
  const size_t size = sizeof(vapi_msg_ioam_export_ip6_enable_disable);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_ioam_export_ip6_enable_disable*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_ioam_export_ip6_enable_disable);

  return msg;
}

static inline vapi_error_e vapi_ioam_export_ip6_enable_disable(struct vapi_ctx_s *ctx,
  vapi_msg_ioam_export_ip6_enable_disable *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_ioam_export_ip6_enable_disable_reply *reply),
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
  vapi_msg_ioam_export_ip6_enable_disable_hton(msg);
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
    vapi_msg_ioam_export_ip6_enable_disable_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_ioam_export_ip6_enable_disable()
{
  static const char name[] = "ioam_export_ip6_enable_disable";
  static const char name_with_crc[] = "ioam_export_ip6_enable_disable_148b82a4";
  static vapi_message_desc_t __vapi_metadata_ioam_export_ip6_enable_disable = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_ioam_export_ip6_enable_disable, payload),
    sizeof(vapi_msg_ioam_export_ip6_enable_disable),
    (generic_swap_fn_t)vapi_msg_ioam_export_ip6_enable_disable_hton,
    (generic_swap_fn_t)vapi_msg_ioam_export_ip6_enable_disable_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_ioam_export_ip6_enable_disable = vapi_register_msg(&__vapi_metadata_ioam_export_ip6_enable_disable);
  VAPI_DBG("Assigned msg id %d to ioam_export_ip6_enable_disable", vapi_msg_id_ioam_export_ip6_enable_disable);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
