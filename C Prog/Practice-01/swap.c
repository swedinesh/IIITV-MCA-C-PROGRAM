#include<stdio.h>
int main() {

    printf("Before swapping ..!\n");
    int a,b;
    printf("Enter value of a :");
    scanf("%d",&a);
     printf("Enter value of b :");
    scanf("%d",&b);

     printf("After swapping ..!\n");

     b = a + b; // 10 + 20 = 30
     a = b - a; // 30 - 10 = 20
     b = b - a; // 30 - 20 = 10

     printf("Value of a : %d",a);
     printf("\nValue of b : %d",b);
    
return 0;
}