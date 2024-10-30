#include <bits/stdc++.h>
using namespace std;

int main() {

    float x, y, z, mx, mdl, mn;
    cin >> x >> y >> z;

    if(x>y && x>z){
        mx=x;
        if(y>z){
            mdl=y;
            mn=z;}
        else{
            mdl=z;
            mn=y;}
    }

    else if(y>x && y>z){
        mx=y;
        if(x>z){
            mdl=x;
            mn=z;}
        else{
            mdl=z;
            mn=x;}
    }

    else{
        mx=z;
        if(y>x){
            mdl=y;
            mn=x;}
        else{
            mdl=x;
            mn=y;}
    }

    cout << mn << endl << mdl << endl << mx << "\n\n";
    cout << x << endl << y << endl << z << endl;


    return 0;
}

