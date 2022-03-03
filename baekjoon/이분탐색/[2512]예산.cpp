#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    vector<int> request;

    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        request.push_back(x);
    }
    sort(request.begin(), request.end());

    cin >> m;

    int start = 0;
    int end = request[n - 1];
    int result, sum; 

    while (start <= end) {
        sum = 0;
        int mid = (start + end) / 2;

        for (int i = 0; i < n; i++) sum += min(mid, request[i]);

        if (m >= sum) {
            result = mid;
            start = mid + 1;
        }
        else end = mid - 1;

    }
    cout << result;

    return 0;
}