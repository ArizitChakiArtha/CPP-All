#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    for (auto number : numbers) {
        cout << number * number << " ";
    }
    cout << endl;

    return 0;
}
