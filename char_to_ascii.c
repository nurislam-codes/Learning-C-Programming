#include<stdio.h>
int main()
{
   // Declaring a character variable
    char ch;
    // Prompting user to input a character
    printf( "Enter any character:");
    scanf( "%c",&ch);
   // Printing the corresponding ASCII value using %d
    printf( "The ASCII value=%d\n",ch);
    return 0;
}

