#include<stdio.h>

void main() {
    int n, term;
    scanf("%d", &n);

    for (int i = 1; i<=n; i++) {
        term = 2*(i-1)+1;
        printf("%d, ", term);
    }
}