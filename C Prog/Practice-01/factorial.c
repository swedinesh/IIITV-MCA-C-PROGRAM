#include<stdio.h>
int main() {
    int n,fact=1;
    printf("Enter a Vlue of any positove integre : ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    printf("Factorial : %d",fact);
    return 0;
}