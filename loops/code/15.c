#include<stdio.h>
#include<math.h>

void main() {
    float x,y;
    scanf("%f %f", &x, &y);
    
    float result = pow(x,y);
    printf("%0.0f", result);
}