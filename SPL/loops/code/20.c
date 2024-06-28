#include <stdio.h>

void main() {
    int n;
    int num = 0;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        num = num * 10 + i;
        sum += num;
    }

    printf("%d\n",sum);
}