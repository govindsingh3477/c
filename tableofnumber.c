#include <math.h>
int main()
{   int a,i;
    printf("enter the number you want table of :");
    scanf("%d",&a);
    for(i=1 ; i<=10;i++ ) {
        printf("%d*%d=%d \n",i,a,i*a);
    }
    return 0;
}
