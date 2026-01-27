//Write a program to print all factors of a given number.
// #include <stdio.h>

// int main() {
//     int n;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("Factors of %d are: ", n);

//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {   // if i divides n exactly
//             printf("%d ", i);
//         }
//     }

//     printf("\n");
//     return 0;
// }
// //Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int n1,n2;
    int small;
    printf("enter n1");
    scanf("%d",&n1);
    printf("enter n2");
    scanf("%d",&n2);
    if(n1>n2){
        small=n2;
    }
    else
        small=n1;
    int hcf = 1;
    for(int i=small;i>=1;i--){
    if(n1%i==0 && n2%i==0){
        hcf = i;
        break;
    }

    
}
printf("HCF IS %d",hcf);
return 0;
}

 