#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n;

    a = n - 1;
    for (int i = 0; ; i++) {
        a = a - (6 * i);

        if (a <= 0) {
            cout << i + 1;
            return 0;
        }
    }  
}