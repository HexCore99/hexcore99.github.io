#include<stdio.h>
#include<math.h>

void main() {
    int term, sum=0, series;
    scanf("%d", &term);

    for (int i = 1; i <= term; i++) {
        series = pow(i,2)*(i+1);

        sum = sum + series;
    }
    printf("Result: %d", sum);
    
}