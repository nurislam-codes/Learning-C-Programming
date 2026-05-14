#include<stdio.h>
int main()
{
    int number;
    // Inputting a octal number from user
    printf( "Enter any octal number :");
    scanf("%o",&number);
   // Printing the equivalent Decimal number using %o specifier
    printf("Decimal number= %d\n", number);
    return 0;
}

