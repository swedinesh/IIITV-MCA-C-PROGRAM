#include <stdio.h>
int main()
{
    int day;
    printf("Please Number of day :");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednessday");
        break;
    case 5:
        printf("Thusday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;

        default:  printf("Invalid Input !");
       
    }

    return 0;
}