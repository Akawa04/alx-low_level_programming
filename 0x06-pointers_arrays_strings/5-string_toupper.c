#include <stdio.h>
#include "main.h"
char *string_toupper(char *str) {
    char *result = str;

    while (*str != '\0') {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A'); 
        }
        str++;
    }

    return result;
}
