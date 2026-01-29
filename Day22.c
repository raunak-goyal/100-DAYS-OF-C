// Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
// #include <stdio.h>

// int main() {
//     int n, temp, rem, sum = 0, fact;
//     printf("Enter n: ");
//     scanf("%d", &n);

//     temp = n; 

//     while (n > 0) {
//         rem = n % 10; 
//         fact = 1;

      
//         for (int i = 1; i <= rem; i++) {
//             fact *= i;
//         }

//         sum += fact;  
//         n /= 10;     
//     }

//     if (sum == temp)
//         printf("%d is a Strong Number\n", temp);
//     else
//         printf("%d is not a Strong Number\n", temp);

//     return 0;
// }
//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include<stdio.h>
int main(){
int n;
float sum=1.0;

printf("enter number:");
scanf("%d",&n);
for(int i =2;i<=n;i++){
float num=2*i-1;
float den=2*i;
sum+=num/den;
}
printf("the sum of sequence till n is: %f",sum);
    return 0;
}