#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {    
    int N, K;
    int count = 0;
    vector<int> val;

    cin >> N >> K;

    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        val.push_back(temp);
    }

    for(int i=N-1; i>=0; i--) {
        count += K / val[i];
        K = K % val[i];
    }

    cout << count;

    return 0;
}