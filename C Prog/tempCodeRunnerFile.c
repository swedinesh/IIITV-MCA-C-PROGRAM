#include<stdio.h>
int main(){
    char str[50];
    printf("Enter Chutiyaapa : ");
    for(int i=0; i<=49; i++){
        scanf("%c",&str[i]);
    }
    for(int i=0; i<=49; i++){
        printf("%c",str[i]);
    }
    return 0;
}