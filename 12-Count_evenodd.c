#include <stdio.h>
int main()
{
  long long num;
  int evenCount = 0, oddCount = 0, digits;

  printf("Enter an integer: ");
  scanf("%lld", &num);
  printf("\n****Now let's count the even and odd digits*****");

  do
  {
    digits = num % 10;

    if (digits % 2 == 0)
      evenCount++;
    else
      oddCount++;

    num = num / 10;
  } while (num != 0);

  printf("\nNumber of even digits in the given integer is %d \n", evenCount);
  printf("Number of odd digits in the given integer is %d", oddCount);

  return 0;
}