#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define MAX 9999999999999

int n;
vector<long long> dp(5001, MAX);

int main() {
    cin >> n;

    dp[3] = 1;
    dp[5] = 1;

    for(int i = 6; i <= n; i++) {
        dp[i] = min(dp[i - 3] + 1, dp[i - 5] + 1);
    }
    if (dp[n] >= MAX) cout << -1 << "\n";
    else cout << dp[n] << "\n";

    return 0;
}
