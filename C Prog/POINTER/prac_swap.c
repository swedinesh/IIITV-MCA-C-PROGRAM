#include<stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return;
}
int main(){
    int a,b;
    printf("Enter A & B : ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
     printf("a :%d\n",a);
    printf("b :%d\n",b);
    return 0;
}