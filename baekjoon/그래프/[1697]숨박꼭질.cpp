#include <iostream>
#include <queue>
using namespace std;

int n, k;
queue<pair<int, int>> qu;
bool visit[100001];

int bfs() {
    queue<pair <int, int>> qu;
    qu.push({ n, 0 });

    while (!qu.empty()) {
        int a = qu.front().first;
        int time = qu.front().second;
        qu.pop();

        if (a == k) return time;

        if (a + 1 < 100001 && !visit[a + 1]) {
            visit[a + 1] = true;
            qu.push({ a + 1, time + 1 });
        }

        if (a - 1 >= 0 && !visit[a - 1]) {
            visit[a - 1] = true;
            qu.push({ a - 1, time + 1 });
        }

        if (a * 2 < 100001 && !visit[a * 2]) {
            visit[a * 2] = true;
            qu.push({ a * 2, time + 1 });
        }
    }

}

int main() {
    cin >> n >> k;

    cout << bfs();
}