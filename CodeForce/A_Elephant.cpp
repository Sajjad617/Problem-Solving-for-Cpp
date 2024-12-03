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
    int div = n/5;
    int mod = n%5;
    if(mod==0)
        cout << div << endll;
    else
        cout << div+1 << endll;


    return 0;
}