//Link to the problem : https://codeforces.com/contest/1602/problem/D


#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
static const auto fast = []()
{ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0); return 0;} ();
 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename num_t>
using ordered_set = tree<num_t, null_type, less<num_t>, rb_tree_tag, tree_order_statistics_node_update>;  // find_by_order(*) , order_of_key
 
 
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
#define mod 1000000007
#define mod2 998244353
#define INF  1e18
//counting number of set bits
#define bitsi(n) __builtin_popcount(n)
#define bitsl(n) __builtin_popcount(n)
#define bitsll(n) __builtin_popcountll(n)
#define endl "\n" 
#define f first
#define s second
#define rep(i,begin,end) for(__typeof(end) i=(begin)-((begin)>(end));i!=(end)-((begin)>(end)); i+=1-2*((begin)>(end)))
#define pb push_back
#define read(a,n) for(ll i=0;i<n;i++){cin>>a[i+1];}
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
//string to int stoi(s) to long long int stoll(s)
typedef long long ll;
typedef long  double lld;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ull,ull> puu;
typedef pair<ll,ll> pll;
typedef vector<ll> vll;
typedef vector<pll> vpll;
 
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
ll binexp(ll a,ll x,ll m){
    ll ans=1;
    while(x){
    if(x&1){ ans=(ans*a)%m;}
     a=(a*a)%m;
     x>>=1;
}
return ans;
}
ll mod_inverse(ll b,ll m){return binexp(b,m-2,m);}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mod_inverse(b, m), m) + m) % m;}  //only for prime m
 
void sieveOfEratosthenes(int n){
vector<bool> primes(n+1,1);
 primes[0]=0; primes[1]=0;
     for(int i=2;i*i<=n;i++){
     if(primes[i]==1){
          for(int j=i*i;j<=n;j+=i){
         primes[j]=0;
       }}}
}
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//,
    
 
     void solve(){
     ll n;cin>>n;
     vll a(n+1),b(n+1); read(a,n); read(b,n);
     vll vis(n+1,0);
     ll f=0;
     vll p(n+1,-1);

     queue<pll> q;
     q.push({n,0});
     vis[n]=1;

    set<ll> st;
    for(int i=0;i<=n;i++){
        st.insert(i);
    }
  

     while(q.size()){
    pll t=q.front();
    // cout<<t.f<<" ";
    if(t.f==0){cout<<t.s<<endl; f=1; break; }
    q.pop();
    ll y=t.f+b[t.f];
    // cerr<<y<<" ";
    // if(vis[y]){continue;}
    auto it=st.lower_bound(y-a[y]);
    auto it2=st.upper_bound(y);
    vector< std::set<ll>::iterator> del;
    while(it!=it2){
        q.push({*it,t.s+1});
        p[*it]=t.f;
        del.pb(it);
        it++;
    }
    for(auto x:del){st.erase(x);}


     }

     if(!f){cout<<-1<<endl;return;}

     ll t=0;
    vll ans;
    // ans.pb(0);
    while(t!=n){
        ans.pb(t);
        t=p[t];
    }
    reverse(all(ans));
    for(auto x:ans){cout<<x<<" ";}
     
     }
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------//
int main(){
ll T=1;
while(T--){
  solve();
}
}
