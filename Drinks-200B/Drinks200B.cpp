/*
https://codeforces.com/problemset/problem/200/B

*/

#include<bits/stdc++.h>
#include <iomanip>
#define ll long long int
#define M 1000000007
using namespace std;
#define loop(n) for (int i = 0; i < n; i++)

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x);cerr<<endl;
#else
#define debug(x)
#endif

void _print(int a) {	cerr << a;}


void _print(long long a) {cerr << a;}


void _print(char a) { cerr << a;}


void _print(string a) { cerr << a; }


void _print(bool a) { cerr << a; }
void _print(float a) { cerr << a; }

template<class T> void _print(vector<T> v1) {
	cerr << "[ ";
	for (T i : v1) {
		_print(i);
		cerr << " ";
	}
	cerr << " ]";
}

template<class T> void _print(set<T> s1) {
	cerr << "[ ";
	for (T i : s1) {
		_print(i);
		cerr << " ";
	}
	cerr << " ]";
}


int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
#endif
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	float arr[t];
	float sum = 0.0f;
	loop(t) {
		int x;
		cin >> x;
		arr[i] = x / 100.0;
		debug(arr[i]);
		sum += arr[i];
		debug(sum);
	}
	cout << fixed << setprecision(15) << (100 * float(sum / t));


	return 0;
}
