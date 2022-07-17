#include <iostream>
using namespace std;

void solve(int n) {
    int sum = 0;
    int cnt = 1;   

    while (n > sum) {
            sum += cnt;
            cnt++;
        }
    cnt--;

    int ord;
    ord = n - (sum - cnt);

    if (cnt % 2 == 1) {
        cout << cnt + 1 - ord << "/" << ord;
    }
    if (cnt % 2 == 0) {
        cout << ord << "/" << cnt + 1 - ord ;
    }
}

int main() {
    int n;
    cin >> n;
    solve(n);
}
