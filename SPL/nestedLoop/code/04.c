#include <stdio.h>
/*
_ _ 1
_ 2 2
3 3 3
*/
void main() {
    int n; 
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            printf("_", j);
        }
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}