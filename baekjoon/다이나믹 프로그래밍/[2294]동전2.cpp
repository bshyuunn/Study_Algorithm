#include <iostream>
#include <vector>
using namespace std;

int n, k;
int dp[10001];
vector<int> money;

int main() {
    cin >> n >> k;
    for(int i=0; i<=k; i++) dp[i] = 99999;
  
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        
        money.push_back(temp);
    }
    
    dp[0] = 0;
    for(int i=0; i<=k; i++) {
        for(int j=0; j<n; j++) {
            if(money[j] > i) continue;
            
            if(dp[i-money[j]] + 1 < dp[i]) {
                dp[i] = dp[i-money[j]] + 1;
            }
            
        }
    }
    if(dp[k] == 99999) {
      cout << -1 << "\n";
      return 0;
    }
    cout << dp[k] << "\n";
    return 0;
}
