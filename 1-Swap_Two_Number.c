#include <stdio.h>

int main()
{
  int a, b, temp;

  printf("Enter the first number: ");
  scanf("%d", &a);

  printf("Enter the second number: ");
  scanf("%d", &b);

  printf("/***** BEFORE SWAPPING *****/ \n");
  printf("The first number is %d \n", a);
  printf("The second number is %d \n", b);

  temp = a;
  a = b;
  b = temp;

  printf("/***** AFTER SWAPPING *****/ \n");
  printf("The first number is %d \n", a);
  printf("The second number is %d \n", b);

  return 0;
}