#include<stdio.h>
void pnat();
int main(){
    int n =2;
     pnat(n);
    return 0;
}
void pnat(int n){
    if(n>0){
        pnat(n-1);
        printf("%d ",n);
    }
}