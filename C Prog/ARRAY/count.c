#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int x=4;
    int count = 0;
    for(int i=0; i<7; i++){
        if(arr[i]>x){
        count+=1;
        printf("\n%d & %d",i+1,count);
        }
         
    }

    return 0;
}