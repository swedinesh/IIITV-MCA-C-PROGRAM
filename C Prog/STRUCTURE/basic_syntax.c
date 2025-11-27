#include<stdio.h>
int main(){
   struct dinesh{
    int head;
    int body;
    int kd;
    char rank;
   };
    
   struct dinesh pubg;
   pubg.head=50;
   pubg.body=50;
   pubg.kd;
   printf("Enter Your KD :");
   scanf("%d",&pubg.kd);
   pubg.rank='D';
   printf("%d\n",pubg.head);
   printf("%d\n",pubg.body);
   printf("%d\n",pubg.kd);
   printf("%c",pubg.rank);
    struct pokemon{
        int attack;
        int hp;
        int speed;
        char tier;
    }pikachu,chizard;
    
    pikachu.attack=40;
    pikachu.hp=50;
    pikachu.speed=80;
    pikachu.tier='A';
    
    chizard.attack=130;
    chizard.hp=100;
    chizard.speed=100;
    chizard.tier='S';
    
    return 0;
}