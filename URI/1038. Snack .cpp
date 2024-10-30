#include <bits/stdc++.h>
using namespace std;

int main() {

    int code, quantity;
    float total;
    cin >> code >> quantity;

    switch (code){
        case 1:
            total = quantity * 4.00;
            break;

        case 2:
            total = quantity * 4.50;
            break;

        case 3:
            total = quantity * 5.00;
            break;

        case 4:
            total = quantity * 2.00;
            break;

        case 5:
            total = quantity * 1.50;
            break;
    }

cout << "Total: R$ " << fixed << setprecision(2) << total << endl;







    return 0;
}

