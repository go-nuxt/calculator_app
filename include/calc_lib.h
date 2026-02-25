#ifndef CALC_LIB
#define CALC_LIB

#include <stdint.h>

typedef enum calc_status_t
{
    CALC_STATUS_OK,
    CALC_ERR_DIVISION_BY_ZERO,
    CALC_ERR_INVALID_INPUT,
} calc_status_t;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;

double calc_sum(i64 first_number, i64 second_number);
double calc_sub(i64 first_number, i64 second_number);
double calc_mul(i64 first_number, i64 second_number);
double calc_div(i64 first_number, i64 second_number);
calc_status_t calc_compute(i64 first_number, char opt, i64 second_number, double* result);

#endif
