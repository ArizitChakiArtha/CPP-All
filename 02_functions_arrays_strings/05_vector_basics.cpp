#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30};
    numbers.push_back(40);
    numbers.push_back(50);

    cout << "Vector size: " << numbers.size() << endl;

    for (int value : numbers) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
