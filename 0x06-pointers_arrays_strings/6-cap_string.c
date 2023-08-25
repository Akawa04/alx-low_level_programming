#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool is_separator(char c) {
    char separators[] = " \t\n,;.!?\"(){}";
    for (int i = 0; separators[i] != '\0'; i++) {
        if (separators[i] == c) {
            return true;
        }
    }
    return false;
}

char *cap_string(char *str) {
    bool new_word = true;

    for (int i = 0; str[i] != '\0'; i++) {
        if (is_separator(str[i])) {
            new_word = true;
        } else if (new_word && islower(str[i])) {
            str[i] = toupper(str[i]);
            new_word = false;
        } else {
            new_word = false;
        }
    }

    return str;
}

