#ifndef CGMEXT_H
#define CGMEXT_H

#define CGMEXT_VER "0.0.1"

/* Includes */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* Definitions */
#ifdef _WIN32
#define YYEXPORT __declspec(dllexport)
#else
#define YYEXPORT __attribute__((visibility("default")))
#endif

/* Helper functions */
static inline double pointer_address_real(void *ptr)
{
    return (double)(uintptr_t)ptr;
}

#endif