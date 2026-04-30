//practice built-in data types
#include<stdio.h>
int main()
{
   //Declaring integer for age
    int age=18;
    //Declaring float for weight
    float weight=55.8;
    //Declaring characters for blood group and sign
    char blood='B',sign='+';
    //Declaring double for height with high precision
    double height=170.1800;
    //Printing personalized message
   printf( "hello. My name is Md Nur Islam.\n");
   //Printing age using %d
    printf( "My age was =%d\n",age );
    //Printing blood group by combining two characters
    printf( "My blood group is =%c%c \n",blood,sign);
    //Printing weight with unit
    printf ( "My weight is = %.1f kg \n",weight);
    //Printing height using %lf for double
    printf ( "My height =%lf cm\n",height);
    return 0;
}
