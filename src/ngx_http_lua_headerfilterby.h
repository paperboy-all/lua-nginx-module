/* vim:set ft=c ts=4 sw=4 et fdm=marker: */

#ifndef NGX_HTTP_LUA_HEADERFILTERBY_H
#define NGX_HTTP_LUA_HEADERFILTERBY_H


#include "ngx_http_lua_common.h"


extern ngx_http_output_header_filter_pt ngx_http_lua_next_filter_header_filter;


ngx_int_t ngx_http_lua_header_filter_init();
ngx_int_t ngx_http_lua_header_filter_by_chunk(lua_State *L,
        ngx_http_request_t *r);
ngx_int_t ngx_http_lua_header_filter_inline(ngx_http_request_t *r);
ngx_int_t ngx_http_lua_header_filter_file(ngx_http_request_t *r);


#endif /* NGX_HTTP_LUA_HEADERFILTERBY_H */

