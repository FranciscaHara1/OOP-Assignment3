#include <stdio.h>

void main(void) {
    int i, j;

    const int ROW = 3;
    const int COL = 4;

    int arr[ROW][COL];

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            arr[i][j] = i * j;
        }
    }

    for (i = 0; i < ROW; i++) {
        for (j = 0; j < COL; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}