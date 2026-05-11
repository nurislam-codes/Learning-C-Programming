#include<stdio.h>
#include<ctype.h>// Required for toupper() function
int main()
{
    char lower,upper;
    // Inputting a lowercase letter from user
    printf( "Enter any lowercase letter :");
    scanf("%c",&lower);
    // Using toupper library function for conversion
    upper= toupper(lower);
    // Printing the converted uppercase letter
    printf("Uppercase letter = %c\n", upper);
    return 0;
}

