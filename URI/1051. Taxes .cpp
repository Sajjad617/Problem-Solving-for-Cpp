#include <bits/stdc++.h>
using namespace std;

int main() {

    float salary, up30k, up45k, more45k, total;
    cin >> salary;

    if(0.0<=salary && salary<=2000.0){
        cout << "Isento" << endl;
    }

    else{
        if(salary>4500.0){
            more45k = salary-4500.0;
            more45k = (more45k*28)/100.0;
            up45k = (1500*18)/100.0;
            up30k = (1000*8)/100.0;
            total = more45k+up45k+up30k;
        }
        else if(salary>3000.0){
            up45k = salary-3000;
            up45k = (up45k*18)/100.0;
            up30k = (1000*8)/100.0;
            total = up45k+up30k;
        }
        else if(salary>2000.0){
            up30k = salary-2000;
            up30k = (up30k*8)/100;
            total = up30k;
        }

    cout << "R$ " << fixed << setprecision(2) << total << endl;


    }

    return 0;
}

