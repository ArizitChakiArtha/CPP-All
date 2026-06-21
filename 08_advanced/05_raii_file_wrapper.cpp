#include <iostream>
#include <fstream>
#include <stdexcept>
using namespace std;

class FileWriter {
private:
    ofstream file;

public:
    explicit FileWriter(const string& filename) {
        file.open(filename);
        if (!file) {
            throw runtime_error("Could not open file.");
        }
        cout << "File opened." << endl;
    }

    void write(const string& text) {
        file << text << endl;
    }

    ~FileWriter() {
        if (file.is_open()) {
            file.close();
            cout << "File closed automatically." << endl;
        }
    }
};

int main() {
    FileWriter writer("raii_output.txt");
    writer.write("RAII manages resources safely.");
    return 0;
}
