#include <bits/stdc++.h>
using namespace std;

int main() {

    int maior, a, b, c, m;
    cin >> a >> b >> c;
    maior = (a+b+abs(a-b))/2;
    m = (maior+c+abs(maior-c))/2;
    cout << m << " eh o maior" << endl;

    return 0;
}
