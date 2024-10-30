#include <bits/stdtr1c++.h>
using namespace std;

int main(){

    int num, cunt=0;
    cin >> num;
    while(cunt<6){
        if(num%2!=0){
            cout << num << endl;;
            cunt +=1;
        }
        num++;
    }

 return 0;
}
