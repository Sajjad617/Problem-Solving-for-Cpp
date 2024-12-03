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
    int n, m;
    cin >> n >> m;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int cnt=0;
    int cal = 0;
    sort(arr, arr + n);
    for(int i=0; i<n; i++)
    {
        if(cnt<m && arr[i]<0)
        {
            cnt++;
            cal += arr[i];
        }
    }
    cout << cal*(-1) << endll;
    return 0;
}