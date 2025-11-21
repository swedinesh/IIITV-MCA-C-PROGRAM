#include<stdio.h>
int main(){
    int arr[] = {1,3,5,7,4,11};
    int size = sizeof(arr)/sizeof(arr[0]);
    int isrep = 0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<=size; j++){
            if(arr[i]==arr[j]){
                isrep = 1;
                break;
            }
        }
        if(isrep==1){
            break;
        }
    }
    if(isrep==1) printf("yes");
    else printf("no");

    return 0;
}
// #include<stdio.h>

// int main(){
//     int arr[] = {10, 30, 40, 90, 80, 16, 11, 9, 70};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int isRepeated = 0;  // Flag to check repetition

//     for(int i = 0; i < size; i++){
//         for(int j = i + 1; j < size; j++){
//             if(arr[i] == arr[j]){
//                 isRepeated = 1;  // Match mila
//                 break;
//             }
//         }
//         if(isRepeated){
//             break;
//         }
//     }

//     if(isRepeated){
//         printf("Yes\n");  // Repeat mila
//     } else {
//         printf("No\n");   // Sab unique the
//     }

//     return 0;
// }

