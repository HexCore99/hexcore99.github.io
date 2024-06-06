#include<stdio.h>
#include<math.h>

void main() {
    int x, y;
    scanf("%d %d", &x, &y);

    int i = 1;
    while (1) {
        
        float sq = pow(x,2);
        //int sq = x*x;

        if(x<y) {
            printf("%f, ", sq);
            x++;
        }
        else if(x>y) {
            printf("%f, ", sq);
            x--;
        }
        else if(x==y) {
            printf("Reached!");
            break;
        }
    }
    
}