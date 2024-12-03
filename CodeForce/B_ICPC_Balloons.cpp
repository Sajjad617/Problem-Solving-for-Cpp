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
    while(t--)
    {   
        int n;
        string s;
        cin >> n >> s;
        // cout << n << s << endl;
        int arr[500];
        memset(arr, -1, sizeof(arr));
        // cout << arr[5];
        int cnt =0;
        for(int i=0; i<n; i++)
        {
            if(arr[s[i]]==-1)
            {
                cnt += 2;
                // cout << arr[s[i]] << "<>";
                arr[s[i]] = 0;
                // cout << arr[s[i]] << endl;
            }
            else
                cnt++;

        }
        cout << cnt << endll;
        
    }
    return 0;
}