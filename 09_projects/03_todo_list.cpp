#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string title;
    bool completed = false;
};

void showTasks(const vector<Task>& tasks) {
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". [" << (tasks[i].completed ? 'x' : ' ') << "] "
             << tasks[i].title << endl;
    }
}

int main() {
    vector<Task> tasks = {
        {"Learn C++ basics", true},
        {"Practice STL", false},
        {"Solve DSA problems", false}
    };

    tasks.push_back({"Build a mini project", false});
    tasks[1].completed = true;

    showTasks(tasks);
    return 0;
}
