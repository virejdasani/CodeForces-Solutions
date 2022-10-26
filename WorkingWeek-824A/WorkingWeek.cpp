//https://codeforces.com/contest/1735/problem/A

#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
 
using namespace std;
 
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        n-=3;
        n/=3;
        cout<<n-1<<endl;
    }
}
