#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int arr[10001] = { 0 };

    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr[temp] += 1;
    }

    for (int i = 0; i < 10001; i++) {
        while (arr[i] != 0) {
            cout << i << "\n";
            arr[i] -= 1;
        }
    }

    return 0;
}