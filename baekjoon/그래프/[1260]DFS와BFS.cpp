#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void dfs(int start, vector<int> graph[], bool check[]) {
    check[start] = 1;
    cout << start << " ";

    for (int i = 0; i < graph[start].size(); i++) {
        int next = graph[start][i];

        if (!check[next]) {
            dfs(next, graph, check);
        }
    }
}

void bfs(int start, vector<int> graph[], bool check[]) {
    queue<int> q;   

    q.push(start);
    check[start] = 1;

    while (!q.empty()) {
        int temp;
        temp = q.front();
        q.pop();

        cout << temp << " ";

        for (int i = 0; i < graph[temp].size(); i++) {
            if (!check[graph[temp][i]]) {
                q.push(graph[temp][i]);
                check[graph[temp][i]] = 1;
            }
        }

    }

}

int main() {
    int n, m, start;
    cin >> n >> m >> start;
    vector<int> graph[1001];
    bool check[1001];

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        sort(graph[i].begin(), graph[i].end());
    }

    fill(check, check + n + 1, false);
    dfs(start, graph, check);
    
    cout << "\n";

    fill(check, check + n + 1, false);
    bfs(start, graph, check);
}