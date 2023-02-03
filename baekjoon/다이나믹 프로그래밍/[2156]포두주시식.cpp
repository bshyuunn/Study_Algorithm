#include <iostream>
#include <algorithm>
#define MAX 10001
using namespace std;

int dp[MAX];
int table[MAX];
int n;

int main() {
    cin >> n;
    
    for(int i=1; i<=n; i++) {
        cin >> table[i];
    }
    
    dp[1] = table[1];
    dp[2] = table[1] + table[2];
    for(int i=3; i<=n; i++) {
        dp[i] = max({(dp[i-1]), (dp[i-2]+table[i]), (dp[i-3] + table[i-1] + table[i])});
    }
    
    cout << dp[n];
}
