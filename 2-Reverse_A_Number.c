#include <stdio.h>

int main()
{

  int n, remainder, reverse = 0;

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Entered number is %d \n", n);

  while (n != 0)
  {
    remainder = n % 10;
    reverse = reverse * 10 + remainder;
    n /= 10;
  }

  printf("Reversed number is %d", reverse);

  return 0;
}