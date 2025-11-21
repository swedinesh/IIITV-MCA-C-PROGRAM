#include<stdio.h>
int main(){
    int n,r,fact=1;
    int factr=1, factnr=1, s,com;
    printf("Enter n & r :");
    scanf("%d%d",&n,&r);
     s = n - r;
    for(int i=1; i<=n; i++){
        fact = fact*i;
    }
    for(int i=1; i<=r; i++){
        factr = factr*i;
    }
    for(int i=1; i<=s; i++){
        factnr = factnr*i;
    }
    printf("f1 = %d , f2 = %d, f3 = %d \n",fact,factr,factnr);
      com = fact/(factr*factnr);
      printf("Combination : %d",com);
    return 0;
}