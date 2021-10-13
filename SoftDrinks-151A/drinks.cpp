// https://codeforces.com/problemset/problem/151/A

/*
* author : Mr Sharma
*/  
#include <bits/stdc++.h>
#include <iomanip>
using namespace std;
#define ll              long long
#define ld              long double
#define REP(i,a,b)      for(ll i=a; i<b; i++)
#define REPI(i,a,b)     for(ll i=b; i>=a; i--)
#define pi              3.141592653589793238

void c_p_c(){

ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

int main(){

c_p_c();


int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int ans = k*l;
int ans2  = ans/nl;
int ans3 = c*d;
int ans4 = p/np;

int mini = min({ans2,ans3,ans4})/n;
cout<<mini<<"\n";


return 0;

}