#include<stdio.h>
/*

*___*
_*_*_
__*__
_*_*_
*___*

*/

void main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j == i || j == n-i+1) {
                printf("*");
            }
            else {
                printf("_");
            }
        }
        printf("\n");
    }
}