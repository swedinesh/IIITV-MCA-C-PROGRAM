#include<stdio.h>
int main(){
    int x=12,set=0;
   int arr[] ={1,2,3,4,5,6,7,8};
   int eq=0, count=0;
   for(int i=0; i<8; i++){
    for(int j=i+1; j<8; j++){
        if(arr[i]+arr[j]==x){
            printf("(%d,%d)\n",arr[i],arr[j]);
            count+=1;
        }
    }
   }
   printf("count = %d\n",count);

   for(int i=0; i<8; i++){
    for(int j=0; j<8; j++){
            printf("(%d,%d) ",arr[i],arr[j]);
            set++;
    }
   }
   printf("sets = %d\n",set);
    return 0;
}