#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int> maxHeap;
    maxHeap.push(30);
    maxHeap.push(10);
    maxHeap.push(50);

    cout << "Max heap top: " << maxHeap.top() << endl;

    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(30);
    minHeap.push(10);
    minHeap.push(50);

    cout << "Min heap top: " << minHeap.top() << endl;
    return 0;
}
