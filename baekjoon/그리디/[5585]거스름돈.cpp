#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int money;
    int count = 0;
    vector<int> changes = { 500, 100, 50, 10, 5, 1 };
    cin >> money;
    money = 1000 - money;

    for (int i = 0; i < 6; i++) {
        if (changes[i] <= money) {
            count += money / changes[i];
            money = money % changes[i];
        }
    }
    cout << count << "\n";


    return 0;
}