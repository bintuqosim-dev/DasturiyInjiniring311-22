#include <iostream>
using namespace std;

// Palindromni tekshiruvchi funksiya
bool isPalindrome(int num) {
    int kiritilganSon = num;
    int aylantirilganSon = 0;

    // Sonni teskarisiga aylantirish
    while (num > 0) {
        int a = num % 10;
        aylantirilganSon = aylantirilganSon * 10 + a;
        num /= 10;
    }

    // Teskari son original songa teng bo‘lsa, palindromdir
    return kiritilganSon == aylantirilganSon;
}

int main() {
    int num;

    cout << "Sonni kiriting: ";
    cin >> num;

    // Bir xonali sonlarni tekshirish
    if (num >= 0 && num < 10) {
        cout << "Xatolik: Bir xonali son kiritildi. Iltimos, ikki yoki undan ortiq xonali son kiriting." << endl;
        return 1; // Dasturdan xatolik bilan chiqish
    }

    if (isPalindrome(num)) {
        cout << num << " palindromik son." << endl;
    }
    else {
        cout << num << " palindromik son emas." << endl;
    }

    return 0;
}
