#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    long long int a;
    for(int i = 0; i<n; i++){
        cin >> a;

        if(a%2!=0 && 0>a){
            cout << "ODD NEGATIVE" << endl;
        }

        else if(a%2!=0 && 0<a){
            cout << "ODD POSITIVE" << endl;
        }

        else if(a==0){
            cout << "NULL" << endl;
        }

        else if(a%2==0 && 0>a){
            cout << "EVEN NEGATIVE" << endl;
        }

        else if(a%2==0 && 0<a){
            cout << "EVEN POSITIVE" << endl;
        }
    }


 return 0;
}

