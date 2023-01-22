#include<iostream>
#include <vector>
#include <algorithm>
#include <limits>
using namespace std;

long long n, ans = numeric_limits<long long>::max();
vector<int> v;

int main() {
    cin >> n;
    
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    // 짝수가 왼쪽
    int cnt = 0;
    long long cnt_ans = 0;
    for(int i=0; i<v.size(); i++) {
        if(v[i] % 2 == 0) {
            cnt_ans = cnt_ans + i - cnt;
            // cout << cnt_ans << "\n";
            cnt += 1;            
        }
    }
    ans = min(ans, cnt_ans);
    
    // 홀수가 왼쪽
    cnt = 0;
    cnt_ans = 0;
    for(int i=0; i<v.size(); i++) {
        if(v[i] % 2 == 1) {
            cnt_ans = cnt_ans + i - cnt;
            // cout << cnt_ans << "\n";
            cnt += 1;            
        }
    }
    ans = min(ans, cnt_ans);   
    
    cout << ans << "\n";    
    return 0;
}
