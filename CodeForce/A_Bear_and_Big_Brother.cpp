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
    int a, b;
    cin >> a >> b;
    int cnt= 0;
    while(a<=b)
    {
        // if(a<b)
        a *= 3;
        b *= 2;
        cnt++;
    }
    cout << cnt;

    return 0;
}