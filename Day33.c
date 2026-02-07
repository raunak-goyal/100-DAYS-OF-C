
// #include<stdio.h>
// int main(){
// int n;
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
// int k,found=0;
// printf("enter the number to be searched");
// scanf("%d",&k);
// for(int i=0;i<n;i++){
//     if(arr[i]==k){
//         printf("the element found at %d",i);
//         found=1;
//         break;
//     }
     
// }

// if(!found){
//     printf("element not found");
// }
//     return 0;
// }

//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/
#include <stdio.h>

int main() {
    int n, k, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1];   // extra space for new element

    printf("Enter sorted elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to be inserted: ");
    scanf("%d", &k);

    // Find correct position
    for (i = 0; i < n; i++) {
        if (arr[i] > k) {
            pos = i;
            break;
        }
    }

    // If element is greater than all elements
    if (i == n) {
        pos = n;
    }

    // Shift elements to the right
    for (i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert element
    arr[pos] = k;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
