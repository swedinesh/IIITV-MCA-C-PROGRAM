#include<stdio.h>
int main(){
//     int n=5;
//    int arr[n],mul,inc;
//    printf("Array mai apka Swagat Hai \n");
//    for(int i=0; i<n; i++){
//     printf("Enter value of index %d : ",i+1);
//     scanf("%d",&arr[i]);
//    }
//    //odd multiple
//    for(int i=0; i<n; i++){
//     if(i%2!=0){
//         mul = 2*arr[i];
//         printf("\nOdd indexed %d Elelment : %d",i,mul);
//     }
//    }
//    printf("\nEven On");
//    //even increase by 10
//    for(int i=0; i<n; i++){
//     if(i%2==0){
//         inc = 10+arr[i];
//         printf("\nEven indexed %d Elelment : %d",i,inc);
//     }
//    }
int arr[] = {1,2,3,4,5,6,7}; // |0|1|2|3|4|5|6|
for(int i=0; i<=6; i++){
    if(i%2!=0) arr[i] = arr[i]*2;
    else arr[i] = arr[i]+10;
}
for(int i=0; i<=6; i++){
    printf("%d ",arr[i]);
}
    return 0;
}