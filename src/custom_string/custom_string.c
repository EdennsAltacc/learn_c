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

int strcmp(const char *s1, const char *s2) {
    while (*s1 != '\0' && *s1 == *s2) {
        s1++;
        s2++;
    }

    return (unsigned char)*s1 - (unsigned char)*s2;
}