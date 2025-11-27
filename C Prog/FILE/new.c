#include<stdio.h>
int main(){
    // FILE* ptr = fopen("danish.txt","r");
    // char str[50];
    // while(fgets(str,50,ptr)!=NULL){
    //     printf("%s",str);
    // }
    FILE* ptr = fopen("babaDon.txt","w");
    char data[]="Bol bachcha kya samasya hai  bolo ?";
    fputs(data,ptr);
    fclose(ptr);
    return 0;
}