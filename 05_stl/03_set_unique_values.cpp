#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> uniqueNumbers = {5, 2, 2, 8, 5, 1};

    for (int value : uniqueNumbers) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
