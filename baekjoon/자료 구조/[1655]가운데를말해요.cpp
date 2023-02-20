#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n;
priority_queue<int, vector<int>, greater<int>> minn;
priority_queue<int> maxx;

void solve() {
    if (!maxx.empty() && !minn.empty() && maxx.top() > minn.top()) {
        int a = maxx.top();
        maxx.pop();
        
        int b = minn.top();
        minn.pop();
        
        maxx.push(b);
        minn.push(a);
    }
    cout << maxx.top() << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> n; // 1 <= n < 100000
    
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp; // -10,000 <= temp <= 10,000
        
        if (maxx.size() == minn.size()) {
            maxx.push(temp);
        }
        else {
            minn.push(temp);
        }
        
        solve();
    }
}
