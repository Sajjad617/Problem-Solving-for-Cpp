#include <bits/stdc++.h>

using namespace std;

int main() {

    double n;
    cin >> n;

    cout << "NOTAS:" << endl;

    int temp = n*100;
    int div = temp/100;
    int mod = temp%100;

    int note[6] = {100, 50, 20, 10, 5, 2};

    for(int i = 0; i<6; i++){
        cout << div/note[i] << " nota(s) de R$ " << note[i] << ".00" << endl;
        div = div%note[i];
    }
    mod = div*100 + mod;
    cout << "MOEDAS:" << endl;
    int coins[6] = {100, 50, 25, 10, 5, 1};
    for(int j=0; j<6; j++){
        cout << mod/coins[j] << " moeda(s) de R$ " << fixed << setprecision(2) << coins[j]/100.0 << endl;
        mod = mod%coins[j];
    }

    return 0;
}

