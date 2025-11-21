#include<stdio.h>
int main(){
    printf("Sorting Karenge...\n");
    int arr[] = {10,30,40,70,20,10,11,9,90};
    int max=arr[0];
    for(int i=0; i<9; i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    printf("%d",max);
    return 0;
}