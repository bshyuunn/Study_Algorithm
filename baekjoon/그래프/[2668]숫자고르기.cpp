#include <iostream>
#include <vector>
#include <cstring>
#define MAX 101
using namespace std;

int n;
int arr[MAX];
bool visited[MAX] = { false };
vector<int> ans;

// 사이클 검사 dfs
void dfs(int current, int start) {
    if (visited[current]) {
        if (current == start) {
            ans.push_back(start);
        }
    }

    else {
        visited[current] = true;
        dfs(arr[current], start);
    }
}

int main() {
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++) {
        memset(visited, false, sizeof(visited));
        dfs(i, i);
    }

    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << "\n";
    }

    return 0;
}
