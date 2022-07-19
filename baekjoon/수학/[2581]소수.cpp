#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int M, N, cnt, sum = 0, min = -1;
    cin >> M >> N;

    for (int i = M; i <= N; i++) {
        cnt = 0;

        if (i == 1) cnt++;

        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) cnt++;
            }        

        if (cnt == 0) {
            if (min == -1) min = i;
            sum += i;
        }
    }
    if (min != -1) cout << sum << "\n";    
    cout << min;
    
    return 0;
}