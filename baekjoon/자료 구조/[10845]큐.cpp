#include <iostream>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;

int main() {
    int n;
    queue <int> q;
    string com;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> com;
        if (com == "push") {
            int temp;
            cin >> temp;
            q.push(temp);
        }
        else if (com == "pop") {
            if (!q.empty()) {
                cout << q.front() << "\n";
                q.pop();
            }
            else cout << -1 << "\n";
        }
        else if (com == "size") cout << q.size() << "\n";

        else if (com == "empty") cout << q.empty() << "\n";

        else if (com == "front") {
            if (!q.empty()) cout << q.front() << "\n";
            else cout << -1 << "\n";
        }

        else if (com == "back") {
            if (!q.empty()) cout << q.back() << "\n";
            else cout << -1 << "\n";
        }
    }

    return 0;
}