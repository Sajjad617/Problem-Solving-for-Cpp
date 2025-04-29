#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    int n = s1.size();
    int m = s2.size();
    for(int i=0; i<min(n, m); i++)
    {
        if(s1[i]==s2[i])
            cnt++;
        else
            break;
    }

    cout << m + n - max(cnt-1, 0) << endl;
    
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