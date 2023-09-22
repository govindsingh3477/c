#include <stdio.h>
int main()
{   int num1 ;
    printf("enter  divident ; ");
    scanf("%d" , &num1);
    int num2 ;
    printf("enter deviser ; ");
    scanf("%d" , &num2);
    int remain = num1%num2 ;
    int quot = (num1 - remain)/num2;
    printf("the remainder is %d"  , remain);
    printf("\nthe quotient is %d"  , quot);
    
    return 0;
}