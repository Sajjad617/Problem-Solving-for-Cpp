#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    double x1, x2, y1, y2, distance, x;
    int po = 2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    x = ((x2 - x1)*(x2 - x1)) + ((y2 - y1)*(y2 - y1));
    distance = sqrt(x);

    cout << fixed << setprecision(4) << distance << endl;

    return 0;
}

