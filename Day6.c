//Write a program to input an integer and check whether it is even or odd using if–else.
// #include<stdio.h>
// int main(){
// int n;
// printf("enter n: ");
// scanf("%d",&n);
// if(n%2==0)
// printf("%d is a even number",n);
// else
// printf("%d is a odd number",n);
// }

//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main(){
int n;
printf("enter n: ");
scanf("%d",&n);
if(n==0)
 printf("%d is a zero number",n);
else if (n<0)
 printf("%d is a negative number",n);
else
 printf("%d is a positive number",n);
    return 0;
}