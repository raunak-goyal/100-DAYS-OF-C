//Write a program to convert temperature from Celsius to Fahrenheit.
// #include <stdio.h>

// int main() {
//     float celsius, fahrenheit;
//     printf("Enter temperature in Celsius: ");
//     scanf("%f", &celsius);
//     fahrenheit = (celsius * 9 / 5) + 32;
//     printf("Temperature in Fahrenheit = %.2f\n", fahrenheit);

//     return 0;
// }
//Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main() {
int x;
int y;
printf("enter x: ");
scanf("%d",&x);
printf("enter y:");
scanf("%d",&y);
int z;
printf("before swapping");

printf("%d\n",x);
printf("%d\n",y);
z=x;
x=y;
y=z;
printf("after swapping");

printf("%d\n",x);
printf("%d\n",y);
    return 0;
}