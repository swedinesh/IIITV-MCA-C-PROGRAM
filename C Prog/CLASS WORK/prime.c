#include<stdio.h>
// int prime(int x, int y){
//    int count = 0;
//    for(int i=2; i<=x; i++){
//     if(x%i!=0){
//         count++;
//     }
//    }
// return count;
// }
// int main(){
//     int m,n,value;
//     printf("M to N range :");
//     scanf("%d%d",&m,&n);
//      value =prime(m,n);
//      printf("Count = %d",value);
//     return 0;
// }

int isPrime(int num) {
    //if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int countPrimes(int m, int n) {
    int count = 0;
    for (int i = m; i <= n; i++) {
        if (isPrime(i))
            count++;
    }
    return count;
}

int main() {
    int m, n, value;
    printf("Enter range M to N: ");
    scanf("%d%d", &m, &n);
    value = countPrimes(m, n);
    printf("Count = %d\n", value);
    return 0;
}

