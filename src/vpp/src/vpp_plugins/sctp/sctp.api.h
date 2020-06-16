/*
 * VLIB API definitions 2020-06-13 06:02:12
 * Input file: sctp.api
 * Automatically generated: please edit the input file NOT this file!
 */

#include <stdbool.h>
#if defined(vl_msg_id)||defined(vl_union_id) \
    || defined(vl_printfun) ||defined(vl_endianfun) \
    || defined(vl_api_version)||defined(vl_typedefs) \
    || defined(vl_msg_name)||defined(vl_msg_name_crc_list) \
    || defined(vl_api_version_tuple)
/* ok, something was selected */
#else
#warning no content included from sctp.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_SCTP_ADD_SRC_DST_CONNECTION, vl_api_sctp_add_src_dst_connection_t_handler)
vl_msg_id(VL_API_SCTP_ADD_SRC_DST_CONNECTION_REPLY, vl_api_sctp_add_src_dst_connection_reply_t_handler)
vl_msg_id(VL_API_SCTP_DEL_SRC_DST_CONNECTION, vl_api_sctp_del_src_dst_connection_t_handler)
vl_msg_id(VL_API_SCTP_DEL_SRC_DST_CONNECTION_REPLY, vl_api_sctp_del_src_dst_connection_reply_t_handler)
vl_msg_id(VL_API_SCTP_CONFIG, vl_api_sctp_config_t_handler)
vl_msg_id(VL_API_SCTP_CONFIG_REPLY, vl_api_sctp_config_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_sctp_add_src_dst_connection_t, 1)
vl_msg_name(vl_api_sctp_add_src_dst_connection_reply_t, 1)
vl_msg_name(vl_api_sctp_del_src_dst_connection_t, 1)
vl_msg_name(vl_api_sctp_del_src_dst_connection_reply_t, 1)
vl_msg_name(vl_api_sctp_config_t, 1)
vl_msg_name(vl_api_sctp_config_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_sctp \
_(VL_API_SCTP_ADD_SRC_DST_CONNECTION, sctp_add_src_dst_connection, 45c59b2f) \
_(VL_API_SCTP_ADD_SRC_DST_CONNECTION_REPLY, sctp_add_src_dst_connection_reply, e8d4e804) \
_(VL_API_SCTP_DEL_SRC_DST_CONNECTION, sctp_del_src_dst_connection, 45c59b2f) \
_(VL_API_SCTP_DEL_SRC_DST_CONNECTION_REPLY, sctp_del_src_dst_connection_reply, e8d4e804) \
_(VL_API_SCTP_CONFIG, sctp_config, 7617eced) \
_(VL_API_SCTP_CONFIG_REPLY, sctp_config_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_sctp_api
#define included_sctp_api
#ifndef _vl_api_defined_sctp_add_src_dst_connection
#define _vl_api_defined_sctp_add_src_dst_connection
typedef VL_API_PACKED(struct _vl_api_sctp_add_src_dst_connection {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ipv6;
    u32 vrf_id;
    u8 src_address[16];
    u8 dst_address[16];
}) vl_api_sctp_add_src_dst_connection_t;
#endif

#ifndef _vl_api_defined_sctp_add_src_dst_connection_reply
#define _vl_api_defined_sctp_add_src_dst_connection_reply
typedef VL_API_PACKED(struct _vl_api_sctp_add_src_dst_connection_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sctp_add_src_dst_connection_reply_t;
#endif

#ifndef _vl_api_defined_sctp_del_src_dst_connection
#define _vl_api_defined_sctp_del_src_dst_connection
typedef VL_API_PACKED(struct _vl_api_sctp_del_src_dst_connection {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ipv6;
    u32 vrf_id;
    u8 src_address[16];
    u8 dst_address[16];
}) vl_api_sctp_del_src_dst_connection_t;
#endif

#ifndef _vl_api_defined_sctp_del_src_dst_connection_reply
#define _vl_api_defined_sctp_del_src_dst_connection_reply
typedef VL_API_PACKED(struct _vl_api_sctp_del_src_dst_connection_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sctp_del_src_dst_connection_reply_t;
#endif

#ifndef _vl_api_defined_sctp_config
#define _vl_api_defined_sctp_config
typedef VL_API_PACKED(struct _vl_api_sctp_config {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 never_delay_sack;
    u8 never_bundle;
}) vl_api_sctp_config_t;
#endif

#ifndef _vl_api_defined_sctp_config_reply
#define _vl_api_defined_sctp_config_reply
typedef VL_API_PACKED(struct _vl_api_sctp_config_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_sctp_config_reply_t;
#endif


#endif
#endif

/****** Print functions *****/
#ifdef vl_printfun

#ifdef LP64
#define _uword_fmt "%lld"
#define _uword_cast (long long)
#else
#define _uword_fmt "%ld"
#define _uword_cast long
#endif

#ifndef _vl_api_defined_sctp_add_src_dst_connection_t_print
#define _vl_api_defined_sctp_add_src_dst_connection_t_print
static inline void *vl_api_sctp_add_src_dst_connection_t_print (vl_api_sctp_add_src_dst_connection_t *a,void *handle)
{
    vl_print(handle, "vl_api_sctp_add_src_dst_connection_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_sctp_add_src_dst_connection_reply_t_print
#define _vl_api_defined_sctp_add_src_dst_connection_reply_t_print
static inline void *vl_api_sctp_add_src_dst_connection_reply_t_print (vl_api_sctp_add_src_dst_connection_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sctp_add_src_dst_connection_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sctp_del_src_dst_connection_t_print
#define _vl_api_defined_sctp_del_src_dst_connection_t_print
static inline void *vl_api_sctp_del_src_dst_connection_t_print (vl_api_sctp_del_src_dst_connection_t *a,void *handle)
{
    vl_print(handle, "vl_api_sctp_del_src_dst_connection_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ipv6: %u\n", a->is_ipv6);
    vl_print(handle, "vrf_id: %u\n", a->vrf_id);
    return handle;
}

#endif

#ifndef _vl_api_defined_sctp_del_src_dst_connection_reply_t_print
#define _vl_api_defined_sctp_del_src_dst_connection_reply_t_print
static inline void *vl_api_sctp_del_src_dst_connection_reply_t_print (vl_api_sctp_del_src_dst_connection_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sctp_del_src_dst_connection_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_sctp_config_t_print
#define _vl_api_defined_sctp_config_t_print
static inline void *vl_api_sctp_config_t_print (vl_api_sctp_config_t *a,void *handle)
{
    vl_print(handle, "vl_api_sctp_config_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "never_delay_sack: %u\n", a->never_delay_sack);
    vl_print(handle, "never_bundle: %u\n", a->never_bundle);
    return handle;
}

#endif

#ifndef _vl_api_defined_sctp_config_reply_t_print
#define _vl_api_defined_sctp_config_reply_t_print
static inline void *vl_api_sctp_config_reply_t_print (vl_api_sctp_config_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_sctp_config_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif


#endif /* vl_printfun */

/****** Endian swap functions *****/
#ifdef vl_endianfun

#undef clib_net_to_host_uword
#ifdef LP64
#define clib_net_to_host_uword clib_net_to_host_u64
#else
#define clib_net_to_host_uword clib_net_to_host_u32
#endif

#ifndef _vl_api_defined_sctp_add_src_dst_connection_t_endian
#define _vl_api_defined_sctp_add_src_dst_connection_t_endian
static inline void vl_api_sctp_add_src_dst_connection_t_endian (vl_api_sctp_add_src_dst_connection_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_sctp_add_src_dst_connection_reply_t_endian
#define _vl_api_defined_sctp_add_src_dst_connection_reply_t_endian
static inline void vl_api_sctp_add_src_dst_connection_reply_t_endian (vl_api_sctp_add_src_dst_connection_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sctp_del_src_dst_connection_t_endian
#define _vl_api_defined_sctp_del_src_dst_connection_t_endian
static inline void vl_api_sctp_del_src_dst_connection_t_endian (vl_api_sctp_del_src_dst_connection_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ipv6 = a->is_ipv6 (no-op) */
    a->vrf_id = clib_net_to_host_u32(a->vrf_id);
}

#endif

#ifndef _vl_api_defined_sctp_del_src_dst_connection_reply_t_endian
#define _vl_api_defined_sctp_del_src_dst_connection_reply_t_endian
static inline void vl_api_sctp_del_src_dst_connection_reply_t_endian (vl_api_sctp_del_src_dst_connection_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_sctp_config_t_endian
#define _vl_api_defined_sctp_config_t_endian
static inline void vl_api_sctp_config_t_endian (vl_api_sctp_config_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->never_delay_sack = a->never_delay_sack (no-op) */
    /* a->never_bundle = a->never_bundle (no-op) */
}

#endif

#ifndef _vl_api_defined_sctp_config_reply_t_endian
#define _vl_api_defined_sctp_config_reply_t_endian
static inline void vl_api_sctp_config_reply_t_endian (vl_api_sctp_config_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(sctp.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(sctp.api, 0x301e027b)

#endif
