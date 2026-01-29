//Q41: Write a program to swap the first and last digit of a number.
// #include <stdio.h>
// #include <math.h>

// int main() {
//     int n, num, first, last, digits, swapped;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     num = n; // store original number
//     last = n % 10; // extract last digit

//     // find total digits
//     digits = (int)log10(n);

//     // find first digit
//     first = n / pow(10, digits);

//     // remove first digit and get middle part
//     int middle = n % (int)pow(10, digits);
//     middle = middle / 10;

//     // swap first and last digits
//     swapped = last * pow(10, digits) + middle * 10 + first;

//     printf("Number after swapping first and last digit: %d\n", swapped);

//     return 0;
// }
//Write a program to check if a number is a perfect number.

#include<stdio.h>
int main(){
int n,sum=0;
printf("enter n: ");
scanf("%d",&n);

    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum==n){
        printf("it is a perfect number");
    }
    else
    printf("not a perfect number");

    return 0;
}