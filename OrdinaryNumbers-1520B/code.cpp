// https://codeforces.com/problemset/problem/1520/B

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int c=0;
		long a=1;
		while(a*10<=n)
		{
			c+=9;
			a=a*10;
		}
		int d=a;
		int p=0;
		while(a+d<=n)
		{
			p++;
			a=a+d;
		}
		int r=d + p*d;
		int z=0;			
		while(r>=10)
		{
			r=r/10;
			z++;		
		}
		int v=r;
		while(z--)
		{
			v=v*10+r;	
		}
		if(v<=n)
			p++;
		c=c+p;	
		cout<<c<<endl;
	}
	return 0;
}