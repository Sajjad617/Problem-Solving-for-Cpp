#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;

    for(int i=1; i<=x; i++){
        if(i%2 ==0){
            continue;
        }
        cout << i << endl;
    }

    return 0;
}

