#include <stdio.h>

int main() {
  
 int num = 3, sum = 10, i = 7 , j = 2;
 switch (num)
 {
 case 1:


case 2:
sum += --j*2;
i--;

case 3:
sum = ++i*j--;
break;


 default:
    break;
 } 
  
  printf("%d %d %d", sum, i, j);
    return 0;
}