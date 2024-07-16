#include<stdio.h>

void main() {
    int X, N, n;
    scanf("%d %d", &X, &N); // X = player1, N = tries, n = player2

    for (int i = 1; ; i++) {
        scanf("%d", &n);

        if(n != X) {
            N--;
            printf("Wrong, %d choices left!\n", N);
        }
        else if(n == X) {
            printf("Right, Player-2 wins!\n");
            break;
        }
        if(N == 0) {
            printf("Player-1 wins!\n");
            break;
        }
    }
}