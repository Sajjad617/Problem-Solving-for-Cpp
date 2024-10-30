#include <bits/stdc++.h>
using namespace std;

int main() {

    float n1, n2, n3, n4, avrg;
    cin >> n1 >> n2 >> n3 >> n4;

    avrg = (n1+n2+n3+n4)/4;

    n1 = n1*2;
    n2 = n2*3;
    n3 = n3*4;
    n4 = n4*1;

    avrg = (n1+n2+n3+n4)/(2+3+4+1);

    cout << "Media: " << fixed << setprecision(1) << avrg << endl;

    if(avrg >= 7.0){
        cout << "Aluno aprovado." << endl;
    }
    else if(avrg < 5.0){
        cout << "Aluno reprovado." << endl;
    }
    else if(avrg >= 5.0 && avrg < 7){
        cout << "Aluno em exame." << endl;
        float score;
        cin >> score;
        cout << "Nota do exame: " << score << endl;
        score = (score + avrg)/2;
        if(score >= 5.0){
            cout << "Aluno aprovado." << endl;
        }
        else if(score < 5.0){
            cout << "Aluno reprovado." << endl;

        }
        cout << "Media final: " << fixed << setprecision(1) << score << endl;

    }

    return 0;
}

