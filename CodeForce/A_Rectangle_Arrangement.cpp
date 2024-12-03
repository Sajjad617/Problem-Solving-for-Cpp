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
        int arr_a[n];
        int arr_b[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr_a[i];
            cin >> arr_b[i];

        } 
        int mxa = INT_MIN;
        int mxb = INT_MIN;
        for(int i=0; i<n; i++)
        {
            mxa = max( mxa, arr_a[i]);
            mxb = max( mxb, arr_b[i]);
        }
        cout << (mxa+mxb)*2 << endll;
    }
    return 0;
}