#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define WL(t) while (t)                        
#define FL(i, a, b) for (int i = a; i < b; i++) 
#define pb push_back                          
#define mp make_pair                          
#define F first                                 
#define S second                                              
#define ninf INT_MIN                 //negative infinite
#define inf INT_MAX                  //infinite
#define rt return                     //rt
#define vec vector<int>
const int mod = 1e9 + 7;
const int N = 1e7 + 4;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    int n,P;
  cin>>n>>P;

  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }

sort(arr,arr+n);
int count=0;
int ans=0;
int amt;
for(int i=n-1;i>=0;i--){
    if(count>=n) break;
    
amt=arr[i];
count++;
while(amt <=P){
     if(count>=n) break;
    
amt+=arr[i];
count++;
}
if(amt>P) ans++;
else break;
}
cout<<ans<<endl;

    rt 0;
}