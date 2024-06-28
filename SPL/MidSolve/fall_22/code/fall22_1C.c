#include <stdio.h>

int main() {
  
 int a = 17%7*5;
 printf("int a= %d \n", a);

 float b = (int) (17.0/5); 

float c = 17/5;
int d = (a>b) && c; 

printf("float b =%f\n float c= %f\n int d = %d\n", b, c, d);
    return 0;
}