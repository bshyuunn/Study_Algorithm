#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int city;
    long long total = 0;
    long long min_price;
    vector<long long> length;
    vector<long long> price;

    cin >> city;

    for (int i = 0; i < (city - 1); i++) {
        int temp;
        cin >> temp;
        length.push_back(temp);
    }

    for (int i = 0; i < city; i++) {
        int temp;
        cin >> temp;
        price.push_back(temp);
    }

    min_price = price[0];
    total = min_price * length[0];

    for (int i = 1; i < city; i++) {
        if (price[i] >= min_price) {
            total += min_price * length[i];
        }
        else {
            min_price = price[i];
            total += min_price * length[i];
        }
    }

    cout << total;


    return 0;
}