#include <iostream>
using namespace std;

int deleteElementAtIndex(int arr[], int n, int index) {
    if (index < 0 || index >= n) {
        cout << "Invalid index" << endl;
        return n;
    }
    for (int i = index; i < n - 1; i++)
        arr[i] = arr[i + 1];
    return n - 1;
}

int main() {
    int arr[] = { 10, 50, 30, 40, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = 2;
    cout << "Array before deletion\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    n = deleteElementAtIndex(arr, n, index);
    cout << "\n\nArray after deletion\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
        
    return 0;
}
