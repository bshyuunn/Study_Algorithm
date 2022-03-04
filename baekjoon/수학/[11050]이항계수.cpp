#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    int den = 1;
    int num = 1;

    cin >> n >> k;

    for (int i = 0; i < k; i++) den *= n - i;
    for (int i = 0; i < k; i++) num *= 1 + i;

    cout << den / num;

    return 0;
}