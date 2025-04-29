#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
        vector<ll> v(n);
        string s = "";
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int l = v[0], flag = true, r = v[0];
        s = "1";
        for (ll i = 1; i < n; i++)
        {
            if(flag)
            {
                if(v[i] >= r)
                {
                    s.push_back('1');
                    r = v[i];
                }
                else if(v[i] <= l)
                {
                    s.push_back('1');
                    r = v[i];
                    flag = false;
                }
                else
                    s.push_back('0');
            }
            else
            {
                if(v[i] <= l && v[i] >= r)
                {
                    s.push_back('1');
                    r = v[i];
                }
                else
                    s.push_back('0');
            }
        }
        cout << s << endll;
            
        

        
    }
    return 0;
}