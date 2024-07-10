// Write a program to check whether a number is Prime or not
#include<stdio.h>

int main(){
  int n;

  printf("Enter a number: ");
  scanf("%d",&n);

  if(n%2 == 0){
    printf("%d is not a Prime number", n);
  }
  else{
    printf("%d is a Prime number", n);
  }

  return 0;
}