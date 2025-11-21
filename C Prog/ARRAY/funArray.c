#include<stdio.h>
int fun(int* a){
    return a;
}
int main(){
    int a = 7;
    int *x = &a;
    printf("%d",fun(x));
    return 0;
}