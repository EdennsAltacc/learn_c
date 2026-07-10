#include "custom_string.h"

void strcat(char *dest, const char *str) {
    char *end = dest;
    while (*end != '\0') {
        end++;
    }

    while (*str != '\0') {
        *end = *str;
        end++;
        str++;
    }

    *end = '\0';
}