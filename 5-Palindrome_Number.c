// Write a program to find whether a number is Palindrome or not
#include<stdio.h>

int main(){
  int i, num, originalNum, rem, rev=0;

  printf("Enter a number:");
  scanf("%d",&num);

  originalNum = num;

  while (num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }

    // Check if original and reversed numbers are equal
    if (originalNum == rev) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

  return 0;
}