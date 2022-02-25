# include <iostream>
# include <set>
using namespace std;

int main() {
    set<int> remain;

    for (int i = 0; i < 10; i++) {
        int num;
        cin >> num;

        remain.insert(num % 42);
    }

    cout << remain.size();

    return 0;
}