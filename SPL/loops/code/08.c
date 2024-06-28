#include<stdio.h>

void main() {
    int num, store;
    scanf("%d", &num);

    while(1) {
        store = num % 10;
        num = num / 10;

        printf("%d", store);

        if(num == 0)
            break;
    }
}