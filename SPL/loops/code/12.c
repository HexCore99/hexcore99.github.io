#include<stdio.h>

void main() {
    int n;
    scanf("%d", &n);

    int a = 1;   // 1st term
    int b = 3;   // 2nd term

    for (int i = 1; i <= n; i++)
    {
        printf("%d, ", a);
        int result = a+b;   // 3rd term
        a = b;
        b = result;
    }
    
}