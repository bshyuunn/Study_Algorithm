#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string input;
    while (1) {
        cin >> input;

        if (input == "0") break;

        string a = input;
        reverse(input.begin(), input.end());

        if (a == input) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }
    }


    return 0;
}