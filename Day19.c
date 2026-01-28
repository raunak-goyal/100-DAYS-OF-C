//Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/

// #include <stdio.h>

// int main() {
//     int n1,n2;
//     int small;
//     printf("enter n1 :");
//     scanf("%d",&n1);
//     printf("enter n2 :");
//     scanf("%d",&n2);
//     if(n1>n2){
//         small=n1;
//     }
//     else
//         small=n2;
//     int lcm = 1;
//     for(int i=small;i<=n1*n2;i++){
//     if(i%n1==0&& i%n2==0){
//         lcm=i;
//         break;
//     }

    
// }
// printf("LCM IS %d",lcm);
// return 0;
// }

//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main(){
int n,rem,sum=0;
printf("enter n: ");
scanf("%d",&n);
while(n!=0){
    rem=n%10;
    sum = sum + rem; 
    n = n / 10;                 
}
printf("sum is %d",sum);

return 0;
}