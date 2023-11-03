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
        while (j<=n-i)
        {
            printf(" ");
            j++;
        }
        int k =1;
        while (k<=n)
        {
            if(k==n+1-i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
            k++;
        }
        // int l =1;
        // while (l<=n-i)
        // {
        //     printf("*");
        //     l++;
        // }
        // int m =1;
        // while (m<=n)
        // {
        //     if(m==n+1-i)
        //     {
        //         printf(" ");
        //     }
        //     else{
        //         printf(" ");
        //     }
            
        //     m++;
        // }
        // int l =1;
        // while (l<i)
        // {
        //     printf("*");
        //     l++;
        // }
        
        printf("\n");
        i++;
    }
    
    

    return 0;}