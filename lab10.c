#include <stdio.h>
int main(int argc, char const *argv[])
{ 
    int w;
    printf("enter the population :");
    scanf("%d",&w);
    int n_man = 52*w/100;
    int n_women = w-n_man;
    int n_ill_man=35*w/100;
    int ill_total = 48*w/100;
    int n_ill_women = ill_total-n_ill_man;

    

    printf("no. of men illiterate  : %d\n",n_ill_man);
    printf("no. of women illiterate : %d\n",n_ill_women );
    
}
