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
        int a, b;
        cin >> a >> b;
        // int cal  = b/a;
        int mn = a*10;
        int mx = a*12;
        if(mn<=b && mx>=b)
            Y;
        else
            no;

    }
    return 0;
}