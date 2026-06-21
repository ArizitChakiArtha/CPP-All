#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> data;

public:
    void push(int value) {
        data.push_back(value);
    }

    void pop() {
        if (!data.empty()) data.pop_back();
    }

    int top() const {
        return data.back();
    }

    bool empty() const {
        return data.empty();
    }
};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    cout << "Top: " << st.top() << endl;
    st.pop();
    cout << "Top after pop: " << st.top() << endl;
    return 0;
}
