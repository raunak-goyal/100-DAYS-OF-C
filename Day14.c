//Write a program to print the sum of the first n odd numbers.
// #include <stdio.h>

// int main() {
//     int n, sum = 0;
//     printf("Enter n: ");
//     scanf("%d", &n);

//     for (int i = 1; i <= 2 * n - 1; i += 2) { // loop through first n odd numbers
//         sum += i;
//     }

//     printf("Sum of first %d odd numbers is %d\n", n, sum);
//     return 0;
// }
//Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main() {
    int n;
    long long product = 1;  

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) { 
        product *= i;
    }

    printf("Product of even numbers from 1 to %d is %lld\n", n, product);

    return 0;
}
