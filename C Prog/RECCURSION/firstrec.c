#include<stdio.h>
int f1();
int main(){
    int k;
    k = f1(4);
    printf("rec %d",k);
    return 0;
}
int f1(int n){
    int s;
    if(n==1) return 1;
    s = n +f1(n-1);
    return s;
}