#include<stdio.h>
int main(){
    int arr[2][2]={1,1,1,1};
    int arr1[2][2]={1,1,1,1};
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            arr[i][j] + arr1[i][j];
        }
    }
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ",arr[i][j] + arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}