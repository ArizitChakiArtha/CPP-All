#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("sample.txt");
    outFile << "Learning C++ file handling." << endl;
    outFile << "This line was written from a C++ program." << endl;
    outFile.close();

    ifstream inFile("sample.txt");
    string line;

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    return 0;
}
