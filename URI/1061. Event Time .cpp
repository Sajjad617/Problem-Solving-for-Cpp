#include <iostream>
using namespace std;

int main(){
 string temp;
 int h, hh, hr,m,mm,d,dm,s,ss;

 cin >> temp >> d;
 cin >> h >> temp >> m >> temp >> s;
 cin >> temp >> dm;
 cin >> hh >> temp >> mm >> temp >> ss;

s = ss - s;
m = mm - m;
h = hh - h;
d = dm - d;

if(s<0){
	s+=60;
	m--;
}

if(m<0){
	m+=60;
	h--;
}

if(h<0){
	h+=24;
	d--;
}
     cout << d << " dia(s)" << endl;
     cout << h << " hora(s)" << endl;
     cout << m << " minuto(s)" << endl;
     cout << s << " segundo(s)" << endl;

 return 0;
}



#include <bits/stdc++.h>
using namespace std;

int main() {

    int day, h, mn, sec, time;
    cin >> day >> h >> mn >> sec;

    int day1, h1, mn1, sec1, time1, total;
    cin >> day1  >> h1 >> mn1 >> sec1;

    time = day*86400 + 3600*h + 60*mn + sec;
    time1 = day1*86400 + 3600*h1 + 60*mn1 + sec1;

    total = time1-time;

    cout << total/86400 << " dia(s)" << endl;
    total = total%86400;

    cout << total/3600 << " hora(s)" << endl;
    total = total%3600;

    cout << total/60 << " minuto(s)" << endl;
    total = total%60;

    cout << total << " segundo(s)" << endl;

    return 0;
}
