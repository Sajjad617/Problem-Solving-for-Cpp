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
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    if (x == 0) 
    {
        for (int i = 1; i < n; i++) 
            v[i - 1] = i;
        v[n - 1] = 0;
    } 
    else if (x == n) 
    {
        for (int i = 0; i < n; i++) 
            v[i] = i;
    } 
    else{
        int i;
        for (i=0; i < x; i++) 
            v[i] = i;
        for (int j = x + 1; j < n; j++, i++) 
            v[i] = j;

        v[i] = x;
    }

    for(auto x : v)
        cout << x << " ";
    
    nl;
    
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