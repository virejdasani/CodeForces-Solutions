//https://codeforces.com/contest/1668/problem/A

#include<iostream>
#include<vector>
#include<algorithm>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m;
        cin>>n>>m;
        long long mx=max(n,m);
        long long mn=min(n,m);
        int ans = 0;
        if(mn==1 and mx-mn>1)
            ans=-1;
        else
        {
            ans=2*(mn-1);
            int d=mx-mn;
            ans+=(d/2)*4;
            ans+=(d%2)*1;
        }
        cout<<ans<<endl;
    }
}
