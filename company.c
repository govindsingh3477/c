#include <stdio.h>
int main(int argc, char const *argv[])
{   int service_year ,salary; 
    printf("enter the yaer of service : ");
    scanf("%d", &service_year);
    
    if (service_year>5)
    {
        printf("\n you are eligible for bonus enter your salary : ");
        scanf("%d", &salary);
        float new_salary = 105*salary/100;
        printf("\n your net bonus amount is \n %f",new_salary);
    }
    else{
        printf("\nyou are not eligible for bonus ");
    }
    
    return 0;
}
