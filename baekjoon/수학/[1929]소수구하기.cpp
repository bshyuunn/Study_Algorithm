#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for (int i = m; i <= n; i++) {
        int num = sqrt(i);
        if (num == 1 && i != 1) {
            cout << i << "\n";
            continue;
        }

        if (i % 2 == 1) {
            for (int j = 2; j <= num; j++) {
                if (i % j == 0) break;
                if (j == num) {
                    cout << i << "\n";
                }
            }
        }

    }
}