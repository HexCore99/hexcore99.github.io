#include <stdio.h>
/*
3 
3 2 
3 2 1 
*/

void main() {
    int n; 
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        for (int j = n; j >= i; j--) {
            printf("%d ", j);
        }
        printf("\n");
    }
}