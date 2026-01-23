//Write a program to find the roots of a quadratic equation and categorize them.
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a;
//     printf("enter a: ");
//     scanf("%d",&a);
//     int b;
//     printf("enter b: ");
//     scanf("%d",&b);
//     int c;
//     printf("enter c: ");
//     scanf("%d",&c);
//     int discriminant;
//     int root1;
//     int root2;
//     discriminant=b*b-4*a*c;
//     if(discriminant>0);{
//         root1=-b+sqrt(discriminant)/2*a;
//          root2=-b-sqrt(discriminant)/2*a;
//         printf("two real and distinct root are :%d , %d",root1,root2);
//     }
//     else if(discriminant==0){
//         root1=root2=-b/2*a;
//         printf("real and equal root are :%d , %d",root1,root2);


//     }
//     else if(discriminant<0){
// printf("roots are imaginary");
//     }
// return  0;
// }

//Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
#include<stdio.h>
#include<math.h>
int main(){
int x;
printf("enter x ");
 scanf("%d",&x);
if( x>100){
printf("not valid");
}
else if(x>=90 && x<=100){
printf("Grade is A");
}
else if(x>=80 && x<=89){
printf("Grade is B");
}
else if(x>=70 && x<=79){
printf("Grade is C");
}
else if(x>=60 && x<=69){
printf("Grade is D");
}
else if(x<60){
printf("Grade is F");
}
    return 0;
}