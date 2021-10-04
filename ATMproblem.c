/*Pooja would like to withdraw X $US from an ATM. 
The cash machine will only accept the transaction if X is a multiple of 5,
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). 
For each successful withdrawal the bank charges 0.50 $US. Calculate Pooja's account balance after an attempted transaction.*/
/*Input
Positive integer 0 < X <= 2000 - the amount of cash which Pooja wishes to withdraw.

Nonnegative number 0<= Y <= 2000 with two digits of precision - Pooja's initial account balance.*/
//Example input: Input:
//30 120.00




#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int withdraw;
    float balance, TotalWd;
    printf("Enter the amount:");
    scanf("%d %f", &withdraw, &balance);

    if (withdraw % 5 !=0)
    {
        printf("%0.2f\n", balance);
        exit(1);
    }

    if (withdraw > 2000 || withdraw==0)
    {
        printf("%0.2f\n", balance);
        exit(1);
    }

    TotalWd = withdraw + 0.5;

    if (TotalWd >= balance)
    {
        printf("%0.2f\n", balance);
        exit(1);
    }

    printf("%0.2f\n", balance - TotalWd);
      return 0;
}