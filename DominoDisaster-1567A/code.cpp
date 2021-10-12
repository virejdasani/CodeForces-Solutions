// https://codeforces.com/problemset/problem/1567/A

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string k="";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='U')
            {
                k+='D';
            }
            else if(s[i]=='D')
            {
                k+='U';
            }
            else if(s[i]=='L'||s[i]=='R')
            {
                k+='L';
                k+='R';
                i++;
            }
        }
        cout<<k<<endl;
    }
    return 0;
    
}