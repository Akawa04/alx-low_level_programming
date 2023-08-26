#include <stdio.h>
#include <ctype.h>
#include "main.h" 
char *rot13(char *str) {
	int i;
    for (i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        char start_char = islower(c) ? 'a' : 'A';
        
        if (isalpha(c)) {
            str[i] = (c - start_char + 13) % 26 + start_char;
        }
    }
    
    return str;
}
