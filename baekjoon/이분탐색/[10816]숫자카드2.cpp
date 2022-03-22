#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);    
    
    int n;
    int t;
    vector<int> card;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        card.push_back(temp);
    }
    sort(card.begin(), card.end());

    cin >> t;

    int num;
    int anw;
    for (int i = 0; i < t; i++) {
        cin >> num;

        anw = upper_bound(card.begin(), card.end(), num) - lower_bound(card.begin(), card.end(), num);
        cout << anw << " ";
    }

    return 0;
}