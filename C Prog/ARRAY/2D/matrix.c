#include<stdio.h>
int main(){
    int a[3][3]={1,0,0,0,1,0,0,0,1};
    for(int i=0; i<=2; i++){
        for(int j=0; j<=2; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}