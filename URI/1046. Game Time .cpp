#include <bits/stdc++.h>
using namespace std;

int main() {

    int i, j=1, time=0, start, endd;

    cin >> start >> endd;

    if (start>=endd){
        endd = endd+24;
        time = endd-start;
    }
    else{
        time = endd-start;
        }
    cout << "O JOGO DUROU " << time << " HORA(S)" << endl;

    return 0;
}
