#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

// Rim raqamlari qiymatlari
int romanToInt(const string& s) {
    unordered_map<char, int> romanValues = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    int n = s.length();

    for (int i = 0; i < n; ++i) {
        int value = romanValues[s[i]];

        // Keyingi belgi katta qiymatga ega bo'lsa, ayiramiz
        if (i + 1 < n && value < romanValues[s[i + 1]]) {
            result -= value;
        }
        else {
            result += value;
        }
    }

    return result;
}

int main() {
    string roman;
    cout << "Rim raqamini kiriting (masalan, XIV): ";
    cin >> roman;

    int arabic = romanToInt(roman);
    cout << "Arab raqami: " << arabic << endl;

    return 0;
}
