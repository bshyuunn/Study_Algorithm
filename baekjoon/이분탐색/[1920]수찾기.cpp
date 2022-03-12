#include <iostream>
#include <algorithm>
using namespace std;

void binarySearch(int key, int nums[100001], int n) {
    int start = 0;
    int end = n - 1;
    int mid;

    while (end >= start) {
        mid = (start + end) / 2;
        if (nums[mid] == key) {
            cout << 1 << "\n";
            return;
        }
        else if (nums[mid] > key) end = mid - 1;
        else if (nums[mid] < key) start = mid + 1;
    }

    cout << 0 << "\n";
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m;
    int nums[100001];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums, nums + n);

    cin >> m;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        binarySearch(temp, nums, n);
    }

    return 0;
}