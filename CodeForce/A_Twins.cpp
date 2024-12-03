#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    sum = sum/2;
    int sum2=0, cnt=0;
    sort(v.begin(), v.end());
    for(int i=n-1; i>=0; i--)
    {
        sum2 += v[i];
        cnt++;
        if(sum<sum2)
            break;
    }

    cout << cnt;

    

    return 0;
}