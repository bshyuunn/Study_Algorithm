#include <iostream>
#include <vector>
using namespace std;

long long n, m, result;
vector<long long> v;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    long long left = 0;
    long long right = 1000000000;

    while (left <= right) {
        long long total = 0;
        long long mid = (left + right) / 2;
        for (int i = 0; i < n; i++) {
            if (v[i] > mid) total += v[i] - mid;
        }
        if (total < m) right = mid - 1;
        if (total >= m) {
            result = mid;
            left = mid + 1;
        }
    }
    cout << result;

    return 0;
}
