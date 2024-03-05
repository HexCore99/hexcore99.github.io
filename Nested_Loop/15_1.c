#include<stdio.h>
/*
ZZZZZ
   Z
  Z
 Z
ZZZZZ
*/

void main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if(i == 1 || i == n) {
            for(int j = 1; j <= n; j++) {
                printf("Z");
            }
        } else {
            for(int j =1; j <= n-i; j++) {
                printf(" ");
            }
            printf("Z");
        }
        printf("\n");
    }
}