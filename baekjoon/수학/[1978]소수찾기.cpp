#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, temp, cnt, ans=0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> temp;        

        cnt = 0;
        if (temp == 1) {
            cnt++;
        }

        for (int j = 2; j <= sqrt(temp); j++) {
            if (temp % j == 0) cnt++;
        }
        if (cnt == 0) {            
            ans++;
        }
    }
    cout << ans;

    return 0;
}