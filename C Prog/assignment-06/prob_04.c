#include<stdio.h>
int main(){
    //Pattern
    // *********
    //  *******
    //   *****
    //    ***
    //     *

    for(int i=5; i>=1; i--){
        for (int j=1; j<=5-i; j++)
        {
            printf(" ");
        }
        for(int s=1; s<=2*i-1; s++){
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}