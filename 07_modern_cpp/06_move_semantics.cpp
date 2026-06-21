#include <iostream>
#include <vector>
using namespace std;

class BigData {
private:
    vector<int> data;

public:
    BigData() : data(1000000, 1) {
        cout << "Constructor" << endl;
    }

    BigData(const BigData& other) : data(other.data) {
        cout << "Copy constructor" << endl;
    }

    BigData(BigData&& other) noexcept : data(move(other.data)) {
        cout << "Move constructor" << endl;
    }
};

BigData createData() {
    BigData temp;
    return temp;
}

int main() {
    BigData data = createData();
    return 0;
}
