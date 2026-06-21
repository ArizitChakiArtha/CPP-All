#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> numbers = {5, 1, 4, 2, 3};

    sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b;
    });

    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
