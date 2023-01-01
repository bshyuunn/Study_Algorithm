#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<int> stair;
vector<int> dp(301, 0);

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        stair.push_back(temp);
    }
    dp[1] = stair[1 - 1];
    dp[2] = dp[1] + stair[2 - 1];
    dp[3] = max(stair[0] + stair[2], stair[1] + stair[2]);

    for (int i = 4; i <= n; i++) {
        dp[i] = max(dp[i - 2] + stair[i - 1], dp[i - 3] + stair[i - 2] + stair[i - 1]);
    }

    cout << dp[n] << "\n";

    return 0;
}
