#ifndef __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_tcp_tcp_api_json
#define __included__src_vpp_build_root_build_vpp_debug_native_vpp_vnet_tcp_tcp_api_json

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

extern vapi_msg_id_t vapi_msg_id_tcp_configure_src_addresses;
extern vapi_msg_id_t vapi_msg_id_tcp_configure_src_addresses_reply;

#define DEFINE_VAPI_MSG_IDS_TCP_API_JSON\
  vapi_msg_id_t vapi_msg_id_tcp_configure_src_addresses;\
  vapi_msg_id_t vapi_msg_id_tcp_configure_src_addresses_reply;


#ifndef defined_vapi_msg_tcp_configure_src_addresses_reply
#define defined_vapi_msg_tcp_configure_src_addresses_reply
typedef struct __attribute__ ((__packed__)) {
  i32 retval; 
} vapi_payload_tcp_configure_src_addresses_reply;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header1_t header;
  vapi_payload_tcp_configure_src_addresses_reply payload;
} vapi_msg_tcp_configure_src_addresses_reply;

static inline void vapi_msg_tcp_configure_src_addresses_reply_payload_hton(vapi_payload_tcp_configure_src_addresses_reply *payload)
{
  payload->retval = htobe32(payload->retval);
}

static inline void vapi_msg_tcp_configure_src_addresses_reply_payload_ntoh(vapi_payload_tcp_configure_src_addresses_reply *payload)
{
  payload->retval = be32toh(payload->retval);
}

static inline void vapi_msg_tcp_configure_src_addresses_reply_hton(vapi_msg_tcp_configure_src_addresses_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tcp_configure_src_addresses_reply'@%p to big endian", msg);
  vapi_type_msg_header1_t_hton(&msg->header);
  vapi_msg_tcp_configure_src_addresses_reply_payload_hton(&msg->payload);
}

static inline void vapi_msg_tcp_configure_src_addresses_reply_ntoh(vapi_msg_tcp_configure_src_addresses_reply *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tcp_configure_src_addresses_reply'@%p to host byte order", msg);
  vapi_type_msg_header1_t_ntoh(&msg->header);
  vapi_msg_tcp_configure_src_addresses_reply_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_tcp_configure_src_addresses_reply_msg_size(vapi_msg_tcp_configure_src_addresses_reply *msg)
{
  return sizeof(*msg);
}

static void __attribute__((constructor)) __vapi_constructor_tcp_configure_src_addresses_reply()
{
  static const char name[] = "tcp_configure_src_addresses_reply";
  static const char name_with_crc[] = "tcp_configure_src_addresses_reply_e8d4e804";
  static vapi_message_desc_t __vapi_metadata_tcp_configure_src_addresses_reply = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header1_t, context),
    offsetof(vapi_msg_tcp_configure_src_addresses_reply, payload),
    sizeof(vapi_msg_tcp_configure_src_addresses_reply),
    (generic_swap_fn_t)vapi_msg_tcp_configure_src_addresses_reply_hton,
    (generic_swap_fn_t)vapi_msg_tcp_configure_src_addresses_reply_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_tcp_configure_src_addresses_reply = vapi_register_msg(&__vapi_metadata_tcp_configure_src_addresses_reply);
  VAPI_DBG("Assigned msg id %d to tcp_configure_src_addresses_reply", vapi_msg_id_tcp_configure_src_addresses_reply);
}

static inline void vapi_set_vapi_msg_tcp_configure_src_addresses_reply_event_cb (
  struct vapi_ctx_s *ctx, 
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx, void *callback_ctx, vapi_payload_tcp_configure_src_addresses_reply *payload),
  void *callback_ctx)
{
  vapi_set_event_cb(ctx, vapi_msg_id_tcp_configure_src_addresses_reply, (vapi_event_cb)callback, callback_ctx);
};
#endif

#ifndef defined_vapi_msg_tcp_configure_src_addresses
#define defined_vapi_msg_tcp_configure_src_addresses
typedef struct __attribute__ ((__packed__)) {
  u8 is_ipv6;
  u32 vrf_id;
  u8 first_address[16];
  u8 last_address[16]; 
} vapi_payload_tcp_configure_src_addresses;

typedef struct __attribute__ ((__packed__)) {
  vapi_type_msg_header2_t header;
  vapi_payload_tcp_configure_src_addresses payload;
} vapi_msg_tcp_configure_src_addresses;

static inline void vapi_msg_tcp_configure_src_addresses_payload_hton(vapi_payload_tcp_configure_src_addresses *payload)
{
  payload->vrf_id = htobe32(payload->vrf_id);
}

static inline void vapi_msg_tcp_configure_src_addresses_payload_ntoh(vapi_payload_tcp_configure_src_addresses *payload)
{
  payload->vrf_id = be32toh(payload->vrf_id);
}

static inline void vapi_msg_tcp_configure_src_addresses_hton(vapi_msg_tcp_configure_src_addresses *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tcp_configure_src_addresses'@%p to big endian", msg);
  vapi_type_msg_header2_t_hton(&msg->header);
  vapi_msg_tcp_configure_src_addresses_payload_hton(&msg->payload);
}

static inline void vapi_msg_tcp_configure_src_addresses_ntoh(vapi_msg_tcp_configure_src_addresses *msg)
{
  VAPI_DBG("Swapping `vapi_msg_tcp_configure_src_addresses'@%p to host byte order", msg);
  vapi_type_msg_header2_t_ntoh(&msg->header);
  vapi_msg_tcp_configure_src_addresses_payload_ntoh(&msg->payload);
}

static inline uword vapi_calc_tcp_configure_src_addresses_msg_size(vapi_msg_tcp_configure_src_addresses *msg)
{
  return sizeof(*msg);
}

static inline vapi_msg_tcp_configure_src_addresses* vapi_alloc_tcp_configure_src_addresses(struct vapi_ctx_s *ctx)
{
  vapi_msg_tcp_configure_src_addresses *msg = NULL;
  const size_t size = sizeof(vapi_msg_tcp_configure_src_addresses);
  /* cast here required to play nicely with C++ world ... */
  msg = (vapi_msg_tcp_configure_src_addresses*)vapi_msg_alloc(ctx, size);
  if (!msg) {
    return NULL;
  }
  msg->header.client_index = vapi_get_client_index(ctx);
  msg->header.context = 0;
  msg->header._vl_msg_id = vapi_lookup_vl_msg_id(ctx, vapi_msg_id_tcp_configure_src_addresses);

  return msg;
}

static inline vapi_error_e vapi_tcp_configure_src_addresses(struct vapi_ctx_s *ctx,
  vapi_msg_tcp_configure_src_addresses *msg,
  vapi_error_e (*callback)(struct vapi_ctx_s *ctx,
                           void *callback_ctx,
                           vapi_error_e rv,
                           bool is_last,
                           vapi_payload_tcp_configure_src_addresses_reply *reply),
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
  vapi_msg_tcp_configure_src_addresses_hton(msg);
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
    vapi_msg_tcp_configure_src_addresses_ntoh(msg);
    if (VAPI_OK != vapi_producer_unlock (ctx)) {
      abort (); /* this really shouldn't happen */
    }
  }
  return rv;
}


static void __attribute__((constructor)) __vapi_constructor_tcp_configure_src_addresses()
{
  static const char name[] = "tcp_configure_src_addresses";
  static const char name_with_crc[] = "tcp_configure_src_addresses_8c1f804f";
  static vapi_message_desc_t __vapi_metadata_tcp_configure_src_addresses = {
    name,
    sizeof(name) - 1,
    name_with_crc,
    sizeof(name_with_crc) - 1,
    true,
    offsetof(vapi_type_msg_header2_t, context),
    offsetof(vapi_msg_tcp_configure_src_addresses, payload),
    sizeof(vapi_msg_tcp_configure_src_addresses),
    (generic_swap_fn_t)vapi_msg_tcp_configure_src_addresses_hton,
    (generic_swap_fn_t)vapi_msg_tcp_configure_src_addresses_ntoh,
    VAPI_INVALID_MSG_ID,
  };

  vapi_msg_id_tcp_configure_src_addresses = vapi_register_msg(&__vapi_metadata_tcp_configure_src_addresses);
  VAPI_DBG("Assigned msg id %d to tcp_configure_src_addresses", vapi_msg_id_tcp_configure_src_addresses);
}
#endif


#ifdef __cplusplus
}
#endif

#endif
