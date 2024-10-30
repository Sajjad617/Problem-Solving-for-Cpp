#include <bits/stdc++.h>
using namespace std;

int main(){

    int x;
    cin >> x;

    float a, b, c, total=0.0;
    for(int i=1; i<=x; i++){
        cin >> a >> b >> c;
        a *=2;
        b *=3;
        c *=5;
        total = (a+b+c)/(2.0+3.0+5.0);
        printf("%.1f\n", (a+b+c)/(2.0+3.0+5.0));
    }

 return 0;
}


