#include<stdio.h>

void main() {
    char ch;
    int count=1;

    for(int i = 1; ; i++) {
        scanf(" %c", &ch);

        if(ch == 'A')
            break;
        else {
            printf("Input %d: %c\n", count, ch);
            count++;
        }
            
    }
}