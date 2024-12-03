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
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        bool flag1 = false;
        map<char, int> mp;
        if(n%2==1)
            mp[(n/2)+1]++;
        for(int i=0; i<n/2; i++)
        {
            if(mp[s[i]]==1)
                flag1 = true;
            mp[s[i]]++;
            mp[s[n-1-i]]++;

            // cout << s[i] << "<>" << s[n-i-1] << endll;
            if(s[i]!=s[n-1-i])
            {
                flag = true;
                // cout << s[i] << "<->" << s[n-i-1] << endll;
            }
        }
        // cout << endll;
        if(!flag)
            cout << 0 << endll;
        else if(n==2)
            cout << -1 << endll;
        else
        {
            if(s[0]==s[n-1])
                cout << 1 << endll;
            else if (mp[s[0]]==2 || mp[s[n-1]]==2)
                cout << 2 << endll;
            else if (flag1)
                cout << 3 << endll;
            else
                cout << -1 << endll;
            
            
            
        }

    }
    return 0;
}