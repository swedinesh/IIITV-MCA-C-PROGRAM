#include<stdio.h>
int main() {
    int n,a,d;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf("Enter First term : ");
    scanf("%d",&a);
    printf("Enter Difference 'd': ");
    scanf("%d",&d);
    //logic 
    for( int i=1; i<=n; i++){
        printf("%d ",a);
        a+=d;
    }
    return 0;
}