#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int k, n;
    vector<long long> lan;
    cin >> k >> n;

    for (int i = 0; i < k; i++) {
        long long temp;
        cin >> temp;
        lan.push_back(temp);
    }

    long long max_lan;
    max_lan = *max_element(lan.begin(), lan.end());
    
    long long ans = 0;
    long long left = 1;
    long long right = max_lan;

    while (left <= right) {        
        long long mid;
        mid = (left + right) / 2;
        
        int lan_cnt = 0;        

        for (int i = 0; i < lan.size(); i++) {                         
            lan_cnt += lan[i] / mid;
        }

        if (lan_cnt >= n) {            
            left = mid + 1;
            ans = max(ans, mid);
        }
        else {
            right = mid - 1;
        }
    }

    cout << ans << "\n";
}
