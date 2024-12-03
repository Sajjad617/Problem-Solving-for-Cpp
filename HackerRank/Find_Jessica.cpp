// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-05/challenges/find-jessica
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    int flag = 0;
    while (ss >> word)
    {
        // cout<<word<<endl;
        if (word == "Jessica")
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
    {
        cout << "NO";
    }
    else
        cout << "YES";
}