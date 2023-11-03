#include <stdio.h>
int main()
{
    int n;
    printf(" enter number of rows  : ");
    scanf("%d", &n);
    int i=1;
    char char1 = 65;

    while (i<=n)
    {
        int j =1;
        while (j<=n-i)
        {
            printf(" ");
            j++;
        }
        int k =1;
        char1=char1+i-1;
        while (k<=i)
        {
            printf("%C",char1);
            k++;
            
        }
        int l =1;
        while (l<i)
        {
            printf("*");
            l++;
        }
        
        printf("\n");
        i=i+1;
    }
    
    

    return 0;}