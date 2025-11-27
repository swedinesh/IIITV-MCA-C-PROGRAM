#include<stdio.h>
int main(){
    int a[6],sum=0;
    float ave;
    for(int i=0; i<=5; i++)
    scanf("%d",&a[i]);
    for(int i=0; i<=5; i++)
    sum += a[i];
    ave = sum/6.0;
    printf("Percentage : %f",ave);
    return 0;
}