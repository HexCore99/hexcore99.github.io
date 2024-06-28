#include <stdio.h>
/*
101     123        
010     234
101     345
*/

void main() {
    int n; 
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = i; j < n+i; j++) {
            printf("%d", j%2);
        }
        printf("\n");
    }
}