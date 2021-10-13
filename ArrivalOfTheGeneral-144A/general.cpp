// https://codeforces.com/problemset/problem/144/A

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
#define mod             1000000007


void c_p_c(){

ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
}

int main(){

c_p_c();

//  ll t;
//  cin>>t;
//  while(t--){


int n;
cin>>n;

int arr[n];
for(int i=0; i<n; i++){
	cin>>arr[i];
}

int max=INT_MIN;
int min=INT_MAX;
int minPos;
int maxPos;

for(int i=0; i<n; i++){
	if(arr[i]>max){
		max=arr[i];
	    maxPos=i;
	}

	if(arr[i]<=min){
	  min=arr[i];
	  minPos=i; 
	  }   
}

if(maxPos>minPos){
	cout<<(maxPos-1)+(n-minPos)-1;
}
else{
	cout<<(maxPos-1)+(n-minPos);
}

return 0;

}