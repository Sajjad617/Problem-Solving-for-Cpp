#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int siz = s.size();
        // cout << siz << endl;
        if(siz>10)
        {
            cout << s[0] << siz-2 << s[siz-1] << endl;
        }
        else
            cout << s << endl;
    }
    return 0;
}