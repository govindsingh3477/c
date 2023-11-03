#include <stdio.h>
int main(int argc, char const *argv[])
{ 
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int sum=0;
    int i=0;
    int dig;
    while (n>10)
    {
        dig =n%10;
        sum=sum+dig;
        n=n/10;
    }
    sum=sum+n;
    printf("\nthe sum of the digits is %d",sum);
    
}
