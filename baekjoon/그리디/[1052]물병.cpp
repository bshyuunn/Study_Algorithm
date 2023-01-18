#include <iostream>
using namespace std;

int n, k, ans = 0;

int main() {
    cin >> n >> k;

    if (n <= k) {
        cout << 0 << "\n";
    }
    else {        

        while (1) {
            int num = n;
            int cnt = 0;

            while (num > 0) {
                if (num % 2 == 0) num /= 2;
                else {
                    num /= 2;
                    cnt += 1;
                }
            }

            if (k >= cnt) {
                break;
            }
            n += 1;
            ans += 1;
        }
        cout << ans << "\n";
    }

    return 0;
}
