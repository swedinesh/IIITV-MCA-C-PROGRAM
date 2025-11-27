// #include<stdio.h>
// int main(){
//     FILE *fptr = fopen("danish.txt", "a");
//     fprint("hello dunia");
//     return 0;
// }

#include <stdio.h>

int main() {
    FILE *fptr = fopen("danish.txt", "a");  // open file in append mode
    if (fptr == NULL) {                     // check if file opened successfully
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "Danish Zayn\n");         // write to file
    fclose(fptr);                           // close the file
    return 0;
}
