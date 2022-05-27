#include "s21_string.h"

int s21_atoi(const char *str) {
    int res = 0;
    int sign = 1;

    while (*str == ' ')
        str++;

    if (*str == '-') {
        str++;
        sign = -1;
    }

    if (*str == '+') {
        str++;
    }

    while (*str && *str >= '0' && *str <= '9') {
        res = res * 10 + (*str - '0');
        str++;
    }
    res *= sign;

    return res;
}
