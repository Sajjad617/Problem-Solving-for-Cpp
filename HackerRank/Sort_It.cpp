// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     long long int a[n];
//     for(int i=0; i<n; i++){
//         cin >> a[i];
//     }

//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(a[i]>a[j]){
//                 long long int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     for(int i=0; i<n; i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;
//     for(int i=n-1; i>=0; i--){
//         cout << a[i] << " ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a, a+n);

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
        cout << endl;
    sort(a, a+n, greater<int>());

    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }



    // for(int i=n-1; i>=0; i--){
    //     cout << a[i] << " ";
    // }

    return 0;
}