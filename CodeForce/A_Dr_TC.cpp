#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    int n;
    cin >> n;
    string s1;
    cin >> s1;
    int cnt = 0;
    for(auto x : s1)
    {
        if(x=='1')
            cnt++;
    }
    int total = 0;
    for(int i = 0; i < n; i++)
    {
        if(s1[i]=='1')
            total += (cnt-1);
        else
            total += (cnt+1);
    }
    
    cout << total << endl;
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