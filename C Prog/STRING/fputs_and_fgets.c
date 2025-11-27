/*
Syntax of fgets & fputs
fgets(string name, sizeof(string),stdin);
                 &
fputs(string name, stdout);                 
*/

#include<stdio.h>
int main(){
    char str[20];
    fputs("Enter your string : ", stdout);
    fgets(str,sizeof(str),stdin);
    fputs(str,stdout);
    return 0;
}