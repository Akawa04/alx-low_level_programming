#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include "main.h"
char *leet(char *str) {
    char leet_replacements[] = "AEOTL";
    char leet_characters[] = "43071";
   int i,j; 
    for ( i = 0; str[i] != '\0'; i++) {
        for ( j = 0; leet_replacements[j] != '\0'; j++) {
            if (toupper(str[i]) == leet_replacements[j]) {
                str[i] = leet_characters[j];
                break;
            }
        }
    }
    
    return str;
}
