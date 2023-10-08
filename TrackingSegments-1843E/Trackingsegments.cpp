// https://codeforces.com/problemset/problem/1843/E

#include <bits/stdc++.h>
using namespace std;

using ll = long long ;
using lld = long double;
using ii = pair<ll,ll>;

const ll mod = 1e9+7;
// const ll mod = 998244353;
#define endl "\n"
#define pb push_back
#define F first
#define S second
#define MP make_pair
#define len(x) ((ll)((x).size()))
#define rep(i,x) for(ll i=0;i<(x);i++)
#define all(x) (x).begin(),(x).end()


void solve(){
    ll n,m;
    cin>>n>>m;
    vector<ii> arr;
    rep(i,m){
        ll a,b;
        cin>>a>>b;
        arr.pb({a,b});
    }
    ll q;
    cin>>q;
    vector<ll> b;
    rep(i,q){
        ll x;
        cin>>x;
        b.pb(x);
    }
    ll lo=1,hi=q,ans=-1;
    while(lo<=hi){
        ll mid=(lo+hi)/2;
        vector<ll> t(n+1,0);
        rep(i,mid){
            t[b[i]]=1;
        }
        for(int i=1;i<n+1;i++){
            t[i]+=t[i-1];
        }
        bool f=0;
        rep(i,m){
            ll l=arr[i].F,r=arr[i].S;
            if(t[r]-t[l-1]>r-l+1-(t[r]-t[l-1])){
                f=1;break;
            }
        }
        if(f){
            ans=mid;
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    cout<<ans<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
    #endif
    int t=1;
    cin>>t;
    int i=0;
    while(i<t){
        // cout<<"Case "<<i+1<<": ";
        solve();
        i++;
    }
    return 0;
}
