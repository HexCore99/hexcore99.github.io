#include<stdio.h>

void main() {
    int term,number, sum=0;
    scanf("%d", &term);
    

    for (int i=1; i<=term ;i++) {
        if(i%2 != 0)
            number = i;
        else
            number = -i;

        sum = sum + number;
    }
    printf("Result: %d", sum);
}