#include <bits/stdtr1c++.h>
using namespace std;

int main(){

    int a, b, sum=0;
    cin >> a >> b;
    if(a>b){
        for(b=b+1;b<a;b++){
            if(b%2!=0){
            sum = sum+b;
            }
        }
    }
    else if(a==b){
        sum = 0;
    }
    else if(a<b){
        for(a=a+1;a<b;a++){
            if(a%2!=0){
            sum = sum+a;
        }
        }
    }

    cout << sum << endl;

 return 0;
}

