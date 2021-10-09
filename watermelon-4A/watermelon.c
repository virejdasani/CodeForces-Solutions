// https://codeforces.com/problemset/problem/4/A

#include <stdio.h>
int main() {
  int ip;
  scanf("%d", &ip);
  if (ip % 2 == 0 && ip > 3) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
}
