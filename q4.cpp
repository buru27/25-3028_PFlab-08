#include <stdio.h>

int main() {
    int arr[2][2][2], i, j, k;
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            for(k = 0; k < 2; k++)
                arr[i][j][k] = i + j + k;
    printf("3D Array elements:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            for(k = 0; k < 2; k++)
                printf("%d ", arr[i][j][k]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
