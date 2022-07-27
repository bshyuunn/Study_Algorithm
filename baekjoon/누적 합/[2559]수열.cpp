#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k, M;
    vector<int> vec;
    vector<int> sums;
    cin >> n >> k;

    // 배열 만들기
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    // 누적합 배열 만들기
    sums.push_back(vec[0]);
    for (int i = 1; i < vec.size(); i++) {
        sums.push_back(sums[i - 1] + vec[i]);
    }

    // 연속된 부분에서 가장 큰 수 찾기
    M = sums[k-1];
    for (int i = k; i < sums.size(); i++) {
        int temp;
        temp = sums[i] - sums[i-k];

        M = max(M, temp);
    }
    cout << M;

    return 0;
}