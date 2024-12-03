// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-05/challenges/replace-word
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        // s=string f=find
        string s, f;
        cin >> s >> f;
        while (s.find(f) != -1)
        {
            s.replace(s.find(f), f.size(), "#");
        }
        cout << s << endl;
    }
}