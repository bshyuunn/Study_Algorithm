#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 21

char graph[MAX][MAX];
int Visited[26];
int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { 1, -1, 0, 0 };
int r, c, ans;

void dfs(int x, int y, int cnt) {
    ans = max(ans, cnt);

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx < 0 || ny < 0 || nx >= r || ny >= c) continue;

        if (Visited[graph[nx][ny] - 'A'] == 0) {
            Visited[graph[nx][ny] - 'A'] = 1;
            dfs(nx, ny, cnt + 1);
            Visited[graph[nx][ny] - 'A'] = 0;
        }
    }
}

int main() {
    cin >> r >> c;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) cin >> graph[i][j];
    }

    Visited[graph[0][0] - 'A'] = 1;

    dfs(0, 0, 1);

    cout << ans;
    
    return 0;
}