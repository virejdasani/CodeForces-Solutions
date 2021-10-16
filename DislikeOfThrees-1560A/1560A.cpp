//https://codeforces.com/problemset/problem/1560/A
//Author: piyushpandey2000

#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> v(1000+1);
    int val = 1, t, n;
    for(int i=1; i<=1000; i++)
    {
        if(val%3==0 || val%10==3)
            i--;
        else
            v[i] = val;
        
        val++;
    }

    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<v[n]<<"\n";
    }
}

//AC