//Problem Link
//https://codeforces.com/problemset/problem/279/B
//Solution:
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define FAST ios::sync_with_stdio(0), cin.tie(0)
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int i=0;
    int j=0;
    int a=INT_MIN;
    while(i<n && j<n)
    {
        if(v[j]<=k)
        {
            k=k-v[j];
            j++;
        }
        else{
            a=max(a,j-i);
            k=k-v[j];
            while(k<0)
            {
                k=k+v[i];
                i++;
            }
            j++;
        }
    }
    a=max(a,j-i);
    cout<<a<<endl;
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