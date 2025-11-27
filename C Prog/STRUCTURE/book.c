#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        int noofpage;
        int price;
        char name[40];
    }ishq;
    strcpy(ishq.name,"Mutthi Wala Ishq");
    ishq.noofpage = 101;
    ishq.price = 99;
    printf("%s\n",ishq.name);
    printf("%d\n",ishq.noofpage);
    printf("%d\n",ishq.price);
    return 0;
}