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
        vector<int> v(k, 0);
        for(int i=0 ; i<k; i++)
        {
            int brand, value;
            cin >> brand >> value;
            brand--;
            v[brand] += value;
        }
        sort(v.begin(), v.end(), greater<int>());
        int cal = 0;
        for(int i=0; i<min(n, k); i++)
        {
            cal += v[i];
        }
        cout << cal << endll;

    }
    return 0;
}