#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n = 0, cnt = 0;
    int m = 9999999;
    cin >> n;
    vector<vector <int>> v;

    for (int i = 0; i < n; i++) {
        int a, b;
        vector <int> v2;
        cin >> a >> b;
        v2.push_back(a);
        v2.push_back(b);

        v.push_back(v2);        
    }

    for (int i = 0; i < n; i++) {
        int color;
        m = 9999999;
        color = v[i][1];

        for (int j = 0; j < n; j++) {
            if (j != i && v[j][1] == color) {
                int temp;
                temp = abs(v[j][0] - v[i][0]);
                m = min(m, temp);
            }
        }
        cnt += m;
    }
    
    cout << cnt;

    return 0;
}