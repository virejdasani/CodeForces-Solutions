// https://codeforces.com/contest/734/problem/A

#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    string game;
    cin >> game;

    int count_a = 0, count_d = 0;

    for (int i = 0; i < n; i++)
    {
        if (game[i] == 'A')
        {
            count_a++;
        }
        else if (game[i] == 'D')
        {
            count_d++;
        }
    }

    if (count_a > count_d)
    {
        cout << "Anton";
    }
    else if (count_d > count_a)
    {
        cout << "Danik";
    }
    else
    {
        cout << "Friendship";
    }
}