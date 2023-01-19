#include <iostream>
#include <vector>
#include <algorithm>
#define MAX 101
using namespace std;

int m, n, k;
int cnt;
vector<int> ans;
bool visited[MAX][MAX] = { false };

int moveX[4] = { -1, 1, 0, 0 };
int moveY[4] = { 0, 0, 1, -1 };

void dfs(int y, int x) {
    int nx, ny;

    visited[y][x] = true;
    cnt++;

    for (int i = 0; i < 4; i++) {
        nx = x + moveX[i];
        ny = y + moveY[i];

        if (visited[ny][nx] == false && nx >= 0 && ny >= 0 && nx < n && ny < m) {
            dfs(ny, nx);
        }
    }
}

int main() {
    cin >> m >> n >> k;

    for (int i = 0; i < k; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        for (int j = x1; j < x2; j++) {
            for (int k = y1; k < y2; k++) {
                visited[k][j] = true;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (visited[i][j] == false) {
                cnt = 0;
                dfs(i, j);
                ans.push_back(cnt); 
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
