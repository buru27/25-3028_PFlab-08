#include <stdio.h>

int main() {
    int i, j, start, end, flag;
    printf("Enter start and end of range: ");
    scanf("%d%d", &start, &end);
    printf("Prime numbers are:\n");
    for(i = start; i <= end; i++) {
        if(i < 2)
            continue;
        flag = 0;
        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", i);
    }
    return 0;
}
