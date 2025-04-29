#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if(n%10==0)
            n = n/10;
        else
            n--;
        /* code */
    }
    cout << n << endl;
    
    return 0;
}