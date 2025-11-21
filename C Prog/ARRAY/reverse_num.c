#include<stdio.h>
int main(){
    int n,rem,rv=0;
    printf("Enter a Number :");
    scanf("%d",&n);
    while(n>0){
        rem = n%10;
        rv = rv*10 + rem;
        n = n /10;
    }
    printf("Reverse : %d",rv);
}