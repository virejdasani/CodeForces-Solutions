//https://www.codechef.com/problems/HS08TEST
//Sample input:30 120.00




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
