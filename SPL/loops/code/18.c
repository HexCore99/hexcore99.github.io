#include <stdio.h>

void main() {
    int num, org_num, last_num, reversed_num = 0;

    scanf("%d", &num);
    org_num = num;

    while (num != 0) { // Reverse the number
        last_num = num % 10;
        reversed_num = reversed_num * 10 + last_num;
        num /= 10;
    }

    if (org_num == reversed_num) {
        printf("Yes");
    } else {
        printf("No");
    }
}