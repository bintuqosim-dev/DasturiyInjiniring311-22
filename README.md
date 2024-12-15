Dasturiy ta'minot tizimlarini loyihalash fanidan TATU Nurafshon filial 311-22 va 310-22 guruhlari uchun amaliy topshiriqlar
#include <iostream>
using namespace std;

class MathOperations {
private:
    // EKUBni hisoblash uchun xususiy yordamchi funksiya
    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

public:
    // EKUBni hisoblash uchun ochiq funksiya
    int findGCD(int a, int b) {
        return gcd(a, b);
    }

    // EKUKni hisoblash uchun ochiq funksiya
    int findLCM(int a, int b) {
        return (a * b) / gcd(a, b);
    }
};

int main() {
    int num1, num2;

    cout << "Birinchi sonni kiriting: ";
    cin >> num1;
    cout << "Ikkinchi sonni kiriting: ";
    cin >> num2;

    // MathOperations klassidan obyekt yaratish
    MathOperations mathOps;

    // EKUB va EKUKni hisoblash
    int ekub = mathOps.findGCD(num1, num2);
    int ekuk = mathOps.findLCM(num1, num2);

    // Natijalarni chiqarish
    cout << "EKUB: " << ekub << endl;
    cout << "EKUK: " << ekuk << endl;

    return 0;
}
