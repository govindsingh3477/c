#include <stdio.h>
int main(int argc, char const *argv[])
{   int total_classes ,attended; 
    printf("ente the total classes held : ");
    scanf("%d", &total_classes);
    printf("\n enter total classe you have attended : ");
    scanf("%d", &attended);
    float attended_percentage = attended*100/total_classes;
    if (attended_percentage<75)
    {
        
        printf("\nyou are not eligible for exam ");
        printf("\nyou have just attended %f %% " , attended_percentage);
    }
    else{
        printf("\nyou are eligible for exam ");
        printf("\nyou have attended  %f %%" , attended_percentage);
    }
    
    return 0;
}
