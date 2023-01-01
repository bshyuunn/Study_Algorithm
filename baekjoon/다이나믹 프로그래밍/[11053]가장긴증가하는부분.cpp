#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, ans=1;
vector<int> v(1001, 0);
vector<int> dp(1001, 1);

int main() {    
    cin >> n;

    for (int i = 1; i <= n; i++) {
        int temp;
        cin >> temp;
        v[i] = temp;
    }

    dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (v[i] > v[j]) {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
        ans = max(dp[i], ans);
    }
    cout << ans << "\n";

    return 0;
}
