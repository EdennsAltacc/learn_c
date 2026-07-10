#include "custom_string.h"
#include <stdio.h>

int main(void) {
    char test[50] = "Hello ";
    strcat(test, "world!\n");
    if (strcmp(test, "Hello world!\n") == 0) {
        printf("Works!\n");
    }
    printf("%s", test);
    return 0;
}