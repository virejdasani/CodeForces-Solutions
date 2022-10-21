// Problem Link -: https://codeforces.com/contest/1688/problem/C


#include <bits/stdc++.h>
using namespace std;


int main(){
	int t;
     cin >>t;
     while(t--){
          int n ;  cin>>n;
          vector <int> v(26);
          for (int i=0;i<2*n;i++){
               string s; cin>>s;
               for (auto &e : s) v[e-'a'] ++;
          }
          string f; cin>>f;
          vector <int> m (26);
          for (auto &e : f) m[e-'a']  +=1;
          char ans   ; 
          for (int i=0;i<26;i++) {
               if (!v[i]) continue;
               if (m[i])
               v[i]-=m[i];
               if (v[i] &1 )  {ans  = i+97; break;}
          }
          cout<<ans<<endl;
     }
}