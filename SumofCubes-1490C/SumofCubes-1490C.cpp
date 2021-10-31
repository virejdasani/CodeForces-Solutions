//https://codeforces.com/contest/1490/problem/C
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
bool is_perfect_cube(int64_t x){
    int64_t err = cbrt(x);
    while(x > err*err*err){
        err++;
    }
    while(x < err*err*err){
        err--;
    }
    if(x == err*err*err){
        return true;
    }
    else{
        return false;
    }
}
using namespace std;
void test_case(int64_t n){
    for(int64_t i =1 ; i*i*i < n; i++){
        int64_t cbi = i * i * i * 1LL;
        int64_t cbj = n - cbi;

        if(n<=0){
            continue;
        }

        if(is_perfect_cube(cbj)){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

}

int main(){
    int t;ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>t;

    while(t--){
        int64_t n;cin>>n;
        test_case(n);
    }
    return 0;
}
