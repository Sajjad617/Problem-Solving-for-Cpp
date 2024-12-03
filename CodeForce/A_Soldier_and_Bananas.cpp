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
    ll price, dollar, bananas;
    cin >> price >> dollar >> bananas;
    ll total = 0;
    for(int i = 1; i<=bananas; i++)
    {
        total += price*i;
    }
    if(total>dollar)
        cout << total-dollar << endll;
    else
        cout << 0 << endll;
    
    return 0;
}