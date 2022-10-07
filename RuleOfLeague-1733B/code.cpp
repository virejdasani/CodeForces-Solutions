// https://codeforces.com/contest/1733/problem/B
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        if((x!=0&&y!=0)||(x==0&&y==0)){
            cout<<"-1"<<endl;
            continue;
        }
        if(y!=0){
            x=y;
            y=0;
        }
        vector<int>res;
        int i=1;
        
        int a=x;
        while(res.size()<n-1){
            if(a>0){
            res.push_back(i);
            a--;
            }
            else{
                a=x;
                i=2+res.size();
            }
            
            
        }
        if(a!=0){
            cout<<"-1"<<endl;;
        }
        else{
        for(auto i:res){
            cout<<i<<" ";
        }
        cout<<endl;
        }
        
    }
}
