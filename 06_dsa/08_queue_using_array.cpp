#include <iostream>
#include <vector>
using namespace std;

class Queue {
private:
    vector<int> data;
    size_t frontIndex = 0;

public:
    void push(int value) {
        data.push_back(value);
    }

    void pop() {
        if (frontIndex < data.size()) frontIndex++;
    }

    int front() const {
        return data[frontIndex];
    }

    bool empty() const {
        return frontIndex >= data.size();
    }
};

int main() {
    Queue q;
    q.push(10);
    q.push(20);
    cout << "Front: " << q.front() << endl;
    q.pop();
    cout << "Front after pop: " << q.front() << endl;
    return 0;
}
