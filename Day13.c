//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

// #include <stdio.h>

// int main() {
//    int a,b;
//    printf("enter a,b: ");
// scanf("%d,%d",&a,&b);
// int n;
// printf("\nChoose from menu:\n");
// printf("1. Sum of a and b\n");
// printf("2. Difference of a and b\n");
// printf("3. Product of a and b\n");
// printf("4. Division of a and b\n");
// printf("5. Modulus of a and b\n");
// printf("Enter your choice: ");
// scanf("%d", &n);
//     int result;   
//     float div; 

//     switch (n) {
//         case 1:
//             result = a + b;
//             printf("Sum is %d\n", result);
//             break;

//         case 2:
//             result = a - b;
//             printf("Difference is %d\n", result);
//             break;

//         case 3:
//             result = a * b;
//             printf("Product is %d\n", result);
//             break;

//         case 4:
//             if (b != 0) {
//                 div = (float)a / b;
//                 printf("Division is %.2f\n", div);
//             } else {
//                 printf("Division by zero not allowed.\n");
//             }
//             break;

//         case 5:
//             if (b != 0) {
//                 result = a % b;
//                 printf("Modulus is %d\n", result);
//             } else {
//                 printf("Modulus by zero not allowed.\n");
//             }
//             break;

//         default:
//             printf("Invalid option chosen.\n");
//             break;
//     }

//     return 0;
// }
//Write a program to print numbers from 1 to n.
#include <stdio.h>

int main() {
int n;
printf("enter n: ");
scanf("%d",&n);
for(int i =1;i<=n;i++){
    printf("%d\n",i);
    
}
    return 0;
}