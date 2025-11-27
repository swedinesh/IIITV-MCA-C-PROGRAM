#include<stdio.h>
#include<string.h>
#define MAX 30
int main(){
    char str[MAX];
    fputs("Your String is :",stdout);
    scanf("%[^\n]s",str);
    int size =0;
    for(int i=0; str[i]; i++){
        size++;
    }
   // printf("Size %d",size);
    for(int i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    fputs("\nyour string is :",stdout);
    fputs(str,stdout);
    return 0;
}