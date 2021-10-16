// https://codeforces.com/problemset/problem/1560/B

#include<bits/stdc++.h>
 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b)
    {
        cout<<-1<<endl;
        continue;
    }
    int mn=abs(a-b);
    if(a>2*mn||b>2*mn||c>2*mn)
    {
        cout<<-1<<endl;
        continue;
    }
    if(c+mn<=2*mn)
        cout<<c+mn<<endl;
    else if(c-mn>0)
        cout<<c-mn<<endl;
    else
        cout<<-1<<endl;
    }
    return 0;
}