#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            /* code */
        }
        ll g1 = 0, g2 = 0;
        for (int i = 0; i < n; i += 2)
        {
            g1 = __gcd(g1, v[i]);
        }
        for (int i = 1; i < n; i += 2)
        {
            g2 = __gcd(g2, v[i]);
        }
        ll cal = 0;
        bool flag = true;
        for (int i = 1; i < n; i += 2)
        {
            if(v[i]%g1==0)
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cal = g1;
        else
        {
            for (int i = 0; i < n; i += 2)
            {
                if(v[i]%g2==0)
                {
                    flag = true;
                    break;
                }
            }
            if(!flag)
                cal = g2;
        }
        cout << cal << endll;

        
    }
    return 0;
}