//https://codeforces.com/contest/1743/problem/A

#include<iostream>
#include<vector>
#include<climits>
 
using namespace std;
 
int main()
{
    int t;
     cin>>t;
     while(t--)
     {
         int n;
         cin>>n;
         vector<int> arr;
         for(int i=0; i<n; i++)
         {
            int x;
            cin>>x;
            arr.push_back(x);
         }
         cout<<3*(10-n)*(9-n)<<endl;
     }
}
