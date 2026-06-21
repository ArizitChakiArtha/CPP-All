#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1, 3};

    sort(v.begin(), v.end());
    v.push_back(10);

    cout << "Values: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    cout << "Max value: " << *max_element(v.begin(), v.end()) << endl;
    return 0;
}
