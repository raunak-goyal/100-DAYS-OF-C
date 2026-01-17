//Write a program to input two numbers and display their sum.
//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>

int main()
{
    int a = -1;
    int b = 5;

    int sum = a + b;
    int diff = a - b;
    int pro = a * b;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", diff);
    printf("Product = %d\n", pro);

    if (b == 0)
        printf("Quotient = NA (division by zero)\n");
    else {
        int div = a / b;
        printf("Quotient = %d\n", div);
    }

    return 0;
}
