#include <iostream>
using namespace std;

int main() {
    int marks[5] = {85, 90, 76, 88, 92};
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }

    double average = sum / 5.0;
    cout << "Average marks: " << average << endl;

    return 0;
}
