#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k;
    int sum = 0;
    vector<int> money;
    cin >> k;

    for (int i = 0; i < k; i++) {
        int temp;
        cin >> temp;

        if (temp != 0) {
            money.push_back(temp);
        }
        else {
            money.pop_back();
        }
    }
    for (int i = 0; i < money.size() ; i++) {
        sum += money[i];
    }
    cout << sum;

    return 0;
}