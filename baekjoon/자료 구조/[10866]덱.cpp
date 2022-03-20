#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;
    int num;
    string cmd;
    deque<int> dq;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> cmd;

        if (cmd == "push_front") {
            cin >> num;
            dq.push_front(num);
        }
        if (cmd == "push_back") {
            cin >> num;
            dq.push_back(num);
        }
        if (cmd == "pop_front") {
            if (!dq.empty()) { 
                cout << dq.front() << "\n";
                dq.pop_front();
            }
            else cout << -1 << "\n";
        }
        if (cmd == "pop_back") {
            if (!dq.empty()) {
                cout << dq.back() << "\n";
                dq.pop_back();
            }
            else cout << -1 << "\n";
        }
        if (cmd == "size") cout << dq.size() << "\n";
        if (cmd == "empty") cout << dq.empty() << "\n";
        if (cmd == "front") {
            if (!dq.empty()) cout << dq.front() << "\n";
            else cout << -1 << "\n";
        }
        if (cmd == "back") {
            if (!dq.empty()) cout << dq.back() << "\n";
            else cout << -1 << "\n";
        }

    }
}