#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

int counter = 0;
mutex counterMutex;

void incrementCounter() {
    for (int i = 0; i < 100000; i++) {
        lock_guard<mutex> lock(counterMutex);
        counter++;
    }
}

int main() {
    thread t1(incrementCounter);
    thread t2(incrementCounter);

    t1.join();
    t2.join();

    cout << "Final counter: " << counter << endl;
    return 0;
}
