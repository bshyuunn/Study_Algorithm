#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    int same = 1;
    int same_eye;
    cin >> a >> b >> c;

    if (a == b) {
        same++;
        same_eye = a;
        if (b == c) same++;
    }
    else {
        if (b == c) {
            same++;
            same_eye = b;
        }
        if (a == c) {
            same++;
            same_eye = a;
        }
    }

    if (same == 1) cout << max({ a, b, c }) * 100;
    if (same == 2) cout << 1000 + 100 * same_eye;
    if (same == 3) cout << 10000 + 1000 * same_eye;

    return 0;
}