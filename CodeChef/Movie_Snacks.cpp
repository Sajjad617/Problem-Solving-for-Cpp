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
    int a, b, c;
    cin >> a >> b >> c;
    int cal = a+b;
    if(cal>c)
    {
        int total = (c*2)+b;
        cout << total << endll;
    }
    else
    {
        int total = (a*2)+(b*3);
        cout << total << endll;
    }
    return 0;
}