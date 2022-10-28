//https://codeforces.com/contest/1686/problem/A

#include<iostream>
#include<vector>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum=0;
        cin>>n;
        vector<int> arr(n);
        
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        
        int ans=0;
        
        for(int i=0; i<n; i++)
        {
            int suml = sum-arr[i];
            int x=arr[i], y=n-1;
            if(suml%y==0 and suml/y==x)
                ans=1;
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
