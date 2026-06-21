#include <iostream>
#include <optional>
#include <vector>
using namespace std;

optional<int> findEven(const vector<int>& numbers) {
    for (int n : numbers) {
        if (n % 2 == 0) return n;
    }
    return nullopt;
}

int main() {
    vector<int> numbers = {1, 3, 5, 8};
    optional<int> result = findEven(numbers);

    if (result.has_value()) {
        cout << "First even number: " << result.value() << endl;
    } else {
        cout << "No even number found." << endl;
    }

    return 0;
}
