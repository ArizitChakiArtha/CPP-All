#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string text = "banana";
    map<char, int> frequency;

    for (char ch : text) {
        frequency[ch]++;
    }

    for (const auto& pair : frequency) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}
