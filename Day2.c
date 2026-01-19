// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
// #include<stdio.h>
// int main (){
//     int a=3;
//     int b=7;
//     int area=a*b;
//     int perimeter=2*(a+b);
//     printf("%d\n",area);
//     printf("%d\n",perimeter);
// }

//Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
#define PI 3.14159

int main() {
    int r = 10;

    float area = PI * r * r;
    float circumference = 2 * PI * r;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}
