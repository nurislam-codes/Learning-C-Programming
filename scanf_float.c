// Practice: Taking float input from user using scanf
#include<stdio.h>
int main()
{
   // Declaring a float variable to store weight
    float weight;
    // Asking the user for their weight
    printf( "Inter your weight=");
    // Taking float input from user using %f
    scanf( "%f",&weight);
    // Printing the weight with 1 decimal point
    printf( "your weight is = %.2f",weight);
    return 0;
}

