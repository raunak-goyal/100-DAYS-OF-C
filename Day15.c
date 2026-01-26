//Write a program to calculate the factorial of a number.
// #include<stdio.h>
// int main() {
//     int n;
//   int factorial= 1;  
//     printf("Enter n: ");
//     scanf("%d", &n);
//     for(int i=1;i<=n;i++){
//         factorial*=i;
//     }
// printf("factorial of %d is %d",n,factorial);
//     return 0;
// }
//Write a program to reverse a given number.
// Write a program to reverse a given number.
#include <stdio.h>

int main() {
    int n, rev = 0, remainder;

    printf("Enter n: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;         // Get the last digit
        rev = rev * 10 + remainder; // Add it to reversed number
        n = n / 10;                 // Remove last digit
    }

    printf("Reversed number = %d\n", rev);

    return 0;
}
