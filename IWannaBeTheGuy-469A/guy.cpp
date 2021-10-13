// https://codeforces.com/problemset/problem/469/A

//Vishal Sharma  

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

int n,p,q,arr[250],count=0;
cin>>n>>p;

for(int i=0; i<p; i++){
	cin>>arr[i];
}
cin>>q;
for(int i=p; i<p+q; i++){
	cin>>arr[i];
}

sort(arr,arr+(p+q));

for(int i=0; i<p+q; i++){
	if(arr[i] != arr[i+1]){
		count++;
	}
}

if(n==(count)){
	cout<<"I become the guy.\n";
}
else{
	cout<<"Oh, my keyboard!\n";
}

return 0;

}