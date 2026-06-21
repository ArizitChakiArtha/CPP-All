#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        for (size_t j = 0; j + 1 < arr.size() - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {5, 1, 4, 2, 8};
    bubbleSort(arr);

    for (int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}
