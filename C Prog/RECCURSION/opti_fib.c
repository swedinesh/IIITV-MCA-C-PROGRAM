#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int a = 0, b = 1, next;
    printf("Fibonacci Series up to %d terms:\n", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", b);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\nFibonacci Number : %d\n", a);
   // printf("\nFibonacci Number : %d\n", b);
    return 0;
}