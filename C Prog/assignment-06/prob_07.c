#include<stdio.h>
int main(){
    //pattern
    /*

    *        *
    **      **
    ***    ***
    ****--****
    ***    ***
    **      **
    *        *

    */

    
    int n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        for(int k=2*(n+1)-2*i;k>=1;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

     for(int i=1; i<=3; i++){
       for(int j=1; j<=4-i; j++){
        printf("*");
       } 
       for(int k=1; k<=2+2*i; k++){
        printf(" ");
       }
       for(int j=1; j<=4-i; j++){
        printf("*");
       }
        printf("\n");
    }

    return 0;
}