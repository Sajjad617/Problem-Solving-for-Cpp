#include <bits/stdc++.h>
using namespace std;

int main() {

    double a, b, c;
    cin >> a >> b >> c;

    if((a>=b+c) || (b>=a+c) || (c>=a+b)){
        cout << "NAO FORMA TRIANGULO" << endl;
    }

    else if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
        cout << "TRIANGULO RETANGULO" << endl;
    }

    else if(a*a>b*b+c*c || b*b>a*a+c*c || c*c>a*a+b*b){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }

    else if(a*a<b*b+c*c || b*b<a*a+c*c || c*c<a*a+b*b){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if(a==b && a==c){
        cout << "TRIANGULO EQUILATERO" << endl;
    }
    else if((a==b && a!=c) || (b==c && b!=a) || (a==c && a!=b)){
        cout << "TRIANGULO ISOSCELES" << endl;
    }

    return 0;
}
