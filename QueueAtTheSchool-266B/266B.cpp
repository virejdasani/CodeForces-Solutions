// https://codeforces.com/problemset/problem/266/B
// B. Queue at the School
/*
    Contributed By:
        Mohammad Haziq Khan
        GitHub: haaaziq
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t;

    cin >> n >> t;
    char str[n];
    
    for(int i=0; i<n;i++){
        cin >> str[i];
    }
    
    for(int i=0;i<t;i++){
        for(int j=0; j<n-1; j++){
            if(str[j]=='B' && str[j+1]=='G'){
                swap(str[j], str[j+1]);
                j++;
            }
        }
    }

    for(int i=0; i<n;i++){
        cout << str[i];
    } cout << endl;

    return 0;
}