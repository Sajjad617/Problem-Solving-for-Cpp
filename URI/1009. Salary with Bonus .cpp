

#include <bits/stdc++.h>

using namespace std;

int main() {

    string name;
    cin >> name;
    double salary, sell, bonus, TOTAL;
    cin >> salary >> sell;
    bonus = sell*15/100;
    TOTAL = salary + bonus;

    cout << "TOTAL = R$ " << fixed << setprecision(2) << TOTAL  << endl;

    return 0;
}

