#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    int d;

    while (1) {
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) break;

        d = max({ a, b, c });     

        if ((d*d) == (a * a + b * b + c * c - d*d)) cout << "right" << "\n";
        else cout << "wrong" << "\n";

    }

    return 0;
}