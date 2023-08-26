#include "main.h"
#include <stdio.h>
#include <string.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r) {
    int len1 = strlen(n1);
    int len2 = strlen(n2);
    int j, i;
    int carry = 0;
    int index = 0;
    
    while (len1 > 0 || len2 > 0 || carry > 0) {
        int digit1 = (len1 > 0) ? (n1[len1 - 1] - '0') : 0;
        int digit2 = (len2 > 0) ? (n2[len2 - 1] - '0') : 0;
        
        int sum = digit1 + digit2 + carry;
        
        carry = sum / 10;
        r[index] = (sum % 10) + '0';
        
        index++;
        len1--;
        len2--;
        
        if (index >= size_r) {
            return 0; 
        }
    }
    
    r[index] = '\0';
    i=0;
    j= index-1;
    while (i < j) {
        char temp = r[i];
        r[i] = r[j];
        r[j] = temp;
        i++;
        j--;
    }
    
    return r;
}
