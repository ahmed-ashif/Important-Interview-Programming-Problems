#include <stdio.h>
int main()
{
  long long num; 
  int count = 0;

  printf("Enter an integer: ");
  scanf("%lld", &num);

  do
  {
    num = num / 10;
    count++;
  } while (num != 0);

  printf("Number of digits in the given integer is %d", count);
  
  return 0;
}