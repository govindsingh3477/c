#include <stdio.h>
int main()
{
    int age ;
    printf("enter your age :");
    scanf("%d", &age);
    if (age>18)
    {
        printf("you are eligible ");
    }
    else{
        printf("you're not eligible");
    }
    
    return 0;
}
