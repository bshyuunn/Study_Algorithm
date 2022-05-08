#include <iostream>
#include <queue>
using namespace std;

int main() {
    int N;
    queue<int> qu;
    cin >> N;

    for (int i = 1; i < N + 1; i++) {
        qu.push(i);
    }

    while (1 != qu.size()) {
        qu.pop();
        qu.push(qu.front());
        qu.pop();
    }
    cout << qu.front();

    return 0;
}