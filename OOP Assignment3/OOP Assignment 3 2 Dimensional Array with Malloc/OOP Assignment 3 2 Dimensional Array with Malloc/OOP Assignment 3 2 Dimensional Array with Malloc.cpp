#include <stdio.h>
#include <stdlib.h>

void main(void) {
    int i = 0;
    int j = 0;

    const int ROW = 3;
    const int COLUMN = 4;

    char** arr = (char**)malloc(sizeof(char*) * ROW);

    for (i = 0; i < ROW; i++) {
        arr[i] = (char*)malloc(sizeof(char) * COLUMN);
    }

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COLUMN; j++) {
            arr[i][j] = 10 * i + j;
        }
    }

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COLUMN; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for (i = 0; i < ROW; i++) {
        free(arr[i]);
    }
    free(arr);
}