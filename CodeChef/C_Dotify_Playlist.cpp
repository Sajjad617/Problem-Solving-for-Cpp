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
        int a, b, c;
        cin >> a >> b >> c;
        // priority_queue
        map<int, priority_queue<int>> mp; 

        for(int i=0; i<a; i++)
        {
            int x, y;
            cin >> x >> y;
            mp[y].push(x);
        }
        int cal = 0;

        for (int j = 1; j <= b; j++)
        {
            // cout << "***" << endll;
            if(mp.count(c))
            {
                cal += mp[c].top();
                mp[c].pop();
            }
            /* code */
        }
        if(cal==0)
            cout << -1 << endll;
        else
            cout << cal << endll;
        

    }
    return 0;
}