#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    // string s1;
    // cin >> s1;
    int n, k;
    cin >> n >> k;
    int re = 0;
    if(k==1)
    {
        cout << n << endl;
        return;
    }
    while(n)
    {
        re += n%k;
        n /= k;
    }
    cout << re << endl;
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        game();
    }
    return 0;
}