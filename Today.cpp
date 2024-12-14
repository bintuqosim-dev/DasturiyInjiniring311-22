// Today.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime> // Hozirgi vaqtni olish uchun
using namespace std;

// Funksiya: Tug'ilgan sanadan hozirgi sana bilan farqni hisoblash
void hisobla(int tYil, int tOy, int tKun, int& yosh, int& oylar, int& kunlar) {
    // Hozirgi sanani olish
    time_t hozirVaqt = time(0);
    tm* hozir = localtime(&hozirVaqt);

    int hYil = hozir->tm_year + 1900;
    int hOy = hozir->tm_mon + 1;
    int hKun = hozir->tm_mday;

    // Yoshni hisoblash
    yosh = hYil - tYil;
    oylar = hOy - tOy;
    kunlar = hKun - tKun;

    // Agar kunlar manfiy bo'lsa, oldingi oydan "qarz" olish
    if (kunlar < 0) {
        oylar--;
        int kunlarOyda;

        // Oyda nechta kun borligini aniqlash
        switch (hOy - 1) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            kunlarOyda = 31; break;
        case 4: case 6: case 9: case 11:
            kunlarOyda = 30; break;
        case 2:
            kunlarOyda = (hYil % 4 == 0 && (hYil % 100 != 0 || hYil % 400 == 0)) ? 29 : 28;
            break;
        default:
            kunlarOyda = 30; // xavfsiz variant
        }
        kunlar += kunlarOyda;
    }

    // Agar oylar manfiy bo'lsa, oldingi yildan "qarz" olish
    if (oylar < 0) {
        yosh--;
        oylar += 12;
    }
}

int main() {
    int tYil, tOy, tKun;
    cout << "Tug'ilgan yilni kiriting: ";
    cin >> tYil;
    cout << "Tug'ilgan oyni kiriting (1-12): ";
    cin >> tOy;
    cout << "Tug'ilgan kunni kiriting (1-31): ";
    cin >> tKun;

    int yosh, oylar, kunlar;
    hisobla(tYil, tOy, tKun, yosh, oylar, kunlar);

    cout << "Siz " << yosh << " yosh, " << oylar << " oy va " << kunlar << " kunliksiz." << endl;

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
