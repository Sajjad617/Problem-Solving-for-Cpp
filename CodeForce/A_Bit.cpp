#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    int cnt = 0;
    while(t--)
    {
        string s;
        cin >> s;
        if(s=="++X" || s=="X++")
            cnt++;
        else if(s=="--X" || s=="X--")
            cnt--;
    }
    cout << cnt << endl;
    return 0;
}