#include<stdio.h>
int main(){
/* ....*
   ...**
   ..***
   .****
   *****
*/
for(int i=1; i<=5; i++){
    for(int j=1; j<=5-i; j++){
        printf(" ");
    }
    for(int a=1; a<=i; a++){
        printf("*");
    }
    printf("\n");
}
    return 0;
}