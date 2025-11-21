#include<stdio.h>
int div(int a){
    if(a%3==0 && a%5==0){
        printf("Divide");
    }
    else {
         printf("Not");
    }
    return a;
}
int main(){
    int x,s;
    printf("enter");
    scanf("%d",&x);
    s = div(x);
    return 0;
}