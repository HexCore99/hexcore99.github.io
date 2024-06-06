#include<stdio.h>
/*

__*
_***
*****
_***
__*

*/
void main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= (n/2)+1; i++) {
        for (int j = 1; j <= (n/2)+1-i; j++) {
            printf("_");
        }
        for (int k = 1; k <= 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n/2; i >= 1; i--) {
        for (int j = 1; j <= n/2 +1-i; j++) {
            printf("_");
        }
        for (int k = 1; k <= 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
}