#include <stdio.h>
int main()
{
    int quantity;
    printf(" enter quantity you have purchased  : ");
    scanf("%d", &quantity);
    float price = quantity * 100;
    if (price > 1000)
    {

        printf("\nyou  eligible for discount ");
        printf("\nyou have got discount of 5%%  and new amount to be paid is %f  ", 90 * price / 100);
    }
    else
    {
        printf("\nyou are  not eligible for discount and your amount to be paid is %f", price);
    }

    return 0;
}
