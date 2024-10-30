#include <bits/stdc++.h>
using namespace std;

int main(){

    int x[100], temp=0, position;
    for(int i=0; i<100; i++){
        cin >> x[i];
        if(temp<x[i]){
            temp=x[i];
            position = i;
        }

    }
    position += 1;
    cout << temp << endl;
    cout << position << endl;



 return 0;
}


