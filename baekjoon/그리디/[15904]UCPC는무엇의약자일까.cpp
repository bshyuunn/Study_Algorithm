#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    string s;
    int cnt = 0;
    getline(cin, s);
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'U') {
            if (cnt == 0) cnt = 1;
        }
        else if (s[i] == 'C') {
            if (cnt == 1) cnt = 2;
            if (cnt == 3) {
                cnt = 4;
                break;
            }
        }
        else if (s[i] == 'P') {
            if (cnt == 2) cnt = 3;
        }
    }

    if (cnt == 4) {
        cout << "I love UCPC";
    }
    else {
        cout << "I hate UCPC";
    }
}