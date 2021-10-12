//https://codeforces.com/problemset/problem/1560/C
//Author: piyushpandey2000

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, k;
    cin>>t;
    while(t--)
    {
        cin>>k;

        int last = int(sqrt(k*1.0));

        if(last*last==k)
            cout<<last<<" 1"<<"\n";
        else if((k-last*last)<=last+1)
            cout<<(k-last*last)<<" "<<last+1<<"\n";
        else
            cout<<last+1<<" "<<last-(k-last*last-last-1)+1<<"\n";
    }
}