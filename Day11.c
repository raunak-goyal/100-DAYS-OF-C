//Write a program to display the month name and number of days using switch-case for a given month number.
// #include <stdio.h>
// int main() {
//     int Month;
//     printf("Enter month: ");
//     scanf("%d", &Month);
// switch(Month){
// case 1:

//     printf("JANUARY\n");
//     break;
// case 2:

//     printf("FEBUARY\n");
//     break;
// case 3:

//     printf("MARCH\n");
//     break;
// case 4:

//     printf("APRIL\n");
//     break;
//  case 5:

//     printf("MAY\n");
//     break;
// case 6:

//     printf("JUNE\n");
//     break;
// case 7:

//     printf("JULY\n");
//     break;
// case 8:

//     printf("AUGUSTn");
//     break;
// case 9:

//     printf("SEPTEMBER\n");
//     break;
// case 10:

//     printf("OCTOBER\n");
//     break;
// case 11:

//     printf("NOVEMEMBER\n");
//     break;
// case 12:

//     printf("DECEMBER\n");
//     break;

// default:
//         printf("INVALID");
//         break;
    
// }
//     return 0;
// }

// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cp, sp, profit_percent, loss_percent;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (cp == sp) {
        printf("No profit, no loss.\n");
    }
    else if (sp > cp) {
        profit_percent = ((sp - cp) / cp) * 100;
        printf("Profit = %.2f%%\n", profit_percent);
    }
    else {
        loss_percent = ((cp - sp) / cp) * 100;
        printf("Loss = %.2f%%\n", loss_percent);
    }

    return 0;
}

