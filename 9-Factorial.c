// Write a program to find the factorial of a number
#include <stdio.h>

int main()
{
  int n, i, factorial = 1;

  printf("Enter a number: ");
  scanf("%d", &n);

  if (n < 0)
  {
    printf("Error! Factorial of a negative number doesn't exist.");
  }
  else if(n == 0){
    printf("Factorial of %d is 1", n);
  }
  else
  {
    for (i = 1; i <= n; i++)
    {
      factorial = factorial * i;
    }
    printf("Factorial of %d is %d", n, factorial);
  }
  return 0;
}