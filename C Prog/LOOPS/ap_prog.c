#include<stdio.h>
int main() {
    int a,d,n,an;
    printf("Enter First Term of AP :");
    scanf("%d",&a);
     printf("Enter Difference of AP :");
    scanf("%d",&d);
     printf("Enter Number of terms AP :");
    scanf("%d",&n);
 // logic
      an = a + (n-1)*d;
      for(int i=a; i<=an; i+=d){
          printf("%d ",i);
      }

    return 0;
}