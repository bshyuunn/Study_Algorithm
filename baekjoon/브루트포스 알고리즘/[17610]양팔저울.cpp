#include <iostream>
#include <vector>
using namespace std;

int n, sum = 0, ans = 0;
vector<bool> b;
vector<int> v;

void solve(int i, int weight) {
    if (i == n) {
        if (weight > 0) b[weight] = 1;
        return;
    }
    solve(i + 1, weight);
    solve(i + 1, weight + v[i]);
    solve(i + 1, weight - v[i]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        v.push_back(temp);
        sum += temp;
    }
    b.resize(sum + 1, 0);

    solve(0, 0);

    for (int i = 1; i < sum; i++) {
        if (!b[i]) ans += 1;
    }
    cout << ans;

    return 0;
}