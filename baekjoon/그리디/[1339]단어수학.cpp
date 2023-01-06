#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int n, ans = 0;
int graph[26];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        int pow = 1;
        for (int j = temp.size() - 1; j >= 0; j--) {
            graph[temp[j] - 'A'] += pow;
            pow *= 10;
        }
    }
    sort(graph, graph + 26, cmp);

    int num = 9;
    for (int i = 0; i < 26; i++) {
        if (graph[i] == 0) break;
        ans += graph[i] * num;
        num -= 1;
    }
    cout << ans;

    return 0;
}
