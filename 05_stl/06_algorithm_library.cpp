#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    vector<int> v = {4, 1, 7, 3, 9};

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    int sum = accumulate(v.begin(), v.end(), 0);
    bool found = binary_search(v.rbegin(), v.rend(), 7);

    cout << "Values descending: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    cout << "Sum: " << sum << endl;
    cout << "7 found: " << boolalpha << found << endl;

    return 0;
}
