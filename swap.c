#include <stdio.h>
int main()
{   int num1 ;
    printf("enter first num ; ");
    scanf("%d" , &num1);
    int num2 ;
    printf("enter second  num ; ");
    scanf("%d" , &num2);
    int temp = num1;
    num1=num2;
    num2=temp;
    printf("the new num1 is %d", num1);
    printf("\nthe new num2 is %d", num2);
    
    return 0;
}
