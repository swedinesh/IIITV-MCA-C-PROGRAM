// 100 50 25...
#include<stdio.h>
int main() {
    float a=100;
    for(int i=1; a>0; i++){
        printf("%d ",a);
        a = a*(1/2);
    }
    return 0;
}