#include<stdio.h>

void main() {
    float n, term, sum=0;
    scanf("%f", &n);

    for(int i = 1; i<=n; i++) {
        scanf("%f", &term);
        sum = sum + term;
    }
    printf("AVG of %.0f inputs: %f", n,(sum/n));
}