//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
// #include<stdio.h>
// int main(){
// char x;
// printf("enter x: ");
// scanf("%c",&x);
// if(x>='A'&& x<='Z')
// printf("It is a upper case character");
// else if(x>='a'&& x<='z')
// printf("It is a lower case character");
// else if(x>='0'&& x<='9')
// printf("It is a digit");
// else
// printf("It is a special character");
//     return 0;
// }
//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main(){
int x;
printf("enter x: ");
scanf("%d",&x);
 int y;
printf("enter y: ");
scanf("%d",&y);
int z;
printf("enter z: ");
scanf("%d",&z);
if(x==y && x==z)
printf("the three numbers are equal to each other");
else if(x >=y &&x >= z)
printf("x is the largest ");
else if(z >= x&& z >= y)
printf("z is the largest ");
else if(y >= x && y >= z)
printf("y is the largest ");
else 
printf("idk ");
return 0;
}