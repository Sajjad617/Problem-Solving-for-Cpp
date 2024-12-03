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
    int student, puzzle;
    cin >> student >> puzzle;
    int shop[puzzle];
    for(int i=0; i<puzzle; i++)
    {
        cin >> shop[i];
    }
    sort(shop,shop+puzzle);
    // for(int i=0; i<puzzle; i++)
    // {
    //     cout << shop[i] << " ";
    // }
    int mx = 0, mn = INT_MAX;
    for(int i=0; i<=puzzle-student; i++)
    {
        int cal = shop[i+student-1]-shop[i];
        mn = min(mn, cal);
    }
    cout << mn;
    // cout << endl << shop[0] <<  ' ' << shop[0+2] << endl;
    return 0;
}