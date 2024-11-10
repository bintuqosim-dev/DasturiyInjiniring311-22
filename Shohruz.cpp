#include <iostream>
#include <cmath> // ildiz chiqarish uchun kutubxona

using namespace std;

int main() {
    double x, n;

    cout << "Asos sonni kiriting (x): ";
    cin >> x;

    cout << "Darajani kiriting (n): ";
    cin >> n;

    double result = pow(x, n); // pow(x, n) funksiya yordamida x^n hisoblanadi

    cout << x << " ning " << n << " darajasi: " << result << endl;
    return 0;
}