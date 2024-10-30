#include <bits/stdtr1c++.h>
using namespace std;

int main(){

    int data[5];
    int even_count=0, odd_count=0, pos_count=0, neg_count=0;

    for(int i=0; i<5; i++){
        cin >> data[i];
        if(data[i]%2==0){
            even_count +=1;
        }
        if(data[i]%2!=0){
            odd_count +=1;
        }
        if(data[i]>0){
            pos_count +=1;
        }
        if(0>data[i]){
            neg_count +=1;
        }

    }
    cout << even_count << " valor(es) par(es)" << endl;
    cout << odd_count << " valor(es) impar(es)" << endl;
    cout << pos_count << " valor(es) positivo(s)" << endl;
    cout << neg_count << " valor(es) negativo(s)" << endl;


 return 0;
}
