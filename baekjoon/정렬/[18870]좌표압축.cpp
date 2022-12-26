#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int n;
vector<int> v;
set<int> s;

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);        
    }
    vector<int> v2(v);
    sort(v2.begin(), v2.end());
    v2.erase(unique(v2.begin(), v2.end()), v2.end());

    for (int i = 0; i < v.size(); i++) {
        auto it = lower_bound(v2.begin(), v2.end(), v[i]);
        cout << it - v2.begin() << " ";
    }

    return 0; 
}
