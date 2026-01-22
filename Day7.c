//Write a program to input a year and check whether it is a leap year or not using conditional statements.
// #include<stdio.h>
// int main(){
// int year;
// printf("enter year: ");
// scanf("%d",&year);
// if((year%400==0)||(year%4==0 && year%100!=0))
// printf("year is a leap year");
// else
// printf("year is not a leap year");
// return 0;
// }

//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include<stdio.h>
int main(){
char x;
printf("enter x: ");
scanf("%c",&x);
if(x == 'a' || x == 'A' || x == 'e' || x == 'E' || x == 'i' || x == 'I' || x == 'o' || x == 'O' || x == 'u' || x == 'U')
printf("It is a vowel ");
else
printf("It is a consonant ");
return 0;
}
