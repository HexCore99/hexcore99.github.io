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
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n) {
                printf("Z");
            } else {
                if (j < n-i+1) {
                    printf(" ");
                } 
                else if(j == n-i+1){
                    printf("Z");
                }
            }    
        }
        printf("\n");   
    }
}