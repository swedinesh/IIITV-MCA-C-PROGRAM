#include <stdio.h>
int main()
{
    /*
    Pattern

    *******
     *****
      ***
       *
      ***
     *****
    *******

    */

    //   *******
    //    *****
    //     ***
    //      *

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }
        for (int s = 1; s <= 2 * i - 1; s++)
        {
            printf("*");
        }
        printf("\n");
    }

    //   ***
    //  *****
    // *******

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3 - i; j++)
        {
            printf(" ");
        }
        for (int s = 1; s <= 2 * i + 1; s++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}