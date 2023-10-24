# Problem link - https://codeforces.com/problemset/problem/1328/A

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", a % b == 0 ? 0 : b - a % b);
    }

    return 0;
}
