#include<stdio.h>
int main() {
    int n;
    printf("Enter a Value :");
    scanf("%d",&n);

    if(n<0){
        n*=(-1);
    }

    printf("This is absolute value :%d",n);
    return 0;
}