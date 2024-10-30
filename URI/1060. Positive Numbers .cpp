#include <bits/stdc++.h>
using namespace std;

int main() {
    float nmbr[6], sum=0;
    for(int i=0; i<6; i++){
       cin >> nmbr[i];
       if(nmbr[i]>0){
        sum=sum+1;
       }
    }
    cout << sum << " valores positivos" << endl;

    return 0;
}

