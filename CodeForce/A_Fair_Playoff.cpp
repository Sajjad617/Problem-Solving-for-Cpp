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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool flag = false;
        if(a>b)
        {
            if(c>d && c>b && a>d)
            {
                Y;
            }
            else if(d>c && d>b && a>c)
            {
                Y;
            }
            else
            {
                no;
            }
        }
        else // b>a
        {
            if(c>d && c>a && b>d)
            {
                Y;
            }
            else if(d>c && d>a && b>c)
            {
                Y;
            }
            else
            {
                no;
            }
        }
        
        
    }
    return 0;
}