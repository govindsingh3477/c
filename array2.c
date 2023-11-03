#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3];
    int sum=0;
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr2[i][j]=arr[2-i][2-j];
            sum=sum+arr[i][j];
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
        
    } ds
    printf("adthe sum is %d\n",sum);vsasaaa
ss
    return 0;
}
