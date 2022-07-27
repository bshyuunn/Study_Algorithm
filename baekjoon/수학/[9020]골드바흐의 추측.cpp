#include <iostream>
#include <cmath>
using namespace std;

bool Prime(int i) {
	int rt;
	rt = sqrt(i);
	if (rt == 1 && i != 1) return true;
	if (i % 2) {
		for (int j = 2; j <= rt; j++) {
			if (!(i % j)) return false;
			if (j == rt) return true;
		}
		return false;
	}
}

int main() {
	int T;
	cin >> T;

	while(T--) {
		int n;
		cin >> n;
		for (int i = n / 2; i >= 2; i--) {
			if (Prime(i) && Prime(n - i)) {
				cout << i << " " << n - i << '\n';
				break;
			}
		}
	}
}