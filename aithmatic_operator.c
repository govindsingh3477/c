#include <stdio.h>
int main()
{
    
    int a=35 , b=15,c;

    //Unary Arithmetic Operators
    printf("the addition of a and b is %d ", a+b);
    printf("\nthe substraction  of a and b is %d ", a-b);
    printf("\nthe mutltiplication of a and b is %d ", a*b);
    printf("\nthe quotient of a by b is %d ", a/b);
    printf("\nthe remainder of a by b is %d ", a%b);
    // post increment
    c=a++;
    printf("\nthe value of c is %d",c);
    printf("\nthe value of a is %d",a);
    //pre increment
    c=++b;
    printf("\nthe value of c is %d",c);
    printf("\nthe value of b is %d",b);
    //pre decreement
    c=--b;
    printf("\nthe value of c is %d",c);
    printf("\nthe value of b is %d",b);
    // post decreement
    c=b--;
    printf("\nthe value of c is %d",c);
    printf("\nthe value of b is %d",b);

    return 0;
}
