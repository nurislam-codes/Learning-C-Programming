#include<stdio.h>
int main()
{
    char upper;
    // Prompting user to enter a uppercase letter
    printf( "Enter any uppercase letter : ");
    scanf( "%c",&upper);
    // Converting uppercase to lowercase by adding 32
    // For example: 'A' (65) + 32 = 'a' (97)
    printf("The lowercase letter : %c",upper+32);
    return 0;
}

