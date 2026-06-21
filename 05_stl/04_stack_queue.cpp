#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    cout << "Stack top: " << st.top() << endl;
    st.pop();

    queue<int> q;
    q.push(100);
    q.push(200);
    q.push(300);

    cout << "Queue front: " << q.front() << endl;
    q.pop();

    return 0;
}
