/*
https://codeforces.com/problemset/problem/200/B
B. Drinks
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Little Vasya loves orange juice very much. That's why any food and drink in his kitchen necessarily contains orange juice. There are n drinks in his fridge, the volume fraction of orange juice in the i-th drink equals pi percent.

One day Vasya decided to make himself an orange cocktail. He took equal proportions of each of the n drinks and mixed them. Then he wondered, how much orange juice the cocktail has.

Find the volume fraction of orange juice in the final drink.

Input
The first input line contains a single integer n (1 ≤ n ≤ 100) — the number of orange-containing drinks in Vasya's fridge. The second line contains n integers pi (0 ≤ pi ≤ 100) — the volume fraction of orange juice in the i-th drink, in percent. The numbers are separated by a space.

Output
Print the volume fraction in percent of orange juice in Vasya's cocktail. The answer will be considered correct if the absolute or relative error does not exceed 10  - 4.

Examples
inputCopy
3
50 50 100
outputCopy
66.666666666667
inputCopy
4
0 25 50 75
outputCopy
37.500000000000
Note
Note to the first sample: let's assume that Vasya takes x milliliters of each drink from the fridge. Then the volume of pure juice in the cocktail will equal  milliliters. The total cocktail's volume equals 3·x milliliters, so the volume fraction of the juice in the cocktail equals , that is, 66.(6) percent.

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
