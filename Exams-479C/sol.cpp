//Problem Link
//https://codeforces.com/problemset/problem/479/C
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
void solve()
{
    ll n;
    cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    sort(v.begin(),v.end());
    ll ans=-1;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].second>=ans)
        {
            ans=v[i].second;
        }
        else{
            ans=v[i].first;
        }
    }
    cout<<ans<<endl;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    FAST;
    int t=1;
    while(t--)
    {
        solve();
    }
}