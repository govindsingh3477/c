#include<stdio.h>

int main(int argc, char const *argv[])
{
    int EXIT = 0;
    int x,y;
    char resp;
    while(1){
        printf("Enter num1: ");
        scanf("%d",&x);
        printf("Enter num2: ");
        scanf("%d",&y);
        printf("%d + %d = %d\n",x,y,x+y);
        printf("You want to exit?");
        
    }
    printf("Bye !\n");
    return 0;
}
