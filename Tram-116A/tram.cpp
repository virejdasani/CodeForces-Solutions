//https://codeforces.com/problemset/problem/116/A

#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	int capacity=0;
    int maxc=0;
	while(t--){
		int enter=0,exit=0;
		cin>>exit>>enter;
		capacity = capacity + enter - exit;\
        maxc=max(capacity, maxc);

	}
	cout<<maxc;
}
