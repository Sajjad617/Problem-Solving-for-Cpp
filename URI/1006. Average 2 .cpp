
#include <bits/stdc++.h>

using namespace std;

int main() {

    float a, b, c, x;
    cin >> a >> b >> c;
    a = a*2;
    b = b*3;
    c = c*5;
    x = (a + b + c)/(2+3+5);
    cout << "MEDIA = " << fixed << setprecision(1) << x << endl;
    return 0;
}

