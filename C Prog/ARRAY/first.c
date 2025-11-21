// #include<stdio.h>
// int main(){
//     int marks[]= {90, 83, 91, 75, 82, 84};
//     int ave;
//     ave = marks[]/6;
//     return 0;
// }

#include <stdio.h>

int main() {
    int marks[] = {90, 83, 91, 75, 82, 84};
    int sum = 0;
    int ave;
    int size = sizeof(marks) / sizeof(marks[0]); // Calculate number of elements

    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }

    ave = sum / size;
    printf("Average: %d\n", ave);

    return 0;
}