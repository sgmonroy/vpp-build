/*
 * VLIB API definitions 2020-01-07 14:20:12
 * Input file: dns.api
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
#warning no content included from dns.api
#endif

#define VL_API_PACKED(x) x __attribute__ ((packed))

/****** Message ID / handler enum ******/

#ifdef vl_msg_id
vl_msg_id(VL_API_DNS_ENABLE_DISABLE, vl_api_dns_enable_disable_t_handler)
vl_msg_id(VL_API_DNS_ENABLE_DISABLE_REPLY, vl_api_dns_enable_disable_reply_t_handler)
vl_msg_id(VL_API_DNS_NAME_SERVER_ADD_DEL, vl_api_dns_name_server_add_del_t_handler)
vl_msg_id(VL_API_DNS_NAME_SERVER_ADD_DEL_REPLY, vl_api_dns_name_server_add_del_reply_t_handler)
vl_msg_id(VL_API_DNS_RESOLVE_NAME, vl_api_dns_resolve_name_t_handler)
vl_msg_id(VL_API_DNS_RESOLVE_NAME_REPLY, vl_api_dns_resolve_name_reply_t_handler)
vl_msg_id(VL_API_DNS_RESOLVE_IP, vl_api_dns_resolve_ip_t_handler)
vl_msg_id(VL_API_DNS_RESOLVE_IP_REPLY, vl_api_dns_resolve_ip_reply_t_handler)
#endif
/****** Message names ******/

#ifdef vl_msg_name
vl_msg_name(vl_api_dns_enable_disable_t, 1)
vl_msg_name(vl_api_dns_enable_disable_reply_t, 1)
vl_msg_name(vl_api_dns_name_server_add_del_t, 1)
vl_msg_name(vl_api_dns_name_server_add_del_reply_t, 1)
vl_msg_name(vl_api_dns_resolve_name_t, 1)
vl_msg_name(vl_api_dns_resolve_name_reply_t, 1)
vl_msg_name(vl_api_dns_resolve_ip_t, 1)
vl_msg_name(vl_api_dns_resolve_ip_reply_t, 1)
#endif
/****** Message name, crc list ******/

#ifdef vl_msg_name_crc_list
#define foreach_vl_msg_name_crc_dns \
_(VL_API_DNS_ENABLE_DISABLE, dns_enable_disable, 8050327d) \
_(VL_API_DNS_ENABLE_DISABLE_REPLY, dns_enable_disable_reply, e8d4e804) \
_(VL_API_DNS_NAME_SERVER_ADD_DEL, dns_name_server_add_del, 3bb05d8c) \
_(VL_API_DNS_NAME_SERVER_ADD_DEL_REPLY, dns_name_server_add_del_reply, e8d4e804) \
_(VL_API_DNS_RESOLVE_NAME, dns_resolve_name, c6566676) \
_(VL_API_DNS_RESOLVE_NAME_REPLY, dns_resolve_name_reply, c2d758c3) \
_(VL_API_DNS_RESOLVE_IP, dns_resolve_ip, ae96a1a3) \
_(VL_API_DNS_RESOLVE_IP_REPLY, dns_resolve_ip_reply, 49ed78d6) 
#endif

/****** Typedefs ******/

#ifdef vl_typedefs
#ifndef included_dns_api
#define included_dns_api
#ifndef _vl_api_defined_dns_enable_disable
#define _vl_api_defined_dns_enable_disable
typedef VL_API_PACKED(struct _vl_api_dns_enable_disable {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 enable;
}) vl_api_dns_enable_disable_t;
#endif

#ifndef _vl_api_defined_dns_enable_disable_reply
#define _vl_api_defined_dns_enable_disable_reply
typedef VL_API_PACKED(struct _vl_api_dns_enable_disable_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dns_enable_disable_reply_t;
#endif

#ifndef _vl_api_defined_dns_name_server_add_del
#define _vl_api_defined_dns_name_server_add_del
typedef VL_API_PACKED(struct _vl_api_dns_name_server_add_del {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ip6;
    u8 is_add;
    u8 server_address[16];
}) vl_api_dns_name_server_add_del_t;
#endif

#ifndef _vl_api_defined_dns_name_server_add_del_reply
#define _vl_api_defined_dns_name_server_add_del_reply
typedef VL_API_PACKED(struct _vl_api_dns_name_server_add_del_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
}) vl_api_dns_name_server_add_del_reply_t;
#endif

#ifndef _vl_api_defined_dns_resolve_name
#define _vl_api_defined_dns_resolve_name
typedef VL_API_PACKED(struct _vl_api_dns_resolve_name {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 name[256];
}) vl_api_dns_resolve_name_t;
#endif

#ifndef _vl_api_defined_dns_resolve_name_reply
#define _vl_api_defined_dns_resolve_name_reply
typedef VL_API_PACKED(struct _vl_api_dns_resolve_name_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 ip4_set;
    u8 ip6_set;
    u8 ip4_address[4];
    u8 ip6_address[16];
}) vl_api_dns_resolve_name_reply_t;
#endif

#ifndef _vl_api_defined_dns_resolve_ip
#define _vl_api_defined_dns_resolve_ip
typedef VL_API_PACKED(struct _vl_api_dns_resolve_ip {
    u16 _vl_msg_id;
    u32 client_index;
    u32 context;
    u8 is_ip6;
    u8 address[16];
}) vl_api_dns_resolve_ip_t;
#endif

#ifndef _vl_api_defined_dns_resolve_ip_reply
#define _vl_api_defined_dns_resolve_ip_reply
typedef VL_API_PACKED(struct _vl_api_dns_resolve_ip_reply {
    u16 _vl_msg_id;
    u32 context;
    i32 retval;
    u8 name[256];
}) vl_api_dns_resolve_ip_reply_t;
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

#ifndef _vl_api_defined_dns_enable_disable_t_print
#define _vl_api_defined_dns_enable_disable_t_print
static inline void *vl_api_dns_enable_disable_t_print (vl_api_dns_enable_disable_t *a,void *handle)
{
    vl_print(handle, "vl_api_dns_enable_disable_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "enable: %u\n", a->enable);
    return handle;
}

#endif

#ifndef _vl_api_defined_dns_enable_disable_reply_t_print
#define _vl_api_defined_dns_enable_disable_reply_t_print
static inline void *vl_api_dns_enable_disable_reply_t_print (vl_api_dns_enable_disable_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dns_enable_disable_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dns_name_server_add_del_t_print
#define _vl_api_defined_dns_name_server_add_del_t_print
static inline void *vl_api_dns_name_server_add_del_t_print (vl_api_dns_name_server_add_del_t *a,void *handle)
{
    vl_print(handle, "vl_api_dns_name_server_add_del_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ip6: %u\n", a->is_ip6);
    vl_print(handle, "is_add: %u\n", a->is_add);
    return handle;
}

#endif

#ifndef _vl_api_defined_dns_name_server_add_del_reply_t_print
#define _vl_api_defined_dns_name_server_add_del_reply_t_print
static inline void *vl_api_dns_name_server_add_del_reply_t_print (vl_api_dns_name_server_add_del_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dns_name_server_add_del_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    return handle;
}

#endif

#ifndef _vl_api_defined_dns_resolve_name_t_print
#define _vl_api_defined_dns_resolve_name_t_print
static inline void *vl_api_dns_resolve_name_t_print (vl_api_dns_resolve_name_t *a,void *handle)
{
    vl_print(handle, "vl_api_dns_resolve_name_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    return handle;
}

#endif

#ifndef _vl_api_defined_dns_resolve_name_reply_t_print
#define _vl_api_defined_dns_resolve_name_reply_t_print
static inline void *vl_api_dns_resolve_name_reply_t_print (vl_api_dns_resolve_name_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dns_resolve_name_reply_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "retval: %ld\n", a->retval);
    vl_print(handle, "ip4_set: %u\n", a->ip4_set);
    vl_print(handle, "ip6_set: %u\n", a->ip6_set);
    return handle;
}

#endif

#ifndef _vl_api_defined_dns_resolve_ip_t_print
#define _vl_api_defined_dns_resolve_ip_t_print
static inline void *vl_api_dns_resolve_ip_t_print (vl_api_dns_resolve_ip_t *a,void *handle)
{
    vl_print(handle, "vl_api_dns_resolve_ip_t:\n");
    vl_print(handle, "_vl_msg_id: %u\n", a->_vl_msg_id);
    vl_print(handle, "client_index: %u\n", a->client_index);
    vl_print(handle, "context: %u\n", a->context);
    vl_print(handle, "is_ip6: %u\n", a->is_ip6);
    return handle;
}

#endif

#ifndef _vl_api_defined_dns_resolve_ip_reply_t_print
#define _vl_api_defined_dns_resolve_ip_reply_t_print
static inline void *vl_api_dns_resolve_ip_reply_t_print (vl_api_dns_resolve_ip_reply_t *a,void *handle)
{
    vl_print(handle, "vl_api_dns_resolve_ip_reply_t:\n");
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

#ifndef _vl_api_defined_dns_enable_disable_t_endian
#define _vl_api_defined_dns_enable_disable_t_endian
static inline void vl_api_dns_enable_disable_t_endian (vl_api_dns_enable_disable_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->enable = a->enable (no-op) */
}

#endif

#ifndef _vl_api_defined_dns_enable_disable_reply_t_endian
#define _vl_api_defined_dns_enable_disable_reply_t_endian
static inline void vl_api_dns_enable_disable_reply_t_endian (vl_api_dns_enable_disable_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dns_name_server_add_del_t_endian
#define _vl_api_defined_dns_name_server_add_del_t_endian
static inline void vl_api_dns_name_server_add_del_t_endian (vl_api_dns_name_server_add_del_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip6 = a->is_ip6 (no-op) */
    /* a->is_add = a->is_add (no-op) */
}

#endif

#ifndef _vl_api_defined_dns_name_server_add_del_reply_t_endian
#define _vl_api_defined_dns_name_server_add_del_reply_t_endian
static inline void vl_api_dns_name_server_add_del_reply_t_endian (vl_api_dns_name_server_add_del_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif

#ifndef _vl_api_defined_dns_resolve_name_t_endian
#define _vl_api_defined_dns_resolve_name_t_endian
static inline void vl_api_dns_resolve_name_t_endian (vl_api_dns_resolve_name_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
}

#endif

#ifndef _vl_api_defined_dns_resolve_name_reply_t_endian
#define _vl_api_defined_dns_resolve_name_reply_t_endian
static inline void vl_api_dns_resolve_name_reply_t_endian (vl_api_dns_resolve_name_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
    /* a->ip4_set = a->ip4_set (no-op) */
    /* a->ip6_set = a->ip6_set (no-op) */
}

#endif

#ifndef _vl_api_defined_dns_resolve_ip_t_endian
#define _vl_api_defined_dns_resolve_ip_t_endian
static inline void vl_api_dns_resolve_ip_t_endian (vl_api_dns_resolve_ip_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->client_index = clib_net_to_host_u32(a->client_index);
    a->context = clib_net_to_host_u32(a->context);
    /* a->is_ip6 = a->is_ip6 (no-op) */
}

#endif

#ifndef _vl_api_defined_dns_resolve_ip_reply_t_endian
#define _vl_api_defined_dns_resolve_ip_reply_t_endian
static inline void vl_api_dns_resolve_ip_reply_t_endian (vl_api_dns_resolve_ip_reply_t *a)
{
    a->_vl_msg_id = clib_net_to_host_u16(a->_vl_msg_id);
    a->context = clib_net_to_host_u32(a->context);
    a->retval = clib_net_to_host_u32(a->retval);
}

#endif


#endif /* vl_endianfun */

/****** Version tuple *****/

#ifdef vl_api_version_tuple

vl_api_version_tuple(dns.api, 1, 0, 0)

#endif /* vl_api_version_tuple */

/****** API CRC (whole file) *****/

#ifdef vl_api_version
vl_api_version(dns.api, 0xd464ac52)

#endif

