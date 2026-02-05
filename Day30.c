//9: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/

// #include<stdio.h>
// int main(){
// int n,even,odd;;
// even=0;
// odd=0;
// printf("enter the number of elements in array :");
// scanf("%d",&n);
// int arr[n];

// for(int i=0;i<n;i++){
//     printf("enter elements of array : ");
//     scanf("%d",&arr[i]);

// }
// printf("the elements are :");
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
// }
// printf("\n");
// for(int i=0;i<n;i++){
// if(arr[i]%2==0){
// even+=1;
// }
// else
// odd+=1;
// }
// printf("Even =%d\n",even);
// printf("Odd = %d",odd);
//     return 0;
// }

  // Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include<stdio.h>
int main(){
int n;
printf("enter the number of elements in array :");
scanf("%d",&n);
int arr[n];
int negative=0;
int zero=0;
int positive=0;

for(int i=0;i<n;i++){
    printf("enter elements of array : ");
    scanf("%d",&arr[i]);

}
printf("the elements are :");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
for(int i=0;i<n;i++){
   if(arr[i]==0){
    zero+=1;
   }
   if(arr[i]>0){
    positive+=1;
   }
    if(arr[i]<0){
     negative+=1;
   }
}
printf("ZERO = %d\n",zero);
printf("Postive = %d \n",positive);
printf("negative = %d ",negative);
    return 0;
}
