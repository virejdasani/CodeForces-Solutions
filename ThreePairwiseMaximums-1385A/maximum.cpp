// https://codeforces.com/problemset/problem/1385/A

/*
* author : Mr Sharma
* Date   : 30.03.2021
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

int t;
cin>>t;

while(t--){

ll a,b,c;
cin>>a>>b>>c;

if(a > b)swap(a,b);
if(a > c)swap(a,c);
if(b > c)swap(b,c);
if(b==c){
	cout<<"YES\n";
	cout<<a<<" "<<a<<" "<<c<<"\n";
}
else{
	cout<<"NO\n";
}

}
return 0;

}

