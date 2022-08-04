#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> graph[100001];
int Visited[100001];
int result[100001];
int cnt = 1;

void dfs(int r) {
    Visited[r] = 1;
    result[r] = cnt;
    cnt++;

    for (int i = 0; i < graph[r].size(); i++) {
        if (Visited[graph[r][i]] == 0) dfs(graph[r][i]);
    }
}

bool compare(int i, int j) {
    return j < i;
}

int main() {
    int n, m, r;
    cin >> n >> m >> r;

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 0; i <= n; i++) sort(graph[i].begin(), graph[i].end(), compare);

    dfs(r);

    for (int i = 1; i <= n; i++) {
        cout << result[i] << "\n";
    }

}