#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    int cnt0 = 0;
    int cnt1 = 0;
    int mx0 = 0;
    int mx1 = 0;
    // int mxf = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0')
        {
            cnt1 = 0;
            cnt0++;
        }
        else
        {
            cnt1++;
            cnt0 = 0;
        }
        mx0 = max(mx0, cnt0);
        mx1 = max(mx1, cnt1);

    }
    if((max(mx0, mx1)) >= 7)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}