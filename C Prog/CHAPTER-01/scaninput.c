#include<stdio.h>
int main() {
    float x;
    printf("Enter the float value : ");
    scanf("%f",&x);
    int y = x;
    float z = x - y;
    printf("Jo float tha ab bhi bo float hai : %f",z);

    return 0;
}