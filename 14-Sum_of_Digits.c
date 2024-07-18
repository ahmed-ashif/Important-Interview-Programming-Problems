// Write a program to Find Sum of Digits in a Number

#include <stdio.h>

int main()
{

  int num, digits, sum = 0;

  printf("Enter a number:");
  scanf("%d", &num);

  do
  {
    digits = num % 10;
    sum = sum + digits;

    num /= 10;
  } while (num != 0);

  printf("The sum of the digits is : %d", sum);

  return 0;
}