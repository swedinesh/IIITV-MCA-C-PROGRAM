#include<stdio.h>
int main() {
    int num,sum=0;
    printf("Enter any number :");
    scanf("%d",&num);
    int digit;
    while(num>0){
       digit = num % 10;
       sum+=digit;
       num/=10; 
    }
        printf("Sum : %d",sum);
    return 0;
}