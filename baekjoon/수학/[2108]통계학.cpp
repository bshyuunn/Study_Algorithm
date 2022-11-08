#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int sum = 0;
    vector<int> nums;
    vector<int> checks(8001);
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;

        sum += temp;
        checks[temp + 4000]++;
        nums.push_back(temp);
    }
    sort(nums.begin(), nums.end());

    int max = -9999, cnt = 0;
    int ans;
    for (int i = 0; i < 8001; i++) {
        if (checks[i] == 0) continue;
        else if (checks[i] > max) {
            cnt = 1;
            max = checks[i];
            ans = i - 4000;
            continue;
        }
        else if (checks[i] == max) {
            cnt += 1;
            if (cnt == 2) ans = i - 4000;
        }
    }

    // 산술평균 출력
    int ans1 = round((float)sum / n);

    if (ans1 == -0) ans1 = 0;
    cout << ans1 << "\n";

    // 중앙값 출력
    cout << nums[n / 2] << "\n";

    // 최빈값 출력
    cout << ans << "\n";

    // 범위 출력
    cout << nums.back() - nums.front() << "\n";
}
