#include "main.h"
#include <stdio.h>

void _putchar(char c) {
    putchar(c);
}

void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    if (n / 10 != 0) {
        print_number(n / 10);
    }

    _putchar(n % 10 + '0');
}
int main() {
    int num = 12345;

    print_number(num);
    _putchar('\n');

    return 0;
}
