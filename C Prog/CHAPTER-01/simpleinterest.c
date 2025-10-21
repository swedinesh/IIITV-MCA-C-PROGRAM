#include<stdio.h>
int main() {

    float p,r,t;
    printf("Enter value of Principle :");
    scanf("%f",&p);
    printf("Enter value of Rate :");
    scanf("%f",&r);
    printf("Enter value of Time :");
    scanf("%f",&t);

    float s = (p*r*t)/100;
    printf("Simple Interest :%f",s);
    
    float total = p + s;

    printf("\nTotal Amount :%f",total);
    
    return 0;
}