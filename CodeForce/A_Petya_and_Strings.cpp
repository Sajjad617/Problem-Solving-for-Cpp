#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    int a_sum = 0;
    int b_sum = 0;
    int flag = 0;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]>='A' && a[i]<='Z')
            a[i] += 32;
        if(b[i]>='A' && b[i]<='Z')
            b[i] += 32;
        
        if(a[i] < b[i])
        {
            flag = 2;
            break;
        }
        else if(a[i] > b[i])
        {
            flag = 1;
            break;
        }
    }
    if(flag==1)
        cout << 1 << endl;
    else if(flag == 2)
        cout << -1 << endl;
    else
        cout << 0 << endl;
        
    return 0;
}