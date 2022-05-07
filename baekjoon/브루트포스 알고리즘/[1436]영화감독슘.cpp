#include <iostream>
#include <string>
using namespace std;

int ans(int N) {
    int n = 666;
    int ans = 0;

    while (ans != N) {
        string temp;
        temp = to_string(n);
        for (int i = 0; i < temp.size() - 2; i++) {
            if (temp[i] == '6' && temp[i + 1] == '6' && temp[i + 2] == '6') {
                ans += 1;
                break;
            }
        }
        n += 1;
    }
    return (n - 1);
}

int main() {
    int N;
    cin >> N;

    cout << ans(N);
}