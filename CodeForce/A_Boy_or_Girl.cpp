#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    set<char> t;
    for (int i = 0; i < s.size(); i++)
    {

        char x = s[i];
        t.insert(x);
        /* code */
    }
    int sz = t.size();
    if(sz%2==0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    
    return 0;
}