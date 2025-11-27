#include<stdio.h>
int fib(int x){
    if(x==1 || x==2) return 1;
    return fib(x-1)+fib(x-2);
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", fib(i));
    }

    printf("Fibonacci Number : %d",fib(n));
    return 0;
}