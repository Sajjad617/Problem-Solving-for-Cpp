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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (auto &vl : v)
            cin >> vl;
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int sum = 0;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            sum += v[i];
            if (sum >= k)
            {
                if (sum > k)
                {
                    sum -= v[i];
                    cout << k - sum << endl;
                    flag = false;
                    break;
                }
                else
                {
                    cout << sum - k << endl;
                    flag = false;
                    break;
                }
            }
        }
        if(flag)
            cout << k - sum << endl;
    }
    return 0;
}