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
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++) 
        {
            cin >> v[i];
        }
        bool flag = false;
        for(int i=0; i<n-1; i++) 
        {
            int cal = abs(v[i]-v[i+1]);
            if(cal != 5 && cal!=7)
            {
                flag = true;
            }
        }
        if(flag)
            no;
        else
            Y;
    }

    
    return 0;
}