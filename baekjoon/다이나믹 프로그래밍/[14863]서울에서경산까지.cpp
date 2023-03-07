#include <iostream>
using namespace std;

int n, k, ans=0;
int dp[101][100001];

int main() {
    cin >> n >> k;
    
    for(int i=0; i<n; i++) {
        int wtime, wmoney, btime, bmoney;
        cin >> wtime >> wmoney >> btime >> bmoney;
        if(i==0) {
            dp[0][wtime] = wmoney;
            dp[0][btime] = max(dp[0][btime], bmoney);
            continue;
        }
        
        for(int j=0; j<=k; j++) {
            if(dp[i-1][j] == 0) continue;
            
            if(j+wtime <= k) {
                dp[i][j+wtime] = max(dp[i][j+wtime], dp[i-1][j]+wmoney);
            }
            if(j+btime <= k) {
                dp[i][j+btime] = max(dp[i][j+btime], dp[i-1][j]+bmoney);
            }            
        }        
    }
    
    for(int i=0; i<=k; i++) {
        ans = max(ans, dp[n-1][i]);
    }
    cout << ans << "\n";
    
    return 0;
}
