#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int binarySearch(const vector<int>& arr, int x) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; 

        if (arr[mid] == x) {
            return mid; 
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1; 
        }
    }
    return -1; 
}

int main() {
    vector<int> arr = {-2, 4, 7, 10, 15, 19, 23, 27};
    int x = -2; 
    sort(arr.begin(), arr.end());
    int result = binarySearch(arr, x);
    if (result != -1) {
        cout << "Qiymat " << x << " massivda " << result << " indeksda topildi." << endl;
    } else {
        cout << "Qiymat topilmadi." << endl;
    }

    return 0;
}
