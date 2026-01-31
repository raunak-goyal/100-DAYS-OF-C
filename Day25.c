//Q49: Write a program to print the following pattern:
// 5
// 45
// 345
// 2345
// 12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

// */
// #include<stdio.h>
// int main(){
//     for (int i =5; i>=1; i--) //columns
//     {
//         for(int j=i;j<=5;j++){ //rows
//             printf("%d",j);
            
//         }
//         printf("\n");
        
//     }
//     return 0;
// }
// Q50: Write a program to print the following pattern:
// *****
//  ****
//   ***
//    **
//     *

/*
Sample Test Cases:
Input 1:

Output 1:
*****
 ****
  ***
   **
    *

Input 2:

Output 2:
Note: Spaces indicate indentation.

*/

#include<stdio.h>
int main(){
    int n=5;
    for (int i =1; i<=n; i++) //columns
    {
        for(int j=1;j< i;j++){ //rows
            printf(" ");
            
        }
        for (int k = i; k <= n; k++) // stars
        {     
        printf("*");
        }
        printf("\n"); 
    }
    return 0;
}