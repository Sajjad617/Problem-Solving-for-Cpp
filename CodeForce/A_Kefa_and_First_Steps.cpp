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
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int cnt=1;
    int mx = 1;
    for(int i=1; i<n; i++)
    {
        if(arr[i-1]<= arr[i])
        {
            // cout << arr[i];
            cnt++;
        }
        else
        {
            cnt = 1;
        }
        mx = max(cnt, mx);
    }
    // mx = max(cnt, mx);

    // cout << endl;
    cout << mx;
    return 0;
}