//https://codeforces.com/contest/1739/problem/F

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
 
#define shandom_ruffle random_shuffle
 
using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;
const int nax=4107;
const int alfa=12;
const int inf=1e9;
 
int n;
 
char wcz[nax];
 
int faj[nax];
vi wek[nax];
 
int ban[nax];
vi chce[nax];
 
map<int,int> mapa;
 
int m;
vi drz[nax];
int syn[nax][alfa];
int ojc[nax];
int lit[nax];
int nagroda[nax];
 
int suf[nax];
 
int dp[nax][nax];
pii z[nax][nax];
 
int fast[nax][alfa];
 
int main()
{
	scanf("%d", &n);
	for (int i=1; i<=n; i++)
	{
		scanf("%d %s", &faj[i], wcz);
		for (int j=0; wcz[j]; j++)
			wek[i].push_back(wcz[j]-'a');
	}
	for (int i=1; i<=n; i++)
	{
		int g=-1;
		mapa.clear();
		int zle=0;
		set<int> juz;
		for (int j : wek[i])
		{
			if (mapa.count(g-1) && mapa[g-1]==j)
			{
				g--;
				continue;
			}
			if (mapa.count(g+1) && mapa[g+1]==j)
			{
				g++;
				continue;
			}
			if (juz.count(j))
			{
				zle=1;
				break;
			}
			juz.insert(j);
			if (!mapa.count(g+1))
			{
				g++;
				mapa[g]=j;
				continue;
			}
			if (!mapa.count(g-1))
			{
				g--;
				mapa[g]=j;
				continue;
			}
			zle=1;
			break;
		}
		if (zle)
		{
			ban[i]=1;
			continue;
		}
		for (auto j : mapa)
			chce[i].push_back(j.second);
	}
	//~ for (int i=1; i<=n; i++)
		//~ debug() << ban[i] << " " << chce[i];
	for (int i=1; i<=n; i++)
	{
		if (ban[i])
			continue;
		for (int h=0; h<2; h++, reverse(chce[i].begin(), chce[i].end()))
		{
			int v=0;
			for (int j : chce[i])
			{
				if (!syn[v][j])
				{
					m++;
					syn[v][j]=m;
					ojc[m]=v;
					lit[m]=j;
					drz[v].push_back(m);
				}
				v=syn[v][j];
			}
			nagroda[v]+=faj[i];
		}
	}
	queue<int> kol;
	kol.push(0);
	vi pogle;
	while(!kol.empty())
	{
		int v=kol.front();
		kol.pop();
		pogle.push_back(v);
		
		if (ojc[v])
		{
			int it=suf[ojc[v]];
			while(it && !syn[it][lit[v]])
				it=suf[it];
			suf[v]=syn[it][lit[v]];
		}
		
		for (int i : drz[v])
			kol.push(i);
	}
	for (int i : pogle)
		nagroda[i]+=nagroda[suf[i]];
	
	for (int i=0; i<=m; i++)
	{
		for (int j=0; j<alfa; j++)
		{
			int x=i;
			while(x && !syn[x][j])
				x=suf[x];
			fast[i][j]=syn[x][j];
		}
	}
	
	for (int h=0; h<(1<<alfa); h++)
		for (int i=0; i<=m; i++)
			dp[h][i]=-inf;
	dp[0][0]=0;
	for (int h=0; h<(1<<alfa); h++)
	{
		for (int j=0; j<alfa; j++)
		{
			if (h&(1<<j))
				continue;
			for (int i=0; i<=m; i++)
			{
				int x=fast[i][j];
				if (dp[h][i]+nagroda[x]>dp[h^(1<<j)][x])
				{
					dp[h^(1<<j)][x]=dp[h][i]+nagroda[x];
					z[h^(1<<j)][x]={i, j};
				}
			}
		}
	}
	pii naj{-1, -1};
	for (int i=0; i<=m; i++)
		naj=max(naj, {dp[(1<<alfa)-1][i], i});
	//~ debug() << naj;
	int x=naj.second;
	vi ans;
	int mas=(1<<alfa)-1;
	while(mas)
	{
		pii w=z[mas][x];
		ans.push_back(w.second);
		mas^=(1<<w.second);
		x=w.first;
	}
	for (int i : ans)
		printf("%c", (char)('a'+i));
	printf("\n");
	return 0;
}
