#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{ 
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    int num=0;
    int i=0;
    int dig;
    while (n!=0)
    {
        dig =n%10;
        dig++;
        num=num + dig*pow(10,i);
        i++;
        n=n/10;
    }
    
    printf("\nthe new number is  %d",num);
    
}
