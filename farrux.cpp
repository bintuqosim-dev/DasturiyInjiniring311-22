#include <iostream>
#include <vector>
using namespace std;
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printArray(const vector<int>& arr) {
    for (int m : arr) {
        cout << m << " ";
    }
    cout << endl;
}
int main() {
    cout<<"Xudoyberdiyev Farrux"<<endl;
    int n;
    cout << "Elementlar sonini kiriting=  ";
    cin >> n;

    vector<int> arr(n);
    cout << "Elementlarni kiriting:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Saralanmagan array: ";
    printArray(arr);
    bubbleSort(arr);
    cout << "Saralangan array (Bubble Sort): ";
    printArray(arr);

    return 0;
}
