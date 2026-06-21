#include <iostream>
#include <thread>
using namespace std;

void printMessage(const string& message) {
    for (int i = 1; i <= 3; i++) {
        cout << message << " " << i << endl;
    }
}

int main() {
    thread t1(printMessage, "Thread A");
    thread t2(printMessage, "Thread B");

    t1.join();
    t2.join();

    cout << "Both threads finished." << endl;
    return 0;
}
