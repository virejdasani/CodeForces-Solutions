//https://codeforces.com/contest/1692/problem/D

#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
#include <string>
#include <cmath>
#include <tgmath.h>
#define ll long long
#define int long long
#define ld long double
#define REP(i,n) for (long long i=0;i<n;i++)
using namespace std;
 
const unsigned int MOD = 1000000007;
 
 
//////---------------START--------------///////
 
int calcPow(int b, int p)
{
    int result = 0;
    result = b;
    for (int i = 2; i <= p; i++)
    {
        result = result * b;
    }
    return result;
}
 
 
// for (int i=0;i<n;i++)
// {
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
 
 
string findEndTime(string T, int K)
{
    string ans;
 
    // convert the given time in minutes
    int minutes = ((T[0] - '0')
                   * 10
                   + T[1] - '0')
                  * 60
                  + ((T[3] - '0')
                     * 10
                     + T[4] - '0');
 
    // Add K to current minutes
    minutes += K;
 
    // Obtain the new hour
    // and new minutes from minutes
    int hour = (minutes / 60) % 24;
 
    int min = minutes % 60;
 
    // Print the hour in appropriate format
    if (hour < 10) {
        //cout << 0 << hour << ":";
        ans = ans + '0' + to_string(hour) + ':';
    }
    else {
        //cout << hour << ":";
        ans = ans + to_string(hour) + ':';
    }
 
    // Print the minute in appropriate format
    if (min < 10) {
        //cout << 0 << min;
        ans = ans + '0' + to_string(min);
    }
    else {
        //cout << min;
        ans = ans + to_string(min);
    }
    return ans;
}
 
 
string getNextTime(string s, int n)
{
    // To store the resultant time
    string res;
 
    // Hours are stored in h as integer
    int h = stoi(s.substr(0, 2));
 
    // Minutes are stored in m as integer
    int m = stoi(s.substr(3, 2));
 
    // Reverse of h
    int rev_h = (h % 10) * 10 + ((h % 100) - (h % 10)) / 10;
 
    // Reverse of h as a string
    string rev_hs = to_string(rev_h);
 
    if (h == 23 && m >= 32) {
        res = "-1";
    }
 
    // If MM < reverse of (HH)
    else if (m < rev_h) {
        string temp;
 
        // 0 is added if HH < 10
        if (h < 10)
            temp = "0";
        temp = temp + to_string(h);
 
        // 0 is added if rev_h < 10
        if (rev_h < 10)
            res = res + temp + ":0" + rev_hs;
        else
            res = res + temp + ":" + rev_hs;
    }
    else {
 
        // Increment hours
        h++;
 
        // Reverse of the hour after incrementing 1
        rev_h = (h % 10) * 10 + ((h % 100) - (h % 10)) / 10;
        rev_hs = to_string(rev_h);
 
        string temp;
 
        // 0 is added if HH < 10
        if (h < 10)
            temp = "0";
        temp = temp + to_string(h);
 
        // 0 is added if rev_h < 10
        if (rev_h < 10)
            res = res + temp + ":0" + rev_hs;
        else
            res = res + temp + ":" + rev_hs;
    }
    return res;
}
 
bool checkPalin(string s)
{
    if ((s[0] == s[4]) && (s[1] == s[3]))
    {
        return true;
    }
    else
        return false;
}
 
signed main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen ("input.txt", "r", stdin);
    freopen ("output.txt", "w", stdout);
#endif
    //////---------------Begin Code--------------///////
    int t;
    cin >> t;
    while (t--)
    {
        //////---------------Begin Code--------------///////
 
        string arr[16] {"00: 00",
                        "01: 10",
                        "02: 20",
                        "03: 30",
                        "04: 40",
                        "05: 50",
                        "10: 01",
                        "11: 11",
                        "12: 21",
                        "13: 31",
                        "14: 41",
                        "15: 51",
                        "20: 02",
                        "21: 12",
                        "22: 22",
                        "23: 32"
                       };
 
 
        string time;
        cin >> time;
        int diff;
        cin >> diff;
 
        vector<string> answers;
 
        string temp;
        string temp1;
        int cnt = 0;
 
        answers.push_back(time);
 
        if (checkPalin(time))
            cnt++;
 
        temp1 = findEndTime(time, diff);
 
        while (temp1 != time)
        {
            answers.push_back(temp1);
            if (checkPalin(temp1))
                cnt++;
 
            temp1 = findEndTime(temp1, diff);
        }
        cout << cnt;
 
        for (int i=0;i<answers.size();i++)
        {
            //cout<<answers[i]<<endl;
        }
 
 
 
 
 
 
        ////---------------Stop Code--------------///////
        cout << endl;
    }
 
//////---------------Stop Code--------------///////
}
//////---------------END--------------///////
 
//////---------------EXTRA STUFF--------------///////
