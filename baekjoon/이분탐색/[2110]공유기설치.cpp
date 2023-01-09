#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long n, c, ans;
vector<long long> v;

int main() {
    cin >> n >> c;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    long long left = 0;
    long long right = 1000000000;
    while (left <= right) {
        long long mid = (left + right) / 2;
        long long cnt = 1;
        long long start = v[0];

        for (int i = 1; i < n; i++) {
            if (v[i] - start >= mid) {
                cnt++;
                start = v[i];
            }
        }
        if (cnt >= c) {
            left = mid + 1;
            ans = mid;
        }
        if (cnt < c) right = mid - 1;
    }
    cout << ans;

    return 0;
}
