#include<stdio.h>
int main(){
    int arr[] = {6,1,7,3,2,5,4,8,9,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
   // printf("%d",size);
   int vis[11]={0};
      for(int i=0; i<size; i++){
           vis[arr[i]]=1;
           
      }            
    return 0;
}