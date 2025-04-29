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

    string str;
    int len,k=0;
    stack<char>st;
    cin >> str;
    for(int i=0; i<str.size(); i++)
    {
        if(st.size()==0) 
        { 
            st.push(str[i]);
            continue;
        }
        if( st.top()==str[i])
        {
            k++;
            st.pop();
        }
        else
            st.push(str[i]);
    }

    if (k%2)
        Y;
    else
        no;
    return 0;
}