#include "custom_string.h"
#include <stdio.h>

int main(void) {
    char test[50] = "Hello ";
    strcat(test, "world!\n");
    if (strcmp(test, "Hello world!\n") == 0) {
        printf("%s", test);
    }


    char d[100];
    char *e = "Apple!\n";
    strcpy(d, e);
    
    printf("%s", d);
    return 0;
}