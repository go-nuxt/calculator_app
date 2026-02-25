#include "calc_lib.h"

#include <stdio.h>

int main(void) {
    printf("Welcome to the Calculator App\n");

    i64 first_number = 0;
    i64 second_number = 0;
    double result = 0.0;

    char opt = ' ';

    while (getchar() != 'q') {
        printf("Enter the operand: ");
        scanf("%ld %c %ld", &first_number, &opt, &second_number);

        calc_status_t status = calc_compute(first_number, opt, second_number, &result);

        switch (status) {
            case CALC_ERR_DIVISION_BY_ZERO:
                printf("Cannot divide by zero!\n");
                break;
            case CALC_ERR_INVALID_INPUT:
                printf("Invalid input user!\n");
                break;
            case CALC_STATUS_OK:
                printf("Result is: %.2lf\n", result);
                break;
            default:
                break;
        }
    }

    return 0;
}
