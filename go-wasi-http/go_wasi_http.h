// Generated by `wit-bindgen` 0.8.0. DO NOT EDIT!
#ifndef __BINDINGS_GO_WASI_HTTP_H
#define __BINDINGS_GO_WASI_HTTP_H
#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>

typedef struct {
  char*ptr;
  size_t len;
} go_wasi_http_string_t;

// A "pollable" handle.
// 
// This is conceptually represents a `stream<_, _>`, or in other words,
// a stream that one can wait on, repeatedly, but which does not itself
// produce any data. It's temporary scaffolding until component-model's
// async features are ready.
// 
// And at present, it is a `u32` instead of being an actual handle, until
// the wit-bindgen implementation of handles and resources is ready.
// 
// `pollable` lifetimes are not automatically managed. Users must ensure
// that they do not outlive the resource they reference.
// 
// This [represents a resource](https://github.com/WebAssembly/WASI/blob/main/docs/WitInWasi.md#Resources).
typedef uint32_t wasi_poll_poll_pollable_t;

typedef struct {
  wasi_poll_poll_pollable_t *ptr;
  size_t len;
} go_wasi_http_list_pollable_t;

typedef struct {
  uint8_t *ptr;
  size_t len;
} go_wasi_http_list_u8_t;

typedef wasi_poll_poll_pollable_t wasi_io_streams_pollable_t;

// An error type returned from a stream operation. Currently this
// doesn't provide any additional information.
typedef struct {
} wasi_io_streams_stream_error_t;

// An output bytestream. In the future, this will be replaced by handle
// types.
// 
// This conceptually represents a `stream<u8, _>`. It's temporary
// scaffolding until component-model's async features are ready.
// 
// `output-stream`s are *non-blocking* to the extent practical on
// underlying platforms. Except where specified otherwise, I/O operations also
// always return promptly, after the number of bytes that can be written
// promptly, which could even be zero. To wait for the stream to be ready to
// accept data, the `subscribe-to-output-stream` function to obtain a
// `pollable` which can be polled for using `wasi_poll`.
// 
// And at present, it is a `u32` instead of being an actual handle, until
// the wit-bindgen implementation of handles and resources is ready.
// 
// This [represents a resource](https://github.com/WebAssembly/WASI/blob/main/docs/WitInWasi.md#Resources).
typedef uint32_t wasi_io_streams_output_stream_t;

// An input bytestream. In the future, this will be replaced by handle
// types.
// 
// This conceptually represents a `stream<u8, _>`. It's temporary
// scaffolding until component-model's async features are ready.
// 
// `input-stream`s are *non-blocking* to the extent practical on underlying
// platforms. I/O operations always return promptly; if fewer bytes are
// promptly available than requested, they return the number of bytes promptly
// available, which could even be zero. To wait for data to be available,
// use the `subscribe-to-input-stream` function to obtain a `pollable` which
// can be polled for using `wasi_poll`.
// 
// And at present, it is a `u32` instead of being an actual handle, until
// the wit-bindgen implementation of handles and resources is ready.
// 
// This [represents a resource](https://github.com/WebAssembly/WASI/blob/main/docs/WitInWasi.md#Resources).
typedef uint32_t wasi_io_streams_input_stream_t;

typedef struct {
  go_wasi_http_list_u8_t f0;
  bool f1;
} go_wasi_http_tuple2_list_u8_bool_t;

typedef struct {
  bool is_err;
  union {
    go_wasi_http_tuple2_list_u8_bool_t ok;
  } val;
} go_wasi_http_result_tuple2_list_u8_bool_stream_error_t;

typedef struct {
  uint64_t f0;
  bool f1;
} go_wasi_http_tuple2_u64_bool_t;

typedef struct {
  bool is_err;
  union {
    go_wasi_http_tuple2_u64_bool_t ok;
  } val;
} go_wasi_http_result_tuple2_u64_bool_stream_error_t;

typedef struct {
  bool is_err;
  union {
    uint64_t ok;
  } val;
} go_wasi_http_result_u64_stream_error_t;

typedef wasi_io_streams_input_stream_t wasi_http_types_input_stream_t;

typedef wasi_io_streams_output_stream_t wasi_http_types_output_stream_t;

typedef wasi_poll_poll_pollable_t wasi_http_types_pollable_t;

typedef uint16_t wasi_http_types_status_code_t;

typedef struct {
  uint8_t tag;
  union {
    go_wasi_http_string_t other;
  } val;
} wasi_http_types_scheme_t;

#define WASI_HTTP_TYPES_SCHEME_HTTP 0
#define WASI_HTTP_TYPES_SCHEME_HTTPS 1
#define WASI_HTTP_TYPES_SCHEME_OTHER 2

typedef uint32_t wasi_http_types_response_outparam_t;

typedef struct {
  bool is_some;
  uint32_t val;
} go_wasi_http_option_u32_t;

typedef struct {
  go_wasi_http_option_u32_t connect_timeout_ms;
  go_wasi_http_option_u32_t first_byte_timeout_ms;
  go_wasi_http_option_u32_t between_bytes_timeout_ms;
} wasi_http_types_request_options_t;

typedef wasi_http_types_output_stream_t wasi_http_types_outgoing_stream_t;

typedef uint32_t wasi_http_types_outgoing_response_t;

typedef uint32_t wasi_http_types_outgoing_request_t;

typedef struct {
  uint8_t tag;
  union {
    go_wasi_http_string_t other;
  } val;
} wasi_http_types_method_t;

#define WASI_HTTP_TYPES_METHOD_GET 0
#define WASI_HTTP_TYPES_METHOD_HEAD 1
#define WASI_HTTP_TYPES_METHOD_POST 2
#define WASI_HTTP_TYPES_METHOD_PUT 3
#define WASI_HTTP_TYPES_METHOD_DELETE 4
#define WASI_HTTP_TYPES_METHOD_CONNECT 5
#define WASI_HTTP_TYPES_METHOD_OPTIONS 6
#define WASI_HTTP_TYPES_METHOD_TRACE 7
#define WASI_HTTP_TYPES_METHOD_PATCH 8
#define WASI_HTTP_TYPES_METHOD_OTHER 9

typedef wasi_http_types_input_stream_t wasi_http_types_incoming_stream_t;

typedef uint32_t wasi_http_types_incoming_response_t;

typedef uint32_t wasi_http_types_incoming_request_t;

typedef uint32_t wasi_http_types_future_incoming_response_t;

typedef uint32_t wasi_http_types_fields_t;

typedef wasi_http_types_fields_t wasi_http_types_trailers_t;

typedef wasi_http_types_fields_t wasi_http_types_headers_t;

typedef struct {
  uint8_t tag;
  union {
    go_wasi_http_string_t invalid_url;
    go_wasi_http_string_t timeout_error;
    go_wasi_http_string_t protocol_error;
    go_wasi_http_string_t unexpected_error;
  } val;
} wasi_http_types_error_t;

#define WASI_HTTP_TYPES_ERROR_INVALID_URL 0
#define WASI_HTTP_TYPES_ERROR_TIMEOUT_ERROR 1
#define WASI_HTTP_TYPES_ERROR_PROTOCOL_ERROR 2
#define WASI_HTTP_TYPES_ERROR_UNEXPECTED_ERROR 3

typedef struct {
  go_wasi_http_string_t f0;
  go_wasi_http_string_t f1;
} go_wasi_http_tuple2_string_string_t;

typedef struct {
  go_wasi_http_tuple2_string_string_t *ptr;
  size_t len;
} go_wasi_http_list_tuple2_string_string_t;

typedef struct {
  go_wasi_http_string_t *ptr;
  size_t len;
} go_wasi_http_list_string_t;

typedef struct {
  bool is_some;
  wasi_http_types_trailers_t val;
} go_wasi_http_option_trailers_t;

typedef struct {
  bool is_some;
  wasi_http_types_scheme_t val;
} go_wasi_http_option_scheme_t;

typedef struct {
  bool is_err;
  union {
    wasi_http_types_incoming_stream_t ok;
  } val;
} go_wasi_http_result_incoming_stream_void_t;

typedef struct {
  bool is_err;
  union {
    wasi_http_types_outgoing_stream_t ok;
  } val;
} go_wasi_http_result_outgoing_stream_void_t;

typedef struct {
  bool is_err;
  union {
    wasi_http_types_outgoing_response_t ok;
    wasi_http_types_error_t err;
  } val;
} go_wasi_http_result_outgoing_response_error_t;

typedef struct {
  bool is_err;
  union {
  } val;
} go_wasi_http_result_void_void_t;

typedef struct {
  bool is_err;
  union {
    wasi_http_types_incoming_response_t ok;
    wasi_http_types_error_t err;
  } val;
} go_wasi_http_result_incoming_response_error_t;

typedef struct {
  bool is_some;
  go_wasi_http_result_incoming_response_error_t val;
} go_wasi_http_option_result_incoming_response_error_t;

typedef wasi_http_types_outgoing_request_t wasi_http_outgoing_handler_outgoing_request_t;

typedef wasi_http_types_request_options_t wasi_http_outgoing_handler_request_options_t;

typedef wasi_http_types_future_incoming_response_t wasi_http_outgoing_handler_future_incoming_response_t;

typedef struct {
  bool is_some;
  wasi_http_outgoing_handler_request_options_t val;
} go_wasi_http_option_request_options_t;

// Imported Functions from `wasi:poll/poll`
// Dispose of the specified `pollable`, after which it may no longer
// be used.
void wasi_poll_poll_drop_pollable(wasi_poll_poll_pollable_t this);
// Poll for completion on a set of pollables.
// 
// The "oneoff" in the name refers to the fact that this function must do a
// linear scan through the entire list of subscriptions, which may be
// inefficient if the number is large and the same subscriptions are used
// many times. In the future, this is expected to be obsoleted by the
// component model async proposal, which will include a scalable waiting
// facility.
// 
// Note that the return type would ideally be `list<bool>`, but that would
// be more difficult to polyfill given the current state of `wit-bindgen`.
// See <https://github.com/bytecodealliance/preview2-prototyping/pull/11#issuecomment-1329873061>
// for details.  For now, we use zero to mean "not ready" and non-zero to
// mean "ready".
void wasi_poll_poll_poll_oneoff(go_wasi_http_list_pollable_t *in, go_wasi_http_list_u8_t *ret);

// Imported Functions from `wasi:io/streams`
// Read bytes from a stream.
// 
// This function returns a list of bytes containing the data that was
// read, along with a bool which, when true, indicates that the end of the
// stream was reached. The returned list will contain up to `len` bytes; it
// may return fewer than requested, but not more.
// 
// Once a stream has reached the end, subsequent calls to read or
// `skip` will always report end-of-stream rather than producing more
// data.
// 
// If `len` is 0, it represents a request to read 0 bytes, which should
// always succeed, assuming the stream hasn't reached its end yet, and
// return an empty list.
// 
// The len here is a `u64`, but some callees may not be able to allocate
// a buffer as large as that would imply.
// FIXME: describe what happens if allocation fails.
void wasi_io_streams_read(wasi_io_streams_input_stream_t this, uint64_t len, go_wasi_http_result_tuple2_list_u8_bool_stream_error_t *ret);
// Read bytes from a stream, with blocking.
// 
// This is similar to `read`, except that it blocks until at least one
// byte can be read.
void wasi_io_streams_blocking_read(wasi_io_streams_input_stream_t this, uint64_t len, go_wasi_http_result_tuple2_list_u8_bool_stream_error_t *ret);
// Skip bytes from a stream.
// 
// This is similar to the `read` function, but avoids copying the
// bytes into the instance.
// 
// Once a stream has reached the end, subsequent calls to read or
// `skip` will always report end-of-stream rather than producing more
// data.
// 
// This function returns the number of bytes skipped, along with a bool
// indicating whether the end of the stream was reached. The returned
// value will be at most `len`; it may be less.
void wasi_io_streams_skip(wasi_io_streams_input_stream_t this, uint64_t len, go_wasi_http_result_tuple2_u64_bool_stream_error_t *ret);
// Skip bytes from a stream, with blocking.
// 
// This is similar to `skip`, except that it blocks until at least one
// byte can be consumed.
void wasi_io_streams_blocking_skip(wasi_io_streams_input_stream_t this, uint64_t len, go_wasi_http_result_tuple2_u64_bool_stream_error_t *ret);
// Create a `pollable` which will resolve once either the specified stream
// has bytes available to read or the other end of the stream has been
// closed.
wasi_io_streams_pollable_t wasi_io_streams_subscribe_to_input_stream(wasi_io_streams_input_stream_t this);
// Dispose of the specified `input-stream`, after which it may no longer
// be used.
void wasi_io_streams_drop_input_stream(wasi_io_streams_input_stream_t this);
// Write bytes to a stream.
// 
// This function returns a `u64` indicating the number of bytes from
// `buf` that were written; it may be less than the full list.
void wasi_io_streams_write(wasi_io_streams_output_stream_t this, go_wasi_http_list_u8_t *buf, go_wasi_http_result_u64_stream_error_t *ret);
// Write bytes to a stream, with blocking.
// 
// This is similar to `write`, except that it blocks until at least one
// byte can be written.
void wasi_io_streams_blocking_write(wasi_io_streams_output_stream_t this, go_wasi_http_list_u8_t *buf, go_wasi_http_result_u64_stream_error_t *ret);
// Write multiple zero bytes to a stream.
// 
// This function returns a `u64` indicating the number of zero bytes
// that were written; it may be less than `len`.
void wasi_io_streams_write_zeroes(wasi_io_streams_output_stream_t this, uint64_t len, go_wasi_http_result_u64_stream_error_t *ret);
// Write multiple zero bytes to a stream, with blocking.
// 
// This is similar to `write-zeroes`, except that it blocks until at least
// one byte can be written.
void wasi_io_streams_blocking_write_zeroes(wasi_io_streams_output_stream_t this, uint64_t len, go_wasi_http_result_u64_stream_error_t *ret);
// Read from one stream and write to another.
// 
// This function returns the number of bytes transferred; it may be less
// than `len`.
// 
// Unlike other I/O functions, this function blocks until all the data
// read from the input stream has been written to the output stream.
void wasi_io_streams_splice(wasi_io_streams_output_stream_t this, wasi_io_streams_input_stream_t src, uint64_t len, go_wasi_http_result_tuple2_u64_bool_stream_error_t *ret);
// Read from one stream and write to another, with blocking.
// 
// This is similar to `splice`, except that it blocks until at least
// one byte can be read.
void wasi_io_streams_blocking_splice(wasi_io_streams_output_stream_t this, wasi_io_streams_input_stream_t src, uint64_t len, go_wasi_http_result_tuple2_u64_bool_stream_error_t *ret);
// Forward the entire contents of an input stream to an output stream.
// 
// This function repeatedly reads from the input stream and writes
// the data to the output stream, until the end of the input stream
// is reached, or an error is encountered.
// 
// Unlike other I/O functions, this function blocks until the end
// of the input stream is seen and all the data has been written to
// the output stream.
// 
// This function returns the number of bytes transferred.
void wasi_io_streams_forward(wasi_io_streams_output_stream_t this, wasi_io_streams_input_stream_t src, go_wasi_http_result_u64_stream_error_t *ret);
// Create a `pollable` which will resolve once either the specified stream
// is ready to accept bytes or the other end of the stream has been closed.
wasi_io_streams_pollable_t wasi_io_streams_subscribe_to_output_stream(wasi_io_streams_output_stream_t this);
// Dispose of the specified `output-stream`, after which it may no longer
// be used.
void wasi_io_streams_drop_output_stream(wasi_io_streams_output_stream_t this);

// Imported Functions from `wasi:http/types`
void wasi_http_types_drop_fields(wasi_http_types_fields_t fields);
wasi_http_types_fields_t wasi_http_types_new_fields(go_wasi_http_list_tuple2_string_string_t *entries);
void wasi_http_types_fields_get(wasi_http_types_fields_t fields, go_wasi_http_string_t *name, go_wasi_http_list_string_t *ret);
void wasi_http_types_fields_set(wasi_http_types_fields_t fields, go_wasi_http_string_t *name, go_wasi_http_list_string_t *value);
void wasi_http_types_fields_delete(wasi_http_types_fields_t fields, go_wasi_http_string_t *name);
void wasi_http_types_fields_append(wasi_http_types_fields_t fields, go_wasi_http_string_t *name, go_wasi_http_string_t *value);
void wasi_http_types_fields_entries(wasi_http_types_fields_t fields, go_wasi_http_list_tuple2_string_string_t *ret);
wasi_http_types_fields_t wasi_http_types_fields_clone(wasi_http_types_fields_t fields);
void wasi_http_types_finish_incoming_stream(wasi_http_types_incoming_stream_t s, go_wasi_http_option_trailers_t *ret);
void wasi_http_types_finish_outgoing_stream(wasi_http_types_outgoing_stream_t s, go_wasi_http_option_trailers_t *trailers);
void wasi_http_types_drop_incoming_request(wasi_http_types_incoming_request_t request);
void wasi_http_types_drop_outgoing_request(wasi_http_types_outgoing_request_t request);
void wasi_http_types_incoming_request_method(wasi_http_types_incoming_request_t request, wasi_http_types_method_t *ret);
void wasi_http_types_incoming_request_path(wasi_http_types_incoming_request_t request, go_wasi_http_string_t *ret);
void wasi_http_types_incoming_request_query(wasi_http_types_incoming_request_t request, go_wasi_http_string_t *ret);
void wasi_http_types_incoming_request_scheme(wasi_http_types_incoming_request_t request, go_wasi_http_option_scheme_t *ret);
void wasi_http_types_incoming_request_authority(wasi_http_types_incoming_request_t request, go_wasi_http_string_t *ret);
wasi_http_types_headers_t wasi_http_types_incoming_request_headers(wasi_http_types_incoming_request_t request);
void wasi_http_types_incoming_request_consume(wasi_http_types_incoming_request_t request, go_wasi_http_result_incoming_stream_void_t *ret);
wasi_http_types_outgoing_request_t wasi_http_types_new_outgoing_request(wasi_http_types_method_t *method, go_wasi_http_string_t *path, go_wasi_http_string_t *query, go_wasi_http_option_scheme_t *scheme, go_wasi_http_string_t *authority, wasi_http_types_headers_t headers);
void wasi_http_types_outgoing_request_write(wasi_http_types_outgoing_request_t request, go_wasi_http_result_outgoing_stream_void_t *ret);
void wasi_http_types_drop_response_outparam(wasi_http_types_response_outparam_t response);
void wasi_http_types_set_response_outparam(go_wasi_http_result_outgoing_response_error_t *response, go_wasi_http_result_void_void_t *ret);
void wasi_http_types_drop_incoming_response(wasi_http_types_incoming_response_t response);
void wasi_http_types_drop_outgoing_response(wasi_http_types_outgoing_response_t response);
wasi_http_types_status_code_t wasi_http_types_incoming_response_status(wasi_http_types_incoming_response_t response);
wasi_http_types_headers_t wasi_http_types_incoming_response_headers(wasi_http_types_incoming_response_t response);
void wasi_http_types_incoming_response_consume(wasi_http_types_incoming_response_t response, go_wasi_http_result_incoming_stream_void_t *ret);
wasi_http_types_outgoing_response_t wasi_http_types_new_outgoing_response(wasi_http_types_status_code_t status_code, wasi_http_types_headers_t headers);
void wasi_http_types_outgoing_response_write(wasi_http_types_outgoing_response_t response, go_wasi_http_result_outgoing_stream_void_t *ret);
void wasi_http_types_drop_future_incoming_response(wasi_http_types_future_incoming_response_t f);
void wasi_http_types_future_incoming_response_get(wasi_http_types_future_incoming_response_t f, go_wasi_http_option_result_incoming_response_error_t *ret);
wasi_http_types_pollable_t wasi_http_types_listen_to_future_incoming_response(wasi_http_types_future_incoming_response_t f);

// Imported Functions from `wasi:http/outgoing-handler`
wasi_http_outgoing_handler_future_incoming_response_t wasi_http_outgoing_handler_handle(wasi_http_outgoing_handler_outgoing_request_t request, go_wasi_http_option_request_options_t *options);

// Helper Functions

void go_wasi_http_list_pollable_free(go_wasi_http_list_pollable_t *ptr);
void go_wasi_http_list_u8_free(go_wasi_http_list_u8_t *ptr);
void go_wasi_http_tuple2_list_u8_bool_free(go_wasi_http_tuple2_list_u8_bool_t *ptr);
void go_wasi_http_result_tuple2_list_u8_bool_stream_error_free(go_wasi_http_result_tuple2_list_u8_bool_stream_error_t *ptr);
void wasi_http_types_scheme_free(wasi_http_types_scheme_t *ptr);
void wasi_http_types_method_free(wasi_http_types_method_t *ptr);
void wasi_http_types_error_free(wasi_http_types_error_t *ptr);
void go_wasi_http_tuple2_string_string_free(go_wasi_http_tuple2_string_string_t *ptr);
void go_wasi_http_list_tuple2_string_string_free(go_wasi_http_list_tuple2_string_string_t *ptr);
void go_wasi_http_list_string_free(go_wasi_http_list_string_t *ptr);
void go_wasi_http_option_scheme_free(go_wasi_http_option_scheme_t *ptr);
void go_wasi_http_result_outgoing_response_error_free(go_wasi_http_result_outgoing_response_error_t *ptr);
void go_wasi_http_result_incoming_response_error_free(go_wasi_http_result_incoming_response_error_t *ptr);
void go_wasi_http_option_result_incoming_response_error_free(go_wasi_http_option_result_incoming_response_error_t *ptr);
void go_wasi_http_string_set(go_wasi_http_string_t *ret, const char*s);
void go_wasi_http_string_dup(go_wasi_http_string_t *ret, const char*s);
void go_wasi_http_string_free(go_wasi_http_string_t *ret);

#ifdef __cplusplus
}
#endif
#endif
