// Pass by value and pass by reference (*Pointer)
#include <stdio.h>
void swap(int a, int b)
{
    a = a + b; // 10 + 20 = 30
    b = a - b;
    a = a - b;
    // printf("a = %d & b = %d\n",a,b);
    return;
}
int main()
{
    int a, b;
    printf("enter a & b :");
    scanf("%d%d", &a, &b);
    // a = a + b; // 10 + 20 = 30
    // b = a - b;
    // a = a - b;
    printf("a:%d & b:%d", b, a);
    swap(a, b);
    return 0;
}

// #include <stdio.h>

// int getNumber() {
//     return 42;
// }

// int main() {
//     int num = getNumber();  // Function call
//     printf("Number is: %d\n", num);
//     return 0;
// }
// #include <stdio.h>

// void displaySum(int a, int b) {
//     printf("Sum is: %d\n", a + b);
// }

// int main() {
//     displaySum(10, 20);  // Function call
//     return 0;
// }
