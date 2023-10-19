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
    ll m,n;
    cin>>n>>m;
    int c=0;
    while(m!=n)
    {
        if(m<n)
        {
            c=c+(n-m);
            cout<<c<<endl;
            return;
        }
        else{
            if(m%2==0)
            {
                m=m/2;
                c++;
            }
            else{
                m++;
                c++;
            }
        }
    }
    cout<<c<<endl;
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