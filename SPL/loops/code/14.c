#include<stdio.h>

void main() {
    int n, r, fact1=1, fact2=1, fact3=1;
    scanf("%d %d", &n, &r);

    if(n>=r) {
        for (int i = 1; i <= n; i++) {
            fact1 = fact1*i;
        }
        for (int i = 1; i <= r; i++) {
            fact2 = fact2*i;
        }
        for (int i = 1; i <= (n-r); i++) {
            fact3 = fact3*i;
        }
        printf("%d", fact1/(fact2 * fact3));
    }
}