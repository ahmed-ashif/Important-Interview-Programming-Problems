// Write a program to find fibonacci series upto n number
#include <stdio.h>

int main()
{
  int num, a = -1, b = 1, c;

  printf("Enter a number: ");
  scanf("%d", &num);

  printf("Fibonacci series upto %d number is : ", num);

  for (int i = 0; i < num; i++)
  {
    c = a + b; //this will return the first element i.e. 0
    printf("%d ", c);
   
    a = b;
    b = c;
  }

  return 0;
}