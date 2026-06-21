#include <iostream>
#include <vector>
using namespace std;

void dfs(const vector<vector<int>>& graph, int node, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            dfs(graph, neighbor, visited);
        }
    }
}

int main() {
    vector<vector<int>> graph = {
        {1, 2},
        {0, 3, 4},
        {0, 5},
        {1},
        {1},
        {2}
    };

    vector<bool> visited(graph.size(), false);
    cout << "DFS from node 0: ";
    dfs(graph, 0, visited);
    cout << endl;
    return 0;
}
