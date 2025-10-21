#include<stdio.h>
int main() {
    int row,colm;
    printf("Enter number of Row :");
    scanf("%d",&row);
    printf("Enter number of Column :");
    scanf("%d",&colm);
    for(int i=1; i<=row; i++){
        for(int j=1; j<=colm; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}