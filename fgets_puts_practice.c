// Topic: Safe string handling with fgets() and puts()
#include<stdio.h>
int main ()
{
     char name[50];
     // Prompting the user to enter their full name
     printf( "Enter your name=");
     // Using fgets for safe string input (prevents buffer overflow)
     fgets(name,sizeof(name),stdin);
     // Displaying a greeting message
     printf("hello ");
     // Printing the stored name using puts
     puts( name);
     return 0;
}


