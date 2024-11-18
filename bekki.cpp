#include <iostream>
#include <vector>
using namespace std;

int search(const vector<int>& arr, int x) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1;
}

int main() {
    vector<int> arr = {2, 3, 4, 10, 40}; 
    int x; 
    cout << "Qidirilayotgan elementni kiriting: ";
    cin >> x; 

    int result = search(arr, x);

    if (result == -1) {
        cout << "Element mavjud emas" << endl;
    } else {
        cout << "Element " << result << " indeksda mavjud" << endl;
    }

    return 0;
}