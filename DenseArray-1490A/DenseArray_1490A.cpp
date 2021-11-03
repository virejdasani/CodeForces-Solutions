//https://codeforces.com/contest/1490/problem/A
#include<iostream>
#include<vector> 
using namespace std;
void test_case(int n){
    uint32_t count=0;
    vector<int> arr(n);
    for(auto&i : arr){
        cin>>i;
    }
    for(int i=0; i< n-1; i++){
        int low=min(arr[i],arr[i+1]);
        int high=max(arr[i],arr[i+1]);
        while(high > 2*low){
            low*=2;
            count++;
        }
    }
    cout<<count<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    int n;
    cin>>t;
    while(t--){
        cin>>n;
        test_case(n);
    }
    return 0;

}
