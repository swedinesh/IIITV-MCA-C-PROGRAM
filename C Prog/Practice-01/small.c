
#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter a, b, c, d: ");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a < b && a < c && a < d)
        printf("A is strictly smallest = %d\n", a);
    else if (b < a && b < c && b < d)
        printf("B is strictly smallest = %d\n", b);
    else if (c < a && c < b && c < d)
        printf("C is strictly smallest = %d\n", c);
    else if (d < a && d < b && d < c)
        printf("D is strictly smallest = %d\n", d);
    else
        printf("No unique smallest value (some values are equal)\n");

    return 0;
}



