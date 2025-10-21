#include<stdio.h>
void english(){
    printf("HEL-oh\n");
}
void russian(){
    printf("ZDRAH-stvooy-tyeh\n");
    english();
}
void japanese(){
    printf("kon-nee-chee-wah\n");
    russian();
}
void german(){
    printf("HAH-loh / GOO-ten tahg\n");
    japanese();
}
int main(){
    german();
return 0;
}