#include "calc_lib.h"

double calc_sum(i64 first_number, i64 second_number) {
    return (double) first_number + second_number;
}

double calc_sub(i64 first_number, i64 second_number) {
    return (double) first_number - second_number;
}

double calc_mul(i64 first_number, i64 second_number) {
    return (double) first_number * second_number;
}

double calc_div(i64 first_number, i64 second_number) {
    if (second_number == 0) {
        return 0.0;
    }

    return (double) first_number / second_number;
}

calc_status_t calc_compute(i64 first_number, char opt, i64 second_number, double* result) {
    switch (opt) {
        case '+':
            *result = calc_sum(first_number, second_number);
            return CALC_STATUS_OK;
        case '-':
            *result = calc_sub(first_number, second_number);
            return CALC_STATUS_OK;
        case '*':
            *result = calc_mul(first_number, second_number);
            return CALC_STATUS_OK;
        case '/':
            if (second_number == 0) {
                *result = calc_div(first_number, second_number);
                return CALC_ERR_DIVISION_BY_ZERO;
            }

            *result = calc_div(first_number, second_number);
            return CALC_STATUS_OK;
        default:
            return CALC_ERR_INVALID_INPUT;
    }
}
