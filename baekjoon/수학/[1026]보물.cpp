#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a > b;
}

int main() {
    int n;
    int anw = 0;
    int A[51];
    int B[51];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    sort(A, A+n, compare);
    sort(B, B+n);

    for (int i = 0; i < n; i++) {
        anw += A[i] * B[i];
    }

    cout << anw;

}