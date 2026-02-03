//Q57: Find the sum of array elements.

/*
Sample Test Cases:
Input 1:
4
2 4 6 8
Output 1:
20

Input 2:
3
1 1 1
Output 2:
3

*/

// #include<stdio.h>
// int main(){
// int n;
// int sum=0;
// printf("enter the number of elements in array :");
// scanf("%d",&n);
// int arr[n];

// for(int i=0;i<n;i++){
//     printf("enter elements of array : ");
//     scanf("%d",&arr[i]);
//     sum+=arr[i];
// }
// printf("the elements are :");
// for(int i=0;i<n;i++){
//     printf("%d ",arr[i]);
  
// }
// printf("\n");
//   printf("the sum of the elements are %d ",sum);
//     return 0;
// }


//8: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>
int main(){
int n;

printf("enter the number of elements in array :");
scanf("%d",&n);
int arr[n];
int temp;

for(int i=0;i<n;i++){
    printf("enter elements of array : ");
    scanf("%d",&arr[i]);
}

printf("\n");
if(n==0){
    printf("array is empty");}
for(int i=0;i<n;i++){
for(int j=0;j<i+1;j++){
    if(arr[i]<arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
}
printf("the elements are :");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("Min =%d ",arr[0]);
printf("Max =%d ",arr[n-1]);
    return 0;
}

