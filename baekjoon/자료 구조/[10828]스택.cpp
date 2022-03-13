#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    string com;
    stack <int> st;

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> com;

        if (com == "push") {
            int temp;
            cin >> temp;
            st.push(temp);
        }
        else if (com == "pop") {
            if (!st.empty()) {
                cout << st.top() << "\n";
                st.pop();
            }
            else cout << -1 << "\n";
        }
        else if (com == "size") {
            cout << st.size() << "\n";
        }
        else if (com == "empty") {
            cout << st.empty() << "\n";
        }
        else if (com == "top") {
            if (!st.empty()) cout << st.top() << "\n";
            else cout << -1 << "\n";            
        }

    }

    return 0;
}