#include<stdio.h>
int main(){
    int a = 8;
    int* x = &a;
    int *xz = NULL;
//    int p = 5;
//      *x = p;
    printf("%p\n",x);
    printf("%p\n",&a);
    printf("%p\n",&xz);
  //  printf("%p\n",&x);
  //  printf("%d\n",*x);
   // printf("%d\n",p);

    return 0;
}