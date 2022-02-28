#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int count = 1;
    int n, l;
    int loc[1001];

    // 물이 새는 곳 갯수와 테이프 길이 입력받기
    cin >> n >> l;

    // 물이 새는 위치 입력받기
    for (int i = 0; i < n; i++) cin >> loc[i];

    sort(loc, loc + n);

    int st = loc[0];

    for (int i = 1; i < n; i++) {
        if (st + l <= loc[i]) {
            st = loc[i];
            count++;
        }
    }

    cout << count;

    return 0;
}