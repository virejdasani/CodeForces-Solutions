//https://codeforces.com/contest/1490/problem/B
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void test_case(int n){
    vector<int32_t> c(3,0);
    for(int i=0; i< n; i++){
        int x;
        cin>>x;
        c[x%3]++;
    }
    uint32_t count=0;
    while(true){
        for(int i =0; i< 3;i++){
            if(c[i] > n/3){
                int sub_count=c[i]-n/3;
                c[(i+1)%3]+=sub_count;
                c[i]-=sub_count;
                count+=sub_count;
            }
        }
        bool flag=true;
        for(auto&i: c){
            if(i!=n/3)flag=false;
        }
        if(flag)break;
    }
    cout<<count<<endl;
}

int main(){
    int t;ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    while(t--){
        int n;cin>>n;
        test_case(n);
    }
    return 0;
}
