#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    while (1) {
        int cnt = 0;
        cin >> n;
        if (n == 0) return 0;

        for (int i = n + 1; i <= n * 2; i++) {
            int num = sqrt(i);
            if (num == 1 && i != 1) {
                cnt++;
                continue;
            }

            if (i % 2 == 1) {
                for (int j = 2; j <= num; j++) {
                    if (i % j == 0) break;
                    if (j == num) cnt++;
                }
            }         
        }    
        cout << cnt << "\n";
    }

    return 0;
}