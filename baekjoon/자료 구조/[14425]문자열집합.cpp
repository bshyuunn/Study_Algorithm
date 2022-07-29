#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, m, ans = 0;
    map<string, bool> ma;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        ma.insert({temp, true });
    }

    for (int i = 0; i < m; i++) {
        string temp;
        cin >> temp;

        if (ma[temp] == true) ans++;
    }
    cout << ans;

    return 0;
}