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
        int n;
        cin >> n;
        int f = 0, g=0;
        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                if(i%2==0)
                    f++;
                else
                    g++;
            }

        }
        // cout << f << "<>" << g << endll;
        if(f==g)
            cout << 0 << endll;
        else if(f<g)
            cout << -1 << endll;
        else
            cout << 1 << endll;
    }
    return 0;
}