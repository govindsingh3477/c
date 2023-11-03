#include <stdio.h>
int main()
{ 
    int w,n10,n50,n100;
    printf("enter the withdrawel amount :");
    scanf("%d",&w);
    n100=w/100;
    w=w%100;
    n50=w/50;
    w=w%50;
    n10=w/10;
    w=w%10;
    
    
    

    printf("note of 10 : %d\n",n10);
    printf("note of  50 : %d\n",n50 );
    printf("note of  100 : %d\n",n100);
    
}
