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
    
    // HQ9+
    string s;
    cin >> s;
    bool flag = false;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
            flag = true;
    }

    if(flag)
        Y;
    else
        no;
    return 0;
}
