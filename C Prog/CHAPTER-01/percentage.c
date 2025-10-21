#include<stdio.h>
int main() {
     int ma,ph,ch,eng,hindi;

    printf("Enter marks in Mathematics: ");
    scanf("%d", &ma);
    printf("Enter marks in Physics: ");
    scanf("%d", &ph);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &ch);
    printf("Enter marks in English: ");
    scanf("%d", &eng);
    printf("Enter marks in Hindi: ");
    scanf("%d", &hindi);
    
    float percentage = (ma + ph + ch + eng + hindi) / 5.0;
    printf("Percentage: %f\n", percentage);

    return 0;
}