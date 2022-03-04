#include <iostream>
#include <algorithm>
using namespace std;

void solve(int h, int w, int n) {
    int floor = n % h; // 층 수   
    int num = (n / h) + 1; // 호실 번호

    if (floor == 0) {
        floor += h;
        num -=1;
    }

    cout << (floor * 100) + (num) << "\n";
}

int main() {
    int t;
    cin >> t;

    int h, w, n;
    for (int i = 0; i < t; i++) {
        cin >> h >> w >> n;
        solve(h, w, n);
    }

    return 0;
}