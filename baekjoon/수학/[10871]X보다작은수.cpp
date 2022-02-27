#include <iostream>
using namespace std;

int main() {
    int N, X, A[10000];
    cin >> N >> X;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
        
    for (int i = 0; i < N; i++) {
        if (A[i] < X) cout << A[i] << " ";
    }
    
    return 0;
}