#include <stdio.h>
int main()
{
    
    while (0<1)
    {
        printf("\n enter 1 for circle \n 2 for squar \n 3 for rectangle \n");
        printf("enter input :");
        int n;
        scanf("%d",&n);
        if (n==1)
        {
            printf("enter radius : ");
            int r;
            scanf("%d",&r);
            float area_circle = 3.14*r*r;
            printf("area of the circle is %f", area_circle );
        }
        else if(n==2){
            printf("enter side : ");
            int a;
            scanf("%d",&a);
            int area_squar = a*a;
            printf("area of squar is %d", area_squar);
        }
        else if(n==3){
            printf("enter length  : ");
            int b,c;
            scanf("%d",&b);
            printf("enter width  : ");
            scanf("%d",&c);
            int area_rect = b*c;
            printf("area of rect is %d", area_rect);
        }
        else{
            printf("option is wrong \n");
        }
        
    
    }
    
    return 0;
}
