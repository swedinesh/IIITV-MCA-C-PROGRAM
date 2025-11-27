#include<stdio.h>
int fact();
int main(){
    int a;
    printf("Enter Number :");
    scanf("%d",&a);
    printf("Facctorial = %d",fact(a));
    return 0;
}
int fact(int n){
    if(n==0) return 1;
    return  n*fact(n-1);
}