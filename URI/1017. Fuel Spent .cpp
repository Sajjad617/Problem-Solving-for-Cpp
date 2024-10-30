#include <bits/stdc++.h>

using namespace std;

int main() {

    int time, speed;
    double amount, fuel = 12.0;
    cin >> time >> speed;
    amount = (time*speed)/fuel;
    cout << fixed << setprecision(3) << amount << endl;

    return 0;
}

