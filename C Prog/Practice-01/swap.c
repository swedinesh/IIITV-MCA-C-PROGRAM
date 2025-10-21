#include<stdio.h>
int main() {

    printf("Before swapping ..!\n");
    int a,b;
    printf("Enter value of a :");
    scanf("%d",&a);
     printf("Enter value of b :");
    scanf("%d",&b);

     printf("After swapping ..!\n");

     b = a + b;
     a = b - a;
     b = b - a;

     printf("Value of a : %d",a);
     printf("\nValue of b : %d",b);
    
return 0;
}