#include<stdio.h>
int main()
{
    int number;
    // Inputting a decimal number from user
    printf( "Enter any Decimal number :");
    scanf("%d",&number);
   // Printing the equivalent octal number using %o specifier
    printf("Octal number= %o\n", number);
    return 0;
}

