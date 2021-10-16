// https://codeforces.com/problemset/problem/1389/C

#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int ans=0;
        for(char i='0';i<='9';i++)
        {
            for(char j='0';j<='9';j++)
            {
                int tm=0;
                for(auto k:a)
                {
                    if(tm%2==0 && k==i)
                        tm++;
                    else if(tm%2!=0 && k==j)
                        tm++;
                }
                if(i!=j && tm%2!=0)
                    tm--;
                ans=max(ans,tm);
            }
        }
        cout<<a.length()-ans<<" "<<endl;
    }
}