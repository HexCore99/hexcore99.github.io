#include <stdio.h>
/*
1 2 3
1 2 3
1 2 3
*/

void main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}