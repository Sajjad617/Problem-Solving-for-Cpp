#include <bits/stdc++.h>
using namespace std;

int main() {

    int distance;
    float spent_fuel, avrg;
    cin >> distance >> spent_fuel;
    avrg = distance/spent_fuel;

    cout << fixed << setprecision(3) << avrg << " km/1" << endl;

    return 0;
}

