/*
 * VLIB API definitions 2020-06-13 06:01:52
 * Input file: ioam_export.api
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
#warning no content included from ioam_export.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_IOAM_EXPORT_IP6_ENABLE_DISABLE, vl_api_ioam_export_ip6_enable_disable_t_handler)
vl_msg_id(VL_API_IOAM_EXPORT_IP6_ENABLE_DISABLE_REPLY, vl_api_ioam_export_ip6_enable_disable_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_ioam_export_ip6_enable_disable_t, 1)
vl_msg_name(vl_api_ioam_export_ip6_enable_disable_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_ioam_export \
_(VL_API_IOAM_EXPORT_IP6_ENABLE_DISABLE, ioam_export_ip6_enable_disable, 148b82a4) \
_(VL_API_IOAM_EXPORT_IP6_ENABLE_DISABLE_REPLY, ioam_export_ip6_enable_disable_reply, e8d4e804) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_ioam_export_api
#define included_ioam_export_api
#ifndef _vl_api_defined_ioam_export_ip6_enable_disable
#define _vl_api_defined_ioam_export_ip6_enable_disable
typedef VL_API_PACKED(struct _vl_api_ioam_export_ip6_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_disable;
    u8 collector_address[4];
    u8 src_address[4];
}) vl_api_ioam_export_ip6_enable_disable_t;
#endif

#ifndef _vl_api_defined_ioam_export_ip6_enable_disable_reply
#define _vl_api_defined_ioam_export_ip6_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_ioam_export_ip6_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_ioam_export_ip6_enable_disable_reply_t;
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

#ifndef _vl_api_defined_ioam_export_ip6_enable_disable_t_print
#define _vl_api_defined_ioam_export_ip6_enable_disable_t_print
static inline void *vl_api_ioam_export_ip6_enable_disable_t_print (vl_api_ioam_export_ip6_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_ioam_export_ip6_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_disable: %u\n", a->is_disable);
    return handle;
}

#endif

#ifndef _vl_api_defined_ioam_export_ip6_enable_disable_reply_t_print
#define _vl_api_defined_ioam_export_ip6_enable_disable_reply_t_print
static inline void *vl_api_ioam_export_ip6_enable_disable_reply_t_print (vl_api_ioam_export_ip6_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_ioam_export_ip6_enable_disable_reply_t:\n");
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

#ifndef _vl_api_defined_ioam_export_ip6_enable_disable_t_endian
#define _vl_api_defined_ioam_export_ip6_enable_disable_t_endian
static inline void vl_api_ioam_export_ip6_enable_disable_t_endian (vl_api_ioam_export_ip6_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_disable = a->is_disable (no-op) */
}

#endif

#ifndef _vl_api_defined_ioam_export_ip6_enable_disable_reply_t_endian
#define _vl_api_defined_ioam_export_ip6_enable_disable_reply_t_endian
static inline void vl_api_ioam_export_ip6_enable_disable_reply_t_endian (vl_api_ioam_export_ip6_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(ioam_export.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(ioam_export.api, 0xdb07b979)

#endif
