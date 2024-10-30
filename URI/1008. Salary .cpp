
#include <bits/stdc++.h>

using namespace std;

int main() {

    int num, rate;
    cin >> num >> rate;
    float hour;
    cin >> hour;
    float salary = hour * rate;
    cout << "NUMBER = " << num << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}

