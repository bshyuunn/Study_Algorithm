#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        int M = 0;
        vector<int> v;

        cin >> n;

        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < v.size() - 2; i++) {
            M = max(M, v[i + 2] - v[i]);
        }

        cout << M << "\n";

    }
}