#include<stdio.h>
int main() {
    // Declare a variable to hold the input
    float r;

    // Prompt the user for input
     printf("Enter an integer: ");
     scanf("%f", &r);

     float area = 3.14 * r * r;

    // Print the area of the circle
    printf("Area of the circle: %f\n", area);
    return 0;
}