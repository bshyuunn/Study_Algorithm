#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

char graph[101][101];
bool visit[101][101];
int n;

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };

void bfs(int a, int b) {
    queue<pair <int, int>> q;
    q.push({ a, b });
    visit[a][b] = true;

    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;

            if (visit[nx][ny] == false && graph[nx][ny] == graph[x][y]) {
                visit[nx][ny] = true;                
                q.push({ nx, ny });
            }
        }
    }
}

int main() {
    int ans = 0, ans2 = 0;
    cin >> n;

    for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) cin >> graph[i][j];                
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (visit[i][j] == false) {
                bfs(i, j);
                ans++;
            }
        }
    }

    memset(visit, false, sizeof(visit));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (graph[i][j] == 'R') graph[i][j] = 'G';
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (visit[i][j] == false) {
                bfs(i, j);
                ans2++;
            }
        }
    }
    cout << ans << " " << ans2;

    return 0;
}