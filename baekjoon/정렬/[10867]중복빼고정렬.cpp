#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    vector<int> vt;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        vt.push_back(temp);
    }

    sort(vt.begin(), vt.end());
    vt.erase(unique(vt.begin(), vt.end()), vt.end());

    for (int i = 0; i < vt.size(); i++) {
        cout << vt[i] << " ";
    }

    return 0;
}