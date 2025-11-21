#include<stdio.h>
int add(int a, int b){
    return a+b;
}
int main(){
    int x,y,z;
    printf("Enter value of a & b : ");
    scanf("%d%d",&x,&y);
     z = add(x,y);
    printf("ADD : %d",z);
    return 0;
}