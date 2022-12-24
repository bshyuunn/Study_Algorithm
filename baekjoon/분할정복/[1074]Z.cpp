#include <iostream>
using namespace std;

int N, r, c;
int ans = 0;

void solve(int x, int y, int size) {
    if (c == x && r == y) {
        cout << ans << "\n";
        return;
    }

    if (c < x + size && r < y + size && c >= x && r >= y) {
        solve(x, y, (size / 2));
        solve(x + (size / 2), y, (size / 2));
        solve(x, y + (size / 2), (size / 2));
        solve(x + (size / 2), y + (size / 2), (size / 2));
    }
    else {
        ans += size * size;
    }
}

int main() {
    cin >> N >> r >> c;
    solve(0, 0, (1 << N));

    return 0;
}
