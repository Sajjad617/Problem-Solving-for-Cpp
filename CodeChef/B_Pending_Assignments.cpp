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

        int aa = a*b;
        int day = c*(24*60);
        int total = day - aa;

        // cout << aa << "<>" << day << "<>" << total << endll;

        if(total>=0)
            Y;
        else
            no;
    }
    return 0;
}