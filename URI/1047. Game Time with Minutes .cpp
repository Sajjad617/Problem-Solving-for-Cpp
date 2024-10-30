#include <bits/stdc++.h>
using namespace std;

int main() {

    int h, m, h1, m1, total;
    cin >> h >> m >> h1 >> m1;

    total= ((h1*60)+m1) - ((h*60)+m);

    if(total<=0){
        total = total+24*60;
    }

    cout << "O JOGO DUROU " << total/60 << " HORA(S) E " << total%60 << " MINUTO(S)" << endl;

    return 0;
}




   /* int hour, minute, hour1,  minute1, th=0, tm=0;

    cin >> hour >> minute >> hour1 >> minute1;


    if (hour>=hour1){
        hour1=24+hour1;
        th = hour1-hour;
        if(minute>=minute1){
            minute1=minute1+60;
            tm=minute1-minute;
            th=th+1;
            if(th>24){
                th=24;
                tm=0;
            }

        }
        else{
            tm=minute1-minute;
        }
    }
    else{
        th = hour1-hour;
        if(minute>=minute1){
            minute1=minute1+60;
            tm=minute1-minute;
            th=th-1;
            if(th>24){
                th=24;
                tm=0;
            }
        }
        else{
            tm=minute1-minute;
        }
    } */

