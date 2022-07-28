#include <iostream>
#include <queue>

#define MAX 1001
using namespace std;

int graph[MAX][MAX];
queue<pair<int, int >> q;

void bfs(int m, int n) {
    int da[4] = { 1, 0, -1, 0 };
    int db[4] = { 0, 1, 0, -1 };

    while (!q.empty()) {
        int a = q.front().first;
        int b = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int na = a + da[i];
            int nb = b + db[i];

            if (na < 0 || nb < 0 || na >=  n || nb >= m) continue;
            if (graph[na][nb] == 0) {
                graph[na][nb] = graph[a][b] + 1;
                q.push({ na, nb });
            }
        }
    }
}

int main() {
    int m, n, ans = 0;
    cin >> m >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> graph[i][j];
            if (graph[i][j] == 1) q.push({ i, j });
        }
    }

    bfs(m, n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (graph[i][j] == 0) {
                cout << -1;
                return 0;
            }
            if (ans < graph[i][j]) ans = graph[i][j];
        }
    }
    cout << ans - 1;

    return 0;
}