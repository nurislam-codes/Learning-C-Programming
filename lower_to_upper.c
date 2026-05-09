#include<stdio.h>
int main()
{
    char lower;
    // Prompting user to enter a lowercase letter
    printf( "Enter any lowercase letter : ");
    scanf( "%c",&lower);
    // Converting lowercase to uppercase by subtracting 32
    // For example: 'a' (97) - 32 = 'A' (65)
    printf("The uppercase letter : %c",lower-32);
    return 0;
}

