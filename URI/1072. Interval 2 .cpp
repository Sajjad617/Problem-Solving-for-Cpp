#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, out=0, in=0, x;
    cin >> a;
    long long int data;
    for(int i=0; i<a; i++){
        cin >> data;
        if(data>=10 && data<=20){
            in +=1;
        }
        else{
           out +=1;
        }
    }


    cout << in << " in" << endl;
    cout << out << " out" << endl;

 return 0;
}

