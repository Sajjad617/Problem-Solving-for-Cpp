#include <bits/stdc++.h>
using namespace std;

int main() {

    float x, y, z, area, trapezium;
    cin >> x >> y >> z;

    if(x+y>z && y+z>x && x+z>y){
        trapezium = x+y+z;
        cout << "Perimetro = " << fixed << setprecision(1) << trapezium << endl;
    }
    else{
        area = ((x+y)/2)*z;
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }

    return 0;
}

