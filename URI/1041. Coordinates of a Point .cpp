#include <bits/stdc++.h>
using namespace std;

int main() {

    float x, y;
    cin >> x >> y;

    if(0<x && 0<y){
        cout << "Q1" << endl;
    }
    else if(0>x && 0<y){
        cout << "Q2" << endl;
    }
    else if(0>x && 0>y){
        cout << "Q3" << endl;
    }
    else if(0<x && 0>y){
        cout << "Q4" << endl;
    }
    else if(x==0.0 && y==0.0){
        cout << "Origem" << endl;
    }
    else if(y==0 && 0>x || 0<x){
        cout << "Eixo X" << endl;
    }
    else if(x==0 && 0>y || 0<y){
        cout << "Eixo Y" << endl;
    }

    return 0;
}

