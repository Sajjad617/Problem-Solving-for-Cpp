#include <bits/stdc++.h>
using namespace std;

int main() {

    double a, b, c;
    cin >> a >> b >> c;

    double temp = b*b-4*a*c;

    if(temp<0 || a==0 ){
        cout << "Impossivel calcular" << endl;
    }

    else{
        cout << "R1 = " << fixed << setprecision(5) << (-b + sqrt(temp))/(2*a) << endl;
        cout << "R2 = " << fixed << setprecision(5) << (-b - sqrt(temp))/(2*a) << endl;

    }
    return 0;
}21

