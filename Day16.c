// //Write a program to take a number as input and print its equivalent binary representation. 
// #include <stdio.h>

// int main() {
//     int n;
//     int binary[32];  // to store binary digits
//     int i = 0;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     if (n == 0) {
//         printf("Binary: 0\n");
//         return 0;
//     }

//     // Convert to binary
//     while (n > 0) {
//         binary[i] = n % 2;  // store remainder (0 or 1)
//         n = n / 2;
//         i++;
//     }

//     printf("Binary: ");
//     // print binary in reverse order
//     for (int j = i - 1; j >= 0; j--) {
//         printf("%d", binary[j]);
//     }

//     printf("\n");  
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int n;
//      int remainder;
//      int bin=0;
//     printf("enter n");
//     scanf("%d",&n);
//     while(n!=0){
//        remainder=n%2;
//         bin=bin*10+remainder;
//         n=n/2;
//         //37/2=16 __%=1
//         //16/2 ===37₁₀ = 100101₂
//     }
//     printf("bin is %d",bin);
//     return 0;


// }

//Write a program to check if a number is a palindrome.
//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int main() {
     int n, rev = 0, rem;

    printf("Enter n: ");
    scanf("%d", &n);
    int m=n;
    while (n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
       
    }
if(m==rev){
    printf("The no. is pallindrome");
}
else
printf("the no. is not pallindrome");

    return 0;
}


