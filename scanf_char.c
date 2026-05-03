// Practice: Taking character input from user using scanf
#include<stdio.h>
int main()
{
  char ch;
    // Asking the user for a character
    printf( "Enter a character=" );
    // Taking character input from user using %c
    scanf( " %c",& ch);
    // Printing the entered character
    printf( "\n You entered this character=%c\n",ch);
    return 0;
}
