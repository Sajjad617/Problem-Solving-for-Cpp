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
        int a, b;
        cin >> a >> b;
        string s1, s2;
        cin >> s1 >> s2;
        while (!s1.empty() && !s2.empty())
        {
            if(s1.back()==s2.back())
            {
                s1.pop_back();
                s2.pop_back();
            }
            else if(s1.back()=='a')
            {
                s1.push_back('b');
                s1.pop_back();
                s2.pop_back();
            }
            else if(s2.back()=='a')
            {
                s2.push_back('b');
                s1.pop_back();
                s2.pop_back();
            }
        }
        if(s1.size()==s2.size())
            Y;
        else
            no;
        
    }
    return 0;
}
// #include<bits/stdc++.h>
// #define all(x) x.begin(),x.end()
// #define endl '\n'
// #define yes cout<<"Yes"<<endl
// #define no cout<<"No"<<endl

// using namespace std;


// void solve() {
//     int n, m;
//     cin >> n >> m;
//     string s, t;
//     cin >> s >> t;
//     if (s == t) {
//         yes;
//         return;
//     }
//     int i = s.find('a');
//     int j = t.find('a');
//     if (i != j or i == -1 or j == -1) {
//         no;
//         return;
//     }
//     int cnt_s = count(all(s), 'a');
//     int cnt_t = count(all(t), 'a');
//     if (cnt_s == cnt_t) yes;
//     else no;
// }


// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t = 1;
//     cin >> t;
//     while (t--)
//         solve();
//     return 0;
// }