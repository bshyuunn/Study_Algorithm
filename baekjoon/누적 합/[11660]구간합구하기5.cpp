#include <bits/stdc++.h>
using namespace std;

#define MAX 1025 + 1

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int graph[MAX][MAX];
    int n, m;    
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> graph[i][j];
            graph[i][j] += graph[i][j - 1] + graph[i - 1][j] - graph[i - 1][j - 1];
        }
    }

    for (int i = 0; i < m; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << graph[c][d] - graph[c][b - 1] - graph[a - 1][d] + graph[a - 1][b - 1] << "\n";
    }

    return 0;
}