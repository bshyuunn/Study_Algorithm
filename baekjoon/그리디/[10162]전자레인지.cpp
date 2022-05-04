#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int T;
    int count = 0;
    vector<int> button = { 300, 60, 10 }; // A : 5분, B : 1분, C : 10초
    vector<int> num;
    cin >> T;

    for (int i = 0; i < 3; i++) {
        count += T / button[i];
        num.push_back(T / button[i]);
        T = T % button[i];
        
    }

    if (T == 0)
        for (int i = 0; i < num.size(); i++)
            cout << num[i] << " ";
    else
        cout << -1 << "\n";

    return 0;
}
