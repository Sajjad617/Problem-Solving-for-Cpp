

#include <bits/stdc++.h>

using namespace std;

int main() {
    int code, unit;
    int code2, unit2;
    float price, price2, total;
    cin >> code >> unit >> price;
    cin >> code2 >> unit2 >> price2;
    total = (unit*price) + (unit2 * price2);

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total << endl;
    return 0;
}

