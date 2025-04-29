#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    // string s1;
    // cin >> s1;
    // int n;
    // cin >> n;
    int n;
    cin>>n;
    set<int> levels;
    int q,y;
    cin>>q;
    for(int i=0;i<q;i++){
        int x;
        cin>>x;
        levels.insert(x);
    }
    cin>>y;
    for(int i=0;i<y;i++){
        int w;
        cin>>w;
        levels.insert(w);
    }
    if(levels.size()==n)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while(t--)
    // {
        game();
    // }
    return 0;
}