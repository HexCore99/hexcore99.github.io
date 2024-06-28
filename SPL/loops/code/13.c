#include<stdio.h>

void main() {
    int n, fact = 1;
    scanf("%d", &n);
    printf("%d! = ", n);

    for (int i = n; ; i--) {
        fact = fact * i;
        printf("%d ", i);

        if(i==1)
            break;

        printf("X ");
    }
    printf("= %d", fact);
}