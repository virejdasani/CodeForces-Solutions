//https://codeforces.com/contest/1720/problem/A

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
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long mul1=a*d, mul2=b*c;
        
        if(mul1==mul2)
            cout<<0<<endl;
        else if(mul1==0 || mul2==0 || (max(mul1,mul2)%min(mul1,mul2))==0)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
}
