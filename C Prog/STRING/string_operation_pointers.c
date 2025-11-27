#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "kuchh";
    int x = strlen(str);
    printf("%d\n", x);
    char s1[] = "Rohit Raj";
    char s2[10];
    strcpy(s2, s1);
    s2[0] = 'M';
    printf("%s\n", s2);
    char x1[] = "Dinesh";
    char x2[] = "Kushwaha";
    strcat(x1,x2);
    printf("%s\n",x1);
        return 0;
}