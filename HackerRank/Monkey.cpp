#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100005];
    while(cin.getline(s, 100005))
    {
        // sort(s, s+100000);
        int ln = strlen(s);
        sort(s, s+ln);
        // cout << ln;
        // cout << s;
        for (int i = 0; i <ln; i++)
        {
            if (s[i]!=' ')
            {
                cout << s[i];
            }   
        }
        cout << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     char a[1000000];
//     while (cin.getline(a,1000000))
//     {
//         int b = strlen(a);
//         sort(a,a+b);
//         for (int i = 0; i < b; i++)
//         {
//             if (a[i]!=' ')
//             {
//                 cout<<a[i];
//             }
            
//         }
//         cout << endl;

//     }

//     return 0;
// }
