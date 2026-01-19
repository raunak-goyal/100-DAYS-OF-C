//Write a program to swap two numbers without using a third variable.
// #include<stdio.h>
// int main(){
// int x;
// int y;
// printf("enter x: ");
// scanf("%d",&x);
// printf("enter y:");
// scanf("%d",&y);
// printf("before swapping\n");

// printf("%d\n",x);
// printf("%d\n",y);
//  x = x + y;  
//  y = x - y; 
//  x = x - y;
// printf("after swapping\n");
// printf("%d\n",x);
// printf("%d\n",y);
// }

//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}