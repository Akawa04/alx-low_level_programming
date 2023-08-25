#include <stdio.h>
#include "main.h"
void reverse_array(int *a, int n) {
    int temp;
    int left = 0;
    int right = n - 1;

    while (left < right) {
        temp = a[left];
        a[left] = a[right];
        a[right] = temp;

        left++;
        right--;
    }
}
