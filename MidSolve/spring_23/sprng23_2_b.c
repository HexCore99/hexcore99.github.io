
  #include <stdio.h>

int main() {
  
 int result = 5, i, x = 2, y = 2;
for(int j = 8; j > 3; --j) {
i = (j * result) / x;
result += y;
x += (y-2);
y++;
printf("i = %d, j = %d result = %d, x = %d, y = %d\n", i, j, result, x, y);
} 
  
    return 0;
}
