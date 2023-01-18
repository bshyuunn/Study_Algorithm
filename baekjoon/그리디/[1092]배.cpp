#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, ans = 0;
vector<int> crane;
vector<int> weight;

bool compare(int a, int b) {
    return a > b;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        crane.push_back(temp);
    }
    sort(crane.begin(), crane.end());

    cin >> m;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        weight.push_back(temp);
    }
    sort(weight.begin(), weight.end());

    if (crane[0] < weight[0]) {
        cout << -1 << "\n";
        return 0;
    }

    while (!weight.empty()) {
        ans += 1;

        vector<int> remove;

        int temp = min(weight.size(), crane.size());
        for (int i = 0; i < temp; i++) {
            if (crane[i] >= weight[i]) {
                remove.push_back(i);
            }
        }

        sort(remove.begin(), remove.end(), compare);
        for (int i = 0; i < remove.size(); i++) {
            weight.erase(weight.begin() + remove[i]);
        }
    }
    cout << ans << "\n";

    return 0;
}
