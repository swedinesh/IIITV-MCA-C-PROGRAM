#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricket{
     char fname[15];
     char lname[15];
     int age;
     int match;
     int ave;
    }play;
    play arr[3];
    for(int i=0; i<3; i++){
        scanf("%s",arr[i].fname);
        scanf("%s",arr[i].lname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].match);
        scanf("%d",&arr[i].ave);

    }
       
    for(int i=0; i<3; i++){
        printf("Name: %s %s\n",arr[i].fname,arr[i].lname);
        printf(" Age: %d\n",arr[i].age);
        printf("Match: %d\n",arr[i].match);
        printf("Average: %d\n",arr[i].ave);
    }
    return 0;
}