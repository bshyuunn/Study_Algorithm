#include <iostream>
#include <vector>
using namespace std;

int n, m, ans;
vector<int> v;

int main() {
    cin >> n >> m;
    
    for(int i=0; i<n; i++) {
        int temp;
        cin >> temp;  
        v.push_back(temp);
    }

    int start = 0;
    int end = 0;
    int sum = 0;
    
    while(end <= n) {
        if(sum < m) {
            sum += v[end];
            end++;
        }
        else if(sum >= m) {
            sum -= v[start];
            start++;
        }
        if(sum == m) ans++;        
    }
    cout << ans << "\n";
    
    return 0;
}
