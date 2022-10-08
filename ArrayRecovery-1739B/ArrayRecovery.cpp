// https://codeforces.com/contest/1739/problem/B

#include <bits/stdc++.h>
using namespace std;
#define inf 1000000001
typedef long l;
typedef long long ll;
const ll INF = 1e18L + 5;
# define MOD 1000000007
# define PI 3.14
#define vi vector<int>
#define vl vector<l>
#define vll vector<ll>
#define pb push_back
#define pob pop_back
#define f first
#define s second
#define ml map<l,l>
#define mll map<ll,ll>
#define mcl map<char,ll>
# define umll unordered_map<ll,ll,custom_hash>
# define umcl unordered_map<char,l>
#define pll pair<ll,ll>
#define mp make_pair 
# define forl(i,range) for(l i=0;i<range;i++)
# define forll(i,range) for(ll i=0;i<range;i++)
// int ans=upper_bound(start,end ,value)-start;
// auto itr=uper_bound(start,end ,value)-vector.begin();
// for (ll i = 0; i < s1.size() && j < s2.size(); i++) if (s1[i]==s2[j]) j++;//subsequence
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = std::chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
ll myceil(ll num,ll den)
{
    if ((num >= 0 and den > 0) or ( num <= 0 and den < 0))
        return num%den == 0 ? num/den : num/den + 1;
    return num / den;
}
ll myfloor(ll num,ll den)
{
    if ((num >= 0 and den > 0) or ( num <= 0 and den < 0))
        return num%den == 0 ? num/den : num/den;
    int ans = num / den;
    return num % den == 0 ? ans : ans - 1;
}
ll gcd(unsigned long long x, unsigned long long y) {	//returns hcf of two long long ints
	if (x == 0) return y;
	return gcd(y % x, x);
}
ll gcdExtended(ll a, ll b, ll *x, ll *y)  
{  
    if (a == 0)  
    {  
        *x = 0;  
        *y = 1;  
        return b;  
    }  
    ll x1, y1; // To store results of recursive call  
    ll gcd = gcdExtended(b%a, a, &x1, &y1);  
    *x = y1 - (b/a) * x1;  
    *y = x1;  
    return gcd;  
}  
unsigned long long findGCD(vector<unsigned long long> &v) 
{ 
    unsigned long long result = v[0]; 
    for (ll i = 1; i <v.size() ; i++) 
    { 
        result = gcd(v[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
} 
ll lcm(ll a,ll b){
	return((a*b)/gcd(a,b));
 
}
bool sortbysec(ll a,ll b)
{
    return (a>b);
}
vll primeFactors(ll n)
{
    vll ans;
    while (n % 2 == 0) {ans.pb(2);n = n / 2;}
    for (ll i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {ans.pb(i);n = n / i;}}
    if (n > 2)ans.pb(n);return ans;
}
bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    // This is checked so that we can skip
    // middle five numbers in below loop
    // time complexity root of n
    if (n%2 == 0 || n%3 == 0) return false;
    for (ll i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}
vll all_prime(ll n)
{   vll sieve(n+1,0);
    for (ll x = 2; x <= n; x++) 
    {
        if (sieve[x]) continue;
        for (int u = 2*x; u <= n; u += x)
        {
            if(sieve[u]==0)
            {
                sieve[u]=x;
            }
        }
    }
        return sieve;
}
ll power(ll x,ll n)
{
    if(n==0)return 1;
    ll temp=power(x,n/2);
    if(n%2==0) return temp*temp;
    else return x*temp*temp;
}
unsigned long long powerper(unsigned long long x, ll y, ll p)
{
    unsigned long long res = 1; 
    x = x % p;
    while (y > 0)
    {
        if (y & 1)// If y is odd, multiply x with result
            res = (res * x) % p;
        y = y >> 1; // y = y/2  // y must be even now
        x = (x * x) % p;
    }
    return res;
}
unsigned long long modInverse(unsigned long long n, ll p)// Returns n^(-1) mod p
{
    return powerper(n, p - 2, p);
}
unsigned long long nCrModPFermat(unsigned long long n,ll r, ll p, unsigned long long fac[])// Returns nCr % p using Fermat's little
{
    if (n < r)
        return 0;
    if (r == 0)
        return 1;
    // Fill factorial array so that we
    // can find all factorial of r, n
    return (fac[n] * modInverse(fac[r], p) % p
            * modInverse(fac[n - r], p) % p)
           % p;
}
/*fac[0] = 1;
     for (ll i = 1; i <= n; i++) fac[i] = (fac[i - 1] * i) % MOD;*/
 
vector<ll> lps(string s) {
    ll n = (ll)s.length();
    vector<ll> pi(n);
    for (ll i = 1; i < n; i++) {
        ll j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}     
/* ****************************GRAPH ALGO******************************************************************************* */
void dfs(vector<vector<ll>> &v, vector<ll> &df, ll seen[], ll i){ //Also outputed resultant dfs
 
    df.pb(i);
    for(ll j=0; j<v[i].size(); j++){
          if(seen[v[i][j]]==0){seen[v[i][j]]=seen[i]; dfs(v, df, seen, v[i][j]);}
     }
}
bool BFS(vector<vector<ll>> &adj, ll src, ll dest, ll n,ll pred[], ll dist[])
{
	list<ll> queue;
	bool visited[n];
	for (ll i = 0; i < n; i++) {
		visited[i] = false;
		dist[i] = INF;
		pred[i] = -1;
	}
	visited[src] = true;
	dist[src] = 0;
	queue.push_back(src);
	while (!queue.empty()) {
		ll u = queue.front();
		queue.pop_front();
		for (ll i = 0; i < adj[u].size(); i++) {
			if (visited[adj[u][i]] == false) {
				visited[adj[u][i]] = true;
				dist[adj[u][i]] = dist[u] + 1;
				pred[adj[u][i]] = u;
				queue.push_back(adj[u][i]);
 
				if (adj[u][i] == dest)
					return true;
			}
		}
	}
	//cout<< dist[dest];
	/*vector<int> path;
	int crawl = dest;
	path.push_back(crawl);
	while (pred[crawl] != -1) {
		path.push_back(pred[crawl]);
		crawl = pred[crawl];
	}*/
	return false;
}
ll findConnComp(vector<vector<ll>> &v, ll seen[], ll n){
    ll j=0;
    vector <ll> df;
    for(ll i=0; i<n;i++)seen[i]=0;
    for(ll i=0; i<n; i++){
        if(!seen[i]){seen[i]=++j; dfs(v, df, seen, i);}
    }
    return j;
}
vll dijkstra_set(vector<vector<pair<ll, ll>>> &adj, ll src, ll V)//vertex,weight
{
    set< pair<ll, ll> > setds;// weight,vertex
    vector<ll> dist(V, INF); 
    
    setds.insert(make_pair(0LL, src)); 
    dist[src] = 0; 
    
    vll parent(V);
    parent[src]=src;
     while (!setds.empty()) 
    { 
        pair<ll, ll> tmp = *(setds.begin()); 
        setds.erase(setds.begin()); 
  
        ll u = tmp.second; 
        for (auto it = adj[u].begin(); it != adj[u].end(); it++) 
        { 
             
            ll v = (*it).first; 
            ll weight = (*it).second; 
  
            if (dist[v] > dist[u] + weight) 
            {   parent[v]=u;
                if (dist[v] != INF) 
                    setds.erase(setds.find(make_pair(dist[v], v))); 
                    
                dist[v] = dist[u] + weight; 
                setds.insert(make_pair(dist[v], v)); 
            } 
        } 
    }
    return dist;
    //return parent;
}
void printpath(vll & v1, ll dest)
{
    if(v1[dest]==dest)
    {   cout<<dest<<' ';
        return;
    }
    printpath(v1,v1[dest]);
    cout<<dest<<' ';
}
vll current(100001,0);ll cycle=0;
void topologicalSort(vector<vll> &v,ll i, ll seen[],stack<ll>& Stack)
{
    if(cycle!=0)return;
    seen[i]=1;current[i]=1;
    for (ll j =0; j<v[i].size();j++){
         if (seen[v[i][j]]==0) topologicalSort(v,v[i][j],seen, Stack);
         else{
             if(current[v[i][j]]==1){cycle++;break;}//chechks cycle 
         }
    }
    Stack.push(i);
    current[i]=0;   
}
void topologicalSortUtil(vector<vll> &v,ll V,stack<ll>& Stack)
{
    ll seen[V];
    for (ll i = 0; i < V; i++)seen[i] = 0;
    for (ll i = 0; i < V; i++)if (seen[i] == 0 && cycle==0)topologicalSort(v,i,seen, Stack);
    // while (Stack.empty() == false) {
    //     cout << Stack.top() << " ";   printing stack
    //     Stack.pop();
    // }
}
 
void bipartite(vector<vector<ll>> &v, ll seen[], ll i,ll colour){ //Also outputed resultant dfs
  bool bi=true;//write in global
   seen[i]=colour;
    for(ll j=0; j<v[i].size(); j++){
          if(seen[v[i][j]]==-1){ bipartite(v,seen, v[i][j],1-colour);}
          else if(seen[i]==seen[v[i][j]]){ bi=false;
          break;}
          }
}
void make_set(ll v, vector<ll>&parent, vector<ll>&rank) {
    parent[v] = v;
    rank[v] = 0;// rank is based on depth of tree
}
 
ll find_set(ll v,vector<ll>&parent) {
    if (v == parent[v])return v;
    return parent[v] = find_set(parent[v],parent);// here we always attach the node to the representative
}
void union_sets(ll a, ll b,vector<ll>&parent, vector<ll>&rank) {
    a = find_set(a,parent);
    b = find_set(b,parent);
    if (a != b) {
        if (rank[a] < rank[b])swap(a, b);
        parent[b] = a;
        if (rank[a] == rank[b]) rank[a]++;
    }
}
ll Kruskal(vector<pair<ll,pair<ll,ll>>>& edges, ll n,vector<pair<ll,ll>>&result){
    ll cost = 0;
    vector<ll> parent(n), rank(n);
    for (ll i = 0; i < n; i++) make_set(i,parent,rank);
    sort(edges.begin(), edges.end());
    for (ll i=0;i<edges.size();i++) {
        if (find_set((edges[i].s).f,parent) != find_set((edges[i].s).s,parent) ) {
            cost += edges[i].f;
            result.push_back({(edges[i].s).f,(edges[i].s).s});
            union_sets((edges[i].s).f,(edges[i].s).s,parent,rank);
        }
    }
    return cost;
}
void floydWarshall(vector<vector<int> >&graph, int V)//It is O(n^3)
{
    int dist[V][V], i, j, k;
    for (i = 0; i < V; i++){
        for (j = 0; j < V; j++)dist[i][j] = graph[i][j];
    }
    for (k = 0; k < V; k++) {
        // Pick all vertices as source one by one
        for (i = 0; i < V; i++) {
            // Pick all vertices as destination for the
            // above picked source
            for (j = 0; j < V; j++) {
                // If vertex k is on the shortest path from
                // i to j, then update the value of
                // dist[i][j]
                if (dist[i][j] > (dist[i][k] + dist[k][j])
                    && (dist[k][j] != INF
                        && dist[i][k] != INF))
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    // If distance of any verex from itself
    // becomes negative, then there is a negative
    // weight cycle.
    // for (int i = 0; i < V; i++)
    //     if (dist[i][i] < 0)
    //         return true;
    // return false; 
    // Print the shortest distance matrix
    //printSolution(dist);
}
//*************************************************SEGMENT TREE*****************************************************************
// intitially passing fun(a,tree,0,n-1,1)
// size of tree=4*n// currently calculationg sum
void SegTreeBuild(ll a[], ll tree[], ll start, ll end, ll v){
    if(start==end){
        tree[v]=a[start];
        return;
    }
    ll mid=(start+end)/2;
    SegTreeBuild(a,tree,start,mid,2*v);
    SegTreeBuild(a,tree,mid+1,end,2*v+1);
    
    tree[v]=tree[2*v]+tree[2*v+1];
}
void SegTreeUpdate(ll a[], ll tree[], ll start, ll end, ll v, ll idx, ll val){
    if(start==end){
        a[idx]=val;
        tree[v]=val;
        return;
    }
    ll mid=(start+end)/2;
    if(idx>mid){
       SegTreeUpdate(a,tree,mid+1,end,2*v+1,idx,val);
    }else{
         SegTreeUpdate(a,tree,start,mid,2*v,idx,val);  
    }
    tree[v]=tree[2*v]+tree[2*v+1];
}
ll SegTreeQury(ll tree[], ll start, ll end, ll v, ll left, ll right){
    if(start>right || end<left){ //completely outside
        return 0;
    }
    if(start>=left && end<=right){ // completely inside
        return tree[v];
    }
    ll mid=(start+end)/2;        //partially inside or outside
    ll ans1 = SegTreeQury(tree,start,mid,2*v,left,right) ;
    ll ans2 = SegTreeQury(tree,mid+1,end,2*v+1,left,right) ;
    return ans1+ans2;
}
void SegTreeLazyUpdate(ll tree[], ll lazy[], ll low, ll high , ll startR ,ll endR ,ll v, ll val){//startR endR range to compute
    if(low>high)return;
    if(lazy[v]!=0){
        tree[v]+=lazy[v]*(-low+high+1);
        if(low!=high){ // leaf node
            lazy[2*v]+=lazy[v];
            lazy[2*v+1]+=lazy[v];
        }
        lazy[v]=0;
    }
    if(startR>high || endR< low)return;//completely outside
    if(startR<=low && endR>=high){ // completely overlap
        tree[v]+=val*(high-low+1);
        if(low!=high){
             lazy[2*v]+=val;
             lazy[2*v+1]+=val;
        }
        return;
    }
    // partial overlap
    ll mid=(low+high)/2;
    SegTreeLazyUpdate(tree,lazy,low,mid,startR,endR,2*v,val);
    SegTreeLazyUpdate(tree,lazy,mid+1,high,startR,endR,2*v+1,val);
    tree[v]=tree[2*v]+tree[2*v+1];
}
ll SegTreeLazyQury(ll tree[], ll lazy[],ll low, ll high, ll startR,ll endR,ll v){
    if(lazy[v]!=0){
        tree[v]+=lazy[v]*(-low+high+1);
        if(low!=high){
          lazy[2*v]+=lazy[v];
          lazy[2*v+1]+=lazy[v];
        }
        lazy[v]=0;
    }
     if(startR>high || endR< low)return 0;//completely outside
     if(startR<=low && endR>=high){ // completely overlap
        return tree[v];
    }
    ll mid=(low+high)/2;
    ll ans1= SegTreeLazyQury(tree,lazy,low,mid,startR,endR,2*v);
    ll ans2=SegTreeLazyQury(tree,lazy,mid+1,high,startR,endR,2*v+1);
    return ans1+ans2;
}
 
/* ************************************************************************************************************** */
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
  ll t;cin>>t;
  while(t--){
     ll n;cin>>n;
     ll a[n];
     forll(i,n)cin>>a[i];
     bool b=true;
     vector<ll> ans(n);
     ans[0]=a[0];
     for(ll i=1;i<n;i++){
         if(ans[i-1]-a[i]>=0 && a[i]!=0){
             b=false;break;
         }
         ans[i]=ans[i-1]+a[i];
     }
     if(!b)cout<<"-1\n";
     else {
         forll(i,n)cout<<ans[i]<<" ";
         cout<<"\n";
     }
  }
}
