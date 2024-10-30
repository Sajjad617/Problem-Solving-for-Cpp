

#include <bits/stdc++.h>

using namespace std;

int main() {
    double triangle, radius, trapezium, square, rectangle;
    double a, b, c, pi;
    pi = 3.14159;
    cin >> a >> b >> c;

    triangle = 0.5 * a * c;
    radius = pi * c * c;
    trapezium = ((a+b)/2) * c;
    square = b * b;
    rectangle = a * b;

    cout << "TRIANGULO: " << fixed << setprecision(3) << triangle << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << radius << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezium << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << square << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rectangle << endl;

        return 0;
}

