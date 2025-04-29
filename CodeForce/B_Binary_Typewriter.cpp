#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int M = 0, c01 = 0, c10 = 0;
        char prev = '0';
        for (int i = 0; i < n; ++i) {
            char cur = s[i];
            if (cur != prev) {
                ++M;
                if (prev == '0') ++c01;
                else             ++c10;
            }
            prev = cur;
        }

        int best_gain;
        if (c01 >= 2 || c10 >= 2)       best_gain = 2;
        else if (M >= 2)                best_gain = 1;
        else                            best_gain = 0;

        int Mprime = M - best_gain;
        cout << (n + Mprime) << '\n';
    }

    return 0;
}
