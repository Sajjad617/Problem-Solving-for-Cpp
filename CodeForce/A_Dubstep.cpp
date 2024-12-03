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
    // cout << s;
    vector<char> v;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i += 2;
            if(!v.empty() && v.back()!=' ')
            {
                v.push_back(' ');

            }
        }
        else
        {
            v.push_back(s[i]);
        }
    }
    for( auto x : v)
    {
        
        cout << x;
    }
    return 0;
}