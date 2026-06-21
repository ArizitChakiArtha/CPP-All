#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); i++) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr);

    for (int x : arr) cout << x << " ";
    cout << endl;
    return 0;
}
