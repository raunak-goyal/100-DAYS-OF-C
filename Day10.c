//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
// #include <stdio.h>

// int main() {
//     int a, b, c;

//     printf("Enter side a: ");
//     scanf("%d", &a);

//     printf("Enter side b: ");
//     scanf("%d", &b);

//     printf("Enter side c: ");
//     scanf("%d", &c);

//     if (a == b && b == c) {
//         printf("The triangle is Equilateral.\n");
//     }
//     else if (a == b || b == c || a == c) {
//         printf("The triangle is Isosceles.\n");
//     }
//     else {
//         printf("The triangle is Scalene.\n");
//     }

//     return 0;
// }


// Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>
int main() {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
switch(a){
case 1:

    printf("MONDAY\n");
    break;
case 2:

    printf("TUESDAY\n");
    break;
case 3:

    printf("wednesday\n");
    break;
case 4:

    printf("THURSDAY\n");
    break;
 case 5:

    printf("FRIDAY\n");
    break;
case 6:

    printf("SATURDAY\n");
    break;
case 7:

    printf("SUNDAY\n");
    break;

default:
        printf("INVALID");
        break;
    
}
    return 0;
}
