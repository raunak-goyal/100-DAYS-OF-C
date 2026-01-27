// //Write a program to check if a number is an Armstrong number
// #include<stdio.h>
// #include<math.h>
// int main(){
// int n,rem,temp,dig=0;
//     int sum = 0;

// printf("enter n: ");
// scanf("%d",&n);
// temp =n;
// while(temp!=0){
// dig++;
// temp/=10;
// }
// temp = n;
//     while (temp != 0) {
//         rem = temp % 10;
//         sum += pow(rem, dig);
//         temp /= 10;
//     }

// if (sum == n)
//         printf("%d is an Armstrong number.\n", n);
//     else
//         printf("%d is not an Armstrong number.\n", n);

//     return 0;
// }

//Q34: Write a program to check if a number is prime.
#include <stdio.h>

int main() {
    int n, isPrime = 1;  

    printf("Enter n: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Not a prime number.\n");
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime == 1)
            printf("It is a prime number.\n");
        else
            printf("Not a prime number.\n");
    }

    return 0;
}
