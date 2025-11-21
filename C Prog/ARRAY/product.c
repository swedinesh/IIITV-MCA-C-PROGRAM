#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int pro = 1;
    for(int i=0; i<=4; i++){
        pro = pro*arr[i];
    }
    printf("Product : %d",pro);
    return 0;
}