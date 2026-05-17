#include<stdio.h>
int main()
{
    int number;
    // Inputting an octal number from user
    printf( "Enter any octal number :");
    scanf("%o",&number);
  // Converting Octal to Hexadecimal
    printf(" Hexadecimal number= %x\n", number);
    return 0;
}

