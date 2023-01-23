#include <iostream>
#include <queue>
#include <string>
using namespace std;

string dp[61];
int t[5] = {60, 10, -10, 1, -1};
queue<int> q;
int T;

bool compare(string a, string b) {
    int la = 0, lb = 0;
    
    for(int i=0; i<=4; i++) {
        la += a[i] - '0';
        lb += b[i] - '0';
    }
    
    if(la != lb) return la<lb;
    else return a<b;   
}

int main() {
    for(int i=0; i<=60; i++) {
        dp[i] = "99999";
    }
    dp[0] = "00000";
    q.push(0);
    
    while(!q.empty()) {
        int cur = q.front();
        q.pop();
        
        for(int i=0; i<5; i++) {
            int next = cur + t[i];
            if(next < 0 or next > 60) continue;
            
            string temp = dp[cur];
            temp[i]++;
            
            if(compare(temp, dp[next])) {
                dp[next] = temp;
                q.push(next);
            }
        }
    }
    
    cin >> T;
    
    for(int i=0; i<T; i++) {
        int ans[5] = {0};
        int time;
        
        cin >> time;        
        ans[0] = time / 60;
        time = time % 60;
        
        // cout << "time : " << time << "\n";
        for(int j=0; j<5; j++) {
            ans[j] += dp[time][j] - '0';
            // cout << "dp[time][j] - '0' : " << dp[time][j] << "\n";
        }
        
        for(int j=0; j<5; j++) {
            cout << ans[j] << " ";
        }
        cout << "\n";
    }
    
    
    return 0;
}
