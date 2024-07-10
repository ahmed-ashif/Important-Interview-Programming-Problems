// Write a program to reverse a String

#include <stdio.h>
#include <string.h>

int main()
{
    char mystrg[50];
    int i, length;

    printf("Please insert the string you want to reverse: ");
    scanf("%s", mystrg);

    length = strlen(mystrg); // this will return the length of the string entered

    printf("Reversed string is : ");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", mystrg[i]);
    }
    return 0;
}