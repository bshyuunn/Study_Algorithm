#include <iostream>
using namespace std;

#define MAX 300 + 1

int main() {
    int n, m, t;
    int a, b, c, d;
    int graph[MAX][MAX];

    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> graph[i][j];
            graph[i][j] += graph[i][j - 1] + graph[i - 1][j] - graph[i - 1][j - 1];
        }
    }

    cin >> t;

    while (t--) {
        cin >> a >> b >> c >> d;
        cout << graph[c][d] - graph[a - 1][d] - graph[c][b - 1] + graph[a - 1][b - 1] << "\n";
    }

    return 0;
}