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
    if(s[0]>='A' && s[0]<='Z')
        cout << s;
    else
    {
        s[0] = s[0]-32;
        cout << s;
    }
    return 0;
}