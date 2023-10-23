// Problem link https://codeforces.com/problemset/problem/723/A

#include <stdio.h>

int main()
{
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);

    if (x1 > x2)
        x1 = x1 + x2 - (x2 = x1);
    if (x1 > x3)
        x1 = x1 + x3 - (x3 = x1);
    if (x2 > x3)
        x2 = x2 + x3 - (x3 = x2);

    printf("%d", x3 - x1);
    return 0;
}
 
