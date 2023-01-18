#include <iostream>
#include <cmath>
#include <queue>
using namespace std;

priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int n;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        if (temp == 0) {
            if (pq.empty()) cout << 0 << "\n";
            else {
                cout << pq.top().second << "\n";
                pq.pop();
            }
        }
        else {
            pq.push({ abs(temp), temp });
        }
    }
    return 0;
}
