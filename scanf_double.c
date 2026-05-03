// Practice: Taking double  input from user using scanf
#include<stdio.h>
int main()
{
    double num;
    // Asking the user to enter a large decimal number
    printf( "Enter a decimal number=");
    // Using %lf to take double input from the user
    scanf("%lf",&num);
    // Printing the decimal number
    // Using %.2lf to show only 2 digits after the decimal point
    printf("\nYou entered=%.2lf \n",num);
    return 0;
}
