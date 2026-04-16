#include <stdio.h>

void main(void) {
    int i = 0;

    const int LENGTH = 10;
    int arr[LENGTH];

    for (i = 0; i < LENGTH; i++) {
        arr[i] = i * i;
    }

    for (i = 0; i < LENGTH; i++) {
        printf("%6d", arr[i]);
    }

    printf("\n");
}