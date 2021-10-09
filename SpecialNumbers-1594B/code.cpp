//https://codeforces.com/contest/1594/problem/B

#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;

ll power(ll x, ll y)
{
	ll res = 1;
	while (y)
	{
		if (y % 2 == 1)
		 res = (res * x)%MOD;
		 y = y >> 1;
		 x = (x * x)%MOD;
	}
	return res;
}



int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
   ll n,k;
   cin>>n>>k;
   ll i=0;
   ll res=0;
   while(i<=30)
   {
     ll j=(1<<i);
     if(k&j)
     {
       res=(res+power(n,i))%MOD;
      // cout<<i<<" "<<res<<"\n";
     }
     i++;
   }
   cout<<res<<"\n";
  }
}

 
   
   
