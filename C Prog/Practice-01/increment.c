#include<stdio.h>
int main() {

    // int x = 5;
    // printf("Increment : %d",x++);
    // printf("\nIncrement 1 : %d",--x);

    int radius;
    printf("Enter the value of Radius :");
    scanf("%d",&radius);

    float area = 3.14*radius*radius;
    printf("Area of Circle : %f",area);

    return 0;
}