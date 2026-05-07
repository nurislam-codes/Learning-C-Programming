/* Project: Checking Memory Size of Data Types
   Goal: To understand how many bytes each data type occupies in RAM.
*/
#include<stdio.h>
int main ()
{
   // Variable declarations
    int i;
    float f;
    double d;
    char c;
    // Printing the sizes using sizeof() operator
    printf( " size of int:%d bytes\n",sizeof(i));
    printf( " size of float:%d bytes\n",sizeof(f));
    printf( " size of double:%d bytes\n",sizeof(d));
    printf( " size of char:%d bytes\n",sizeof(c));
    return 0;
}

