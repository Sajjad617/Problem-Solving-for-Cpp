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
        ll n;
        cin >> n;
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            /* code */
        }
        ll total = 1;
        for (ll i = 0; i < n-1; i++)
        {
            ll f = v[i];
            ll l = v[i+1];
            if(f>=l)
                total += 2;
            else
                total += 1;

        }

        cout << total << endll;

        
    }
    return 0;
}
#include<bits/stdc++.h>

#define all(x) x.begin(), x.end()
#define endl '\n'
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector < int > vec(n);
    int o = 0, z = 0;
    for (auto & it : vec) {
        cin >> it;
        if (it) o++;
        else z++;
    }
    
    o -= vec.back();
    z -= !vec[0];

    cout << n + min(o + z, n - 1) << endl;

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}