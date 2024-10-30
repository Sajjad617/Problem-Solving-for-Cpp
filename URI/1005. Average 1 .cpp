
#include <bits/stdc++.h>

using namespace std;

int main() {

    double a, b, x;
    cin >> a >> b;
    a = a*3.5;
    b = b*7.5;
    x = (a + b)/(3.5+7.5);
    cout << "MEDIA = " << fixed << setprecision(5) << x << endl;
    return 0;
}

