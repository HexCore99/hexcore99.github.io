#include<stdio.h>
/*
1___1
12_21
12321
*/

void main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n*2-1-i; j++) {
            if (j <= i) {
                printf("%d", j);
            } else {
                printf("_");
            }
        }
        
        for (int k = i; k >= 1; k--) {
            printf("%d", k);
        }    
        printf("\n");  
    }      
}