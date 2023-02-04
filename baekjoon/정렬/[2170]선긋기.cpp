#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair <int, int> > v;
int n, ans;

bool cmp(pair <int, int> a, pair <int, int> b) {
    if(a.first != b.first) return a.first < b.first;
    else {
        return a.second < b.second;
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    
    for(int i=0; i<n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    sort(v.begin(), v.end(), cmp);
    
    ans = v[0].second - v[0].first;
    int end = v[0].second;
        
    for(int i=1; i<v.size(); i++) {
        if (v[i].first < end) v[i].first = end; 

      if(v[i].first < v[i].second) {
            ans += v[i].second - v[i].first;
        
            end = v[i].second;          
        }        
    }
    cout << ans << "\n";
    
    return 0;
}
