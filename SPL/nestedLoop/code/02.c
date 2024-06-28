#include <stdio.h>
/*
1 2 3
2 3 4
3 4 5
*/
void main() {
    int n; 
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < i+n; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}