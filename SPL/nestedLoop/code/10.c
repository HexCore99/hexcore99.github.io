#include <stdio.h>
/*
_ _ * 
_ * * 
* * * 

*/

void main() {
    int n; 
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf("_ ", j);
        }
        for(int j = 1; j <= i; j++) {
            printf("* ", j);
        }
        printf("\n");
    }
}