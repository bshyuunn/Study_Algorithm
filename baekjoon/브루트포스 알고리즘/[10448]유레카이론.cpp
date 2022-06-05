#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

int find(int num) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            for (int k = 0; k < v.size(); k++) {
                if (v[i] + v[j] + v[k] == num) {
                    
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    int t, num;    

    cin >> t;
    for (int i = 1; i < 47; i++) {  
        int n;
        n = i * (i + 1) / 2;

        v.push_back(n);
    }

    for (int i = 0; i < t; i++) {
        cin >> num;
        cout << find(num) << "\n";
    }

    return 0;
}