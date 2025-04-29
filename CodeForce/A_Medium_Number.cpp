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
    // int n;
    // cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    int mn = min({a, b, c});
    int mx = max({a, b, c});
    if(a!=mn && a!= mx)
        cout << a << endl;
    else if(b!=mn && b!=mx)
        cout << b << endl;
    else
        cout << c << endl;
    

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