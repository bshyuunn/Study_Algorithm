#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n, k, cnt = 0;
    string table;
    vector<int> human;
    cin >> n >> k;
    cin >> table;

    for (int i = 0; i < n; i++) {
        if (table[i] == 'P') {
            human.push_back(i);
        }
    }

    for (int i = 0; i < human.size(); i++) {
        for (int t = human[i] - k; t <= human[i] + k; t++) {
            if (0 <= t && t < table.size() && table[t] == 'H') {
                table[t] = '0';
                cnt += 1;
                cout << table << "\n";
                break;
            }
        }
    }
    cout << cnt;

    return 0;
}