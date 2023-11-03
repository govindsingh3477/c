#include <stdio.h>
int main()
{
    int n;
    printf(" enter number of rows  : ");
    scanf("%d", &n);
    int i=1;

    while (i<=n)
    {
        int j =1;
        while (j<=n-i+1)
        {
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
    
    

    return 0;}