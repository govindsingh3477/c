#include <stdio.h>
int main()
{
    int r;
    printf("enter the radius of circle :");
    scanf("%d" , &r);
    float a = 3.14*r*r;
    float c = 3.14*r*2;
    printf("the area of the circle is %f", a);
    printf("\nthe cicumference of the circle is %f", c);
    return 0;
}

