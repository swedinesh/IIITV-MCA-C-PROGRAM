#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int a = 0;
    for (int i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
        a = 1;
        break;
        }
    }
    if(n==1) printf("KUCHH NHI BSDK");
    else if(a==0) printf("Prime");
    else printf("Composite");
    return 0;
}