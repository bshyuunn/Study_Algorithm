#include <iostream>
using namespace std;

long long n, m;
long long ans, sum = 0;
long long rem[1001];

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        sum += temp;
        rem[sum % m]++;
    }

    ans = rem[0];

    for (int i = 0; i < 1001; i++) {
        ans += rem[i] * (rem[i] - 1) / 2;
    }

    cout << ans;

    return 0;
}