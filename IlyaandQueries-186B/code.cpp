//https://codeforces.com/contest/313/problem/B

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,i;
    cin>>s>>n;
    int l=s.size();
    int arr[l-1],c=0,a,b;
    arr[0]=0;
    for(i=1;i<l;i++)
    {
        if(s[i]==s[i-1])
        {
            c++;
            arr[i]=c;
        }
        else
            arr[i]=c;
    }
    while(n--)
    {
        cin>>a>>b;
        int x=arr[b-1];
        int y=arr[a-1];
        cout<<x-y<<endl;
    }
}
