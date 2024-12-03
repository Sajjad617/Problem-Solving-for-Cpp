#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    int cnt = 0;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if((a+b+c)>1)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}