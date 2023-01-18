#include <iostream>
#include <algorithm>
#define MAX 501
using namespace std;

int n, m, b, ans = 0x3f3f3f3f, ans_height;
int world[MAX][MAX];

int main() {
    cin >> n >> m >> b;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> world[i][j];

        }
    }    

    for (int i = 0; i <= 256; i++) {
        int add = 0, sub = 0;
        for (int j = 0; j < n; j++) {
            for (int k = 0; k < m; k++) {
                int temp = world[j][k] - i;
                if (temp > 0) sub += temp;
                else if (temp < 0) add -= temp;
            }
        }

        if (add <= sub + b) {
            int time = sub * 2 + add;
            if (ans >= time) {
                ans = time;
                ans_height = i;
            }
        }
    }    
    cout << ans << " " << ans_height << "\n";

    return 0;
}
