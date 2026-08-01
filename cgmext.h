#ifndef CGEMXT_H
#define CGEMXT_H

#define CGEMXT_VER "0.0.1"

/* Includes */
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

/* Defintions */
#ifdef _WIN32
#define YYEXPORT __declspec(dllexport)
#else
#define YYEXPORT __attribute__((visibility("default")))
#endif

/* Helper types */
#ifdef CE_EASY

typedef double gm_bool;

#define gm_true 1.0
#define gm_false 0.0

typedef const char *string;
typedef double real;
typedef int64_t int64;

typedef void *pointer_any;

typedef void *buffer_any;

typedef int8_t *buffer_s8;
typedef uint8_t *buffer_u8;
typedef int16_t *buffer_s16;
typedef uint16_t *buffer_u16;
typedef int32_t *buffer_s32;
typedef uint32_t *buffer_u32;

typedef float *buffer_f32;
typedef double *buffer_f64;

#ifdef CE_SPECIAL_BUFS
/* NOTE: These types are NOT guaranteed in C lang! */
typedef _Float16 *buffer_f16;
typedef _Float128 *buffer_f128;
#endif

typedef bool *buffer_bool;

typedef const char *buffer_string;
typedef char *buffer_text; /* err... */

#endif

/* Helper functions */
static inline double pointer_address_real(void *ptr)
{
    return (double)(uintptr_t)ptr;
}

#endif