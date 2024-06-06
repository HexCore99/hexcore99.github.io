#include<stdio.h>

void main() {
    int num1, num2, GCD, LCM;
    scanf("%d %d", &num1, &num2);

    int max = (num1 > num2) ? num1 : num2;
    
    for (int i = max; ; i++) {
        if ((i%num1 == 0) && (i%num2 ==0)) {
            LCM = i;
            break;
        }
        
    }
    GCD = (num1 * num2) / LCM;
    printf("GCD: %d\n", GCD);
    printf("LCM: %d\n", LCM);
    
}