/*

_ _ _ $ _ _ _
_ _ $ $ $ _ _
_ $ $ $ $ $ _
$ $ $ $ $ $ $

*/

#include<stdio.h>
int main() {
    for(int i=1; i<=5; i++){
     for(int j=1; j<=5-i; j++){
        printf("  ");
     }   
     for(int s=1; s<=2*i-1; s++){
        printf("$ ");
     }
      printf("\n");
    }
    return 0;
}