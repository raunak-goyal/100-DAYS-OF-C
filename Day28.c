//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19*/
// #include<stdio.h>

// int main() {
//     int n;
//     printf("Enter n: ");
//     scanf("%d", &n);

//     for(int i = 2; i <= n; i++) {
//         int flag = 0; // assume prime

//         for(int j = 2; j*j <= i; j++) { // check divisibility
//             if(i % j == 0) {
//                 flag = 1; // not prime
//                 break;
//             }
//         }

//         if(flag == 0)
//             printf("%d ", i);
//     }

//     return 0;
// }

//Q56: Read and print elements of a one-dimensional array.

/*
Sample Test Cases:
Input 1:
3
10 20 30
Output 1:
10 20 30

Input 2:
5
1 2 3 4 5
Output 2:
1 2 3 4 5

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
    return 0;
}

