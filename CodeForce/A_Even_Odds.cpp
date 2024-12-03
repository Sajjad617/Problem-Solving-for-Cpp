#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    long long int a, b;
    cin >> a >> b;
    if(a%2==0)
        a = a/2;
    else
        a = (a/2) + 1;
    // int cal = a/2;
    if(b<=a)
    {
        // b boro
        cout << (b*2)-1 << endl;
    }
    else
    {
        // b choto
        cout << (b-a)*2 << endl;
    }

    return 0;
}

// 1 2 3 4 5 6 7 8 9 10

// 1 3 5 7 9 2 4 6 8 10

// 6

// 1 2 3 4 5  6  7  8 9 10 11 12 13

// 1 3 5 7 9 11 13  2 4 6  8  10 12
