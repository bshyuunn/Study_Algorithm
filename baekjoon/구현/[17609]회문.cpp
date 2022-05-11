#include <iostream>
#include <string>
using namespace std;

int solve(int left, int right, int del, string word) {
    while (left < right) {
        if (word[left] != word[right]) {
            if (del == 0) {
                if (solve(left + 1, right, 1, word) == 0 || solve(left, right - 1, 1, word) == 0) return 1;
                    return 2;
            }
            return 2;
        }

        else {
            left++;
            right--;
        }
    }
    return 0;
}


int main() {
    int t;

    cin >> t;

    for (int i = 0; i < t; i++) {
        string word;
        cin >> word;
        cout << solve(0, word.size() - 1, 0, word) << "\n";
    }

    return 0;
}