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
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int mx1 = 0, cnt1 = 0;
        for(int i=0; i<n; i += 2)
        {
            cnt1++;
            mx1 = max(mx1, arr[i]);
        }
        mx1 += cnt1;
        int mx2 = 0, cnt2 = 0;
        for(int i=1; i<n; i += 2)
        {
            cnt2++;
            mx2 = max(mx2, arr[i]);
        }
        mx2 += cnt2;
        cout << max(mx1, mx2) << endll;
    }
    return 0;
}