#include<stdio.h>
int main() {
    int n,i=2;
   printf("Enter a number :");
   scanf("%d",&n);
   while(i<=n/2){
    if(n%i==0){
        printf("This is not prime");
    }

   }
    return 0;
}