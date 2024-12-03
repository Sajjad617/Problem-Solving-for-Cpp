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
        int a, b, c;
        cin >> a >> b >> c;
        string s;
        cin >> s;
        int cal = 11;
        int x = 0;
        int y = 0;
        bool flag = false;
        while(cal--)
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='N')
                {
                    y++;
                    if(b==x && c==y)
                    {
                        flag = true;
                        break;
                    }
                }
                else if(s[i]=='E')
                {
                    x++;
                    if(b==x && c==y)
                    {
                        flag = true;
                        break;
                    }
                }
                else if(s[i]=='S')
                {
                    y--;
                    if(b==x && c==y)
                    {
                        flag = true;
                        break;
                    }
                }
                else if(s[i]=='W')
                {
                    x--;
                    if(b==x && c==y)
                    {
                        flag = true;
                        break;
                    }
                }
                
            }
            if(flag)
                break;
            else if(b==x && c==y)
            {
                flag = true;
                break;
            }
            
            // cout << x << " " << b << "<>" << y << " " << c << endll;
        }
        // cout << x << " " << b << "<>" << y << " " << c << endll;

        if(flag)
            Y;
        else
            no;
    }
    return 0;
}