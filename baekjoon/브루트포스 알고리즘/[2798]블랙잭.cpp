#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    int nums[101];

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int sum;
    int result = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = nums[i] + nums[j] + nums[k];
                if (sum <= m) result = max(sum, result);
            }
        }
    }
    cout << result;

    return 0;
}