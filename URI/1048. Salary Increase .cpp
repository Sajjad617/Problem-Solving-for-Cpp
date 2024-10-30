#include <bits/stdc++.h>
using namespace std;

int main() {

    float salary, bonus, total;
    cin >> salary;

    if(0<=salary && salary<=400.0){
        bonus = (salary*15)/100;
        total = salary+bonus;
        cout << "Novo salario: " << fixed << setprecision(2) << total << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl;
        cout << "Em percentual: 15 %" << endl;
    }

    else if(400.0<salary && salary<=800.0){
        bonus = (salary*12)/100;
        total = salary+bonus;
        cout << "Novo salario: " << fixed << setprecision(2) << total << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl;
        cout << "Em percentual: 12 %" << endl;
    }

    else if(800.0<salary && salary<=1200.0){
        bonus = (salary*10)/100;
        total = salary+bonus;
        cout << "Novo salario: " << fixed << setprecision(2) << total << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl;
        cout << "Em percentual: 10 %" << endl;
    }

    else if(1200.0<salary && salary<=2000.0){
        bonus = (salary*7)/100;
        total = salary+bonus;
        cout << "Novo salario: " << fixed << setprecision(2) << total << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl;
        cout << "Em percentual: 7 %" << endl;
    }

    else if(2000.0<salary){
        bonus = (salary*4)/100;
        total = salary+bonus;
        cout << "Novo salario: " << fixed << setprecision(2) << total << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << bonus << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}

