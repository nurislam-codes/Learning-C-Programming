#include<stdio.h>
#include<ctype.h>// Required for tolower() function
int main()
{
    char lower,upper;
    // Inputting a uppercase letter from user
    printf( "Enter any uppercase letter :");
    scanf("%c",&upper);
    // Using tolower library function for conversion
    = tolower(upper);
    // Printing the converted lowercase letter
    printf("Lowercase letter = %c\n", lower);
    return 0;
}

