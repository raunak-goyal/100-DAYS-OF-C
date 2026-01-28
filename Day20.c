//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>
int main (){
    int n,rem ,pro=1;

    printf("enter n :");
    scanf("%d",&n);
while(n!=0){
    rem=n%10;
    if(rem%2!=0){
        pro=pro*rem ;
      
    }
    
      n=n/10;
}
printf("product of the digits is %d",pro);
}
// Q40: Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);  // take binary number as string

    for (int i = 0; i < strlen(binary); i++) {
        if (binary[i] == '0')
            binary[i] = '1';
        else if (binary[i] == '1')
            binary[i] = '0';
        else {
            printf("Invalid input! Enter only 0s and 1s.\n");
            return 0;
        }
    }

    printf("1's Complement: %s\n", binary);

    return 0;
}