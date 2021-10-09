//https://codeforces.com/problemset/problem/71/A

#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string w;
        cin  >> w;
        if(w.length() > 10)
        {
            cout << w[0] << w.length()-2 << w[w.length()-1] << endl;
        }
        else
        cout << w << endl;
    }
}

