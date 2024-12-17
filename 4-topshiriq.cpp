#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Talaba ma'lumotlari uchun klass
class Talaba {
public:
    int id;
    string ism;
    vector<int> baholar;

    Talaba(int id, string ism, vector<int> baholar)
        : id(id), ism(ism), baholar(baholar) {}

    double OrtachaBahoniHisoblash() {
        double summa = 0;
        for (int baho : baholar) {
            summa += baho;
        }
        return baholar.empty() ? 0 : summa / baholar.size();
    }
};

// Ro'yxatdagi talabalarga ishlov beruvchi klass
class TalabaTizimi {
private:
    vector<Talaba> talabalar;

public:
    void TalabaQoshish(int id, string ism, vector<int> baholar) {
        talabalar.push_back(Talaba(id, ism, baholar));
    }

    void BarchaTalabalarniChopEtish() {
        cout << "Ro'yxatdagi talabalar:\n";
        for (Talaba t : talabalar) {
            cout << "ID: " << t.id << ", Ism: " << t.ism
                 << ", O'rtacha Baho: " << t.OrtachaBahoniHisoblash() << endl;
        }
    }
};

int main() {
    TalabaTizimi tizim;

    // Statik ma'lumotlar qo'shish
    tizim.TalabaQoshish(1, "Ali", {85, 90, 78});
    tizim.TalabaQoshish(2, "Bobur", {88, 76, 92});
    tizim.TalabaQoshish(3, "Zarina", {95, 89, 87});

    tizim.BarchaTalabalarniChopEtish();

    return 0;
}

