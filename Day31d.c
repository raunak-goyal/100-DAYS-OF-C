  //Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

// #include<stdio.h>
// int main(){
// int n;
// int x;
//  int found;
//  found=0;
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

// printf("Enter the element you want to search = ");
// scanf("%d",&x);
// for(int i=0;i<n;i++){
//  if(arr[i]==x){
//  printf("Found at the index %d ",i);
//   found=1;
//   break;
//  }
// }
// if(found==0){
//     printf("-1");
// }
//     return 0;
// }

  //Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/

#include<stdio.h>
int main(){
int n;
printf("enter the number of elements in array :");
scanf("%d",&n);
int arr[n];

for(int i=0;i<n;i++){
    printf("enter elements of array : ");
    scanf("%d",&arr[i]);

}
printf("the elements are :");
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

int start=0;
int end=n-1;

while(start>end){
  arr[start]=arr[end]+arr[start];//30 20
  arr[end]=arr[start]-arr[end];//30 10
  arr[start]=arr[start]-arr[end];// 20 10
  start++;
  end--;
 
}
 
    return 0;
}