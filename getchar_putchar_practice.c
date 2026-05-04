// Topic: Using getchar() and putchar() for character
#include<stdio.h>
int main ()
{
     char character;
     // Prompting the user to enter a character
     printf( "Enter any charcater=");
     //Taking input using getchar
     character =getchar();
     printf( "you entered:");
     // Displaying output using putchar
     putchar( character);
     return 0;
}


