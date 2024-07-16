#include <stdio.h>

void main() {

  int n, flag = 1;  // 1 -> true, 0 -> false, flag = 1 (prime)

  printf("n: ");
  scanf("%d", &n);

  // 0 and 1 are not prime numbers
  // change flag to 0 for non-prime number
  if (n == 0 || n == 1)
     flag = 0;

  for (int i = 2; i < n ; i++)
    {
     // if n is divisible by i, then n is not prime
     // change flag to 0 for non-prime number
     if (n % i == 0) {
          flag = 0;
          break;
        }
    }

  // flag is 1 for prime numbers
  if (flag == 1)
    printf("Prime");
  else
    printf("Not prime");
}