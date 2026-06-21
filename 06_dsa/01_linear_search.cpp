#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& arr, int target) {
    for (int i = 0; i < static_cast<int>(arr.size()); i++) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int main() {
    vector<int> arr = {10, 20, 30, 40};
    int index = linearSearch(arr, 30);
    cout << "Index: " << index << endl;
    return 0;
}
