#include <iostream>
#include <stack>
#include <string>
using namespace std;

void solve(string PS) {
    stack<char> st;
    int len = PS.length();

    for (int i = 0; i < len; i++) {
        char c = PS[i];
        if (c == '(') st.push(PS[i]);
        else {
            if (st.empty()) {
                cout << "NO" << "\n";
                return;
            }
            else st.pop();
        }

    }
    if (st.empty()) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}

int main() {
    int t;
    string PS;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> PS;
        solve(PS);
    }

    return 0;
}