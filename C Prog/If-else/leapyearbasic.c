#include<stdio.h>
int main() {
    int year;
    printf("Enter any year :");
    scanf("%d",&year);
    if(year%4==0){
        printf("Leap Year...!");
    }
    else{
        printf("NOT Leap Year...!");
    }
    return 0;
}