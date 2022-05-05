#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string S;
    int zero = 0;
    int one = 0;
    int state = 2;

    cin >> S;

    for (int i = 0; i < S.length() ; i++) {
        if (S[i] == '0') {
            if (state != 0) {
                state = 0;
                zero += 1;
            }
        }

        if (S[i] == '1') {        
            if (state != 1) {
                state = 1;
                one += 1;
            }
        }
    }

    cout << min(zero, one);

    return 0;
}