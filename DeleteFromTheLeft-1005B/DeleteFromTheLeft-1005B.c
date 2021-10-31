// https://codeforces.com/problemset/problem/1005/B

#include <stdio.h>
#include <string.h>
const int m=200010;

int main()
{
   char a[m], b[m], c[m], d[m];
   scanf("%s",a);
   scanf("%s",b);
   int i,l1=strlen(a), l2=strlen(b);
   for (i=0; i<l1; i++)
      c[i]=a[l1-i-1];
   for (i=0; i<l2; i++)
      d[i]=b[l2-i-1];
    i=0;
    while (i<l1 && i<l2 && c[i]==d[i])
       i++;

	 int s=(l1+l2)-(2*i);
	 printf("%d",s);
	 return 0;
 }

