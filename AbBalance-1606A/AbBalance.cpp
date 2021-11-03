//https://codeforces.com/problemset/problem/1606/A

#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        // aba. => a to b bba ba ab decr
        
        //aba => decr both
        //bbb => increase ba and ab
        //abb => ab decr => aab => same 
        //bba => ba decr => same
        
        //aaa
        //aab
        //baa
        //bab decrease both !
        int n = s.length();
        char prev = 'c';
        char start = s[0];
        char second_ele = s[1];
        char last = s[s.length()-1];
        char sec_last = s[s.length()-2];

        
        //vector<int> pos_ab;
        //vector<int> pos_ba;
        int ab=0,ba=0;
        for(int i=0;i<n;i++){
            if(prev=='a'&& s[i]=='b'){
                ab++;
                //pos_ab.push_back(i);
            }
            else if (prev == 'b' && s[i]=='a'){
                ba++;
                //pos_ba.push_back(i);
            }
            prev = s[i];
        }
        if(ab==ba){
            cout<<s<<endl;
        }
        // if ab => ba+2
        else if(ab==ba+1){
            if(start == 'a' && second_ele =='b'){
                s[0]='b';
            }
            else if(sec_last=='a' && last=='b'){
                s[s.length()-1]='a';
            }
            
            else if(start=='a' && second_ele == 'a'){
                s[0]='b';
            }
            else if(sec_last=='b' && last == 'b'){
                s[n-1]='a';
            }
            cout<<s<<endl;
        }
        
        else if(ab+1==ba){
            if(start == 'b' && second_ele =='a'){
                s[0]='a';
            }
            else if(sec_last=='b' && last=='a'){
                s[s.length()-1]='b';
            }
            else if(start=='b' && last == 'b'){
                s[0]='a';
            }
            
            else if(sec_last=='a' && last=='a'){
                s[n-1]='b';
            }
           
            cout<<s<<endl;
        }
        

    }
}
