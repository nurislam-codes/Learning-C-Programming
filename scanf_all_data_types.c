// Practice: Handling multiple data types (int, float, double, char)
#include<stdio.h>
int main ()
{
    int num1;
    float num2;
    double num3;
    char ch;
    printf( "Enter your age= ");
    scanf( "%d",&num1);
    printf( "Enter your height =");
    scanf( "%f",&num2);
    printf( "Enter your weight= ");
    scanf( "%lf",&num3);
    printf( "Enter your blood group=");
    scanf( " %c",&ch);
    printf( "your age is %d old .",num1);
    printf( "your height is %.1f feet .",num2);
    printf( "your weight is %.2lf kg.",num3);
    printf( "your blood group is %c.",ch);
    return 0;

}
