#include<stdio.h>
int main(){
    char str[20];
    puts("Enter string :");
    // gets(str);
    // puts("tumhari string :");
    // puts(str);
    fgets(str,sizeof(str),stdin);
    puts(str);
  return 0;
}