#include <bits/stdc++.h>
using namespace std;

int main(){

    int i, num;
    cin >> num;
    int x, all=0, rabbit=0, rat=0, frog=0;
    char name;
    float rabbit1, rat1, frog1;
    for(i=1; i<=num; i++){
        cin >> x >> name;
        if(name=='C'){
            rabbit += x;
        }
        else if(name=='R'){
            rat += x;
        }
        else if(name=='S'){
            frog += x;
        }
    }
    all = rabbit+rat+frog;
    cout << "Total: " << all << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbit << endl;
    cout << "Total de ratos: " << rat << endl;
    cout << "Total de sapos: " << frog << endl;

    rabbit1 = (rabbit*100.0)/all;
    rat1 = (rat*100.0)/all;
    frog1 = (frog*100.0)/all;

    cout << "Percentual de coelhos: " << fixed << setprecision(2) << rabbit1 << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << rat1 << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << frog1 << " %" << endl;

 return 0;
}


