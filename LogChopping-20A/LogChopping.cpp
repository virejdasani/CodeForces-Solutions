//https://codeforces.com/contest/1672/problem/A

#include<iostream>
 
using namespace std;
 
int main()
{
    int t; 
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int count=0;
        for(int i=0; i<n; i++)
        {
            cin>>x;
            count+=(x-1);
        }
        if(count%2)
            cout<<"errorgorn"<<endl;
        else
            cout<<"maomao90"<<endl;
    }
}
