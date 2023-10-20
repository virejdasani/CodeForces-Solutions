//Problem Link
//https://codeforces.com/problemset/problem/1526/B
//Solution
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define ull unsigned long long 
#define ff first
#define ss second
#define fra(i, init, n, inc) for (int i = init;i < n; i += inc)
#define frd(i, init, n, dec) for (int i = init; i >= n; i -= dec)
#define FAST ios::sync_with_stdio(0), cin.tie(0)
int mod=1e9+7;
bool func(int i,int n,int tar,vector<ll>&v,vector<vector<ll>>&dp)
{
    if(tar==0)
    {
        return true;
    }
    else if(tar<0)
    {
        return false;
    }
    if(i==n)
    {
        if(tar==0)
        {
            return true;
        }
        return false;
    }
    if(dp[i][tar]!=-1)
    {
        return dp[i][tar];
    }
    bool notake=func(i+1,n,tar,v,dp);
    bool take=false;
    if(v[i]<=tar)
    {
        take=func(i,n,tar-v[i],v,dp);
    }
    return dp[i][tar]=take||notake;
}
void solve()
{
    ll n;
    cin>>n;
    if(n>1099)
    {
        cout<<"YES"<<endl;
        return;
    }
    vector<ll>v;
    v.pb(11);
    v.pb(111);
    vector<vector<ll>>dp(v.size(),vector<ll>(n+1,-1));
    bool ans=func(0,v.size(),n,v,dp);
    if(ans==0)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    FAST;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}