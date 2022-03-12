#include <iostream>
#include <algorithm>
using namespace std;

int nums[500001];

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    int m;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        nums[i] = temp;
    }
    sort(nums, nums + n);

    cin >> m;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        cout << binary_search(nums, nums + n, temp) << " ";
    }

    return 0;
}