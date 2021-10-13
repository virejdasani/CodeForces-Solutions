/*
* author : Mr Sharma
* Date   : 10.13.2021
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


 // int t;
 // cin>>t;
 // while(t--){

string s1,s2;
cin>>s1>>s2;

int i;
for(int i=0; i<s1.length(); i++){
    if(s1[i]== s2[i]){
        s1[i]='0';
    }
    else{
        s1[i]='1';
    }
}

cout<<s1;

//}
return 0;

}