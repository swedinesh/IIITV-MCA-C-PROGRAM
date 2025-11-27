#include <stdio.h>
int main()
{
    int x;
    float a, r, l, w;
    printf("Enter Your Choice :");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Welcome to CIRCLE world enter your RADIUS :");
        scanf("%f", &r);
        a = 3.14 * r * r;
        printf("Circle Area is = %f Units", a);
        break;
    case 2:
        printf("Welcome to RACTANGLE world enter your L & W :");
        scanf("%f%f", &l, &w);
        a = l * w;
        printf("Rectangle Area is = %f Units", a);
        break;
    default:
        printf("default !");
    }
    return 0;
}