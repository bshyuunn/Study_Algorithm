#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int t, n, m;
vector<int> v1;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);    
    
    cin >> t;
    for (int n = 0; n < t; n++) {
        vector<int> v1;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            v1.push_back(temp);
        }
        sort(v1.begin(), v1.end());

        cin >> m;
        for (int i = 0; i < m; i++) {
            int num;
            cin >> num;
            cout << binary_search(v1.begin(), v1.end(), num) << "\n";
        }
    }
}
