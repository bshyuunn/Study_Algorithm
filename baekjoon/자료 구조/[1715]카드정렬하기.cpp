#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    int ans = 0;
    priority_queue<int, vector<int>, greater<int>> q;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        q.push(temp);
    }

    if (q.size() == 1) {
        cout << 0;
        return 0;
    }

    while(q.size() > 1) {
        int a, b;
        a = q.top();
        q.pop();
        b = q.top();
        q.pop();
        ans += a + b;
        q.push(a + b);
    }

    cout << ans;

    return 0;
}