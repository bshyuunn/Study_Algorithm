#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, k;
    queue<int> qu;
    cin >> n >> k;

    for (int i = 1; i < n + 1; i++) {
        qu.push(i);
    }

    cout << "<";
    while (!qu.empty()) {
        for (int i = 0; i < k - 1; i++) {
            qu.push(qu.front());
            qu.pop();
        }
        cout << qu.front();
        qu.pop();

        if (!qu.empty()) {
            cout << ", ";
        }

    }
    cout << ">";    
}