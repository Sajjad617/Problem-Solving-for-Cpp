#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a, k;
    cin >> a >> k;
    vector<int> v;
    int x;
    for(int i=0; i<a; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int cnt = 0;
    k = v[k-1];
    for(int i=0; i<a; i++)
    {

        if(v[i] >= k && v[i]!=0)
            cnt++;
    }
   
    cout << cnt << endl;
    return 0;
}