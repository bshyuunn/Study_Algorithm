#include <iostream>
using namespace std;

int solve(int floor, int nums) {
	if (nums == 1) return 1;
	if (floor == 0) return nums;

	return (solve(floor - 1, nums) + solve(floor, nums - 1));
}

int main() {
	int T, k, n;

	cin >> T;

	while (T--) {		
		cin >> k >> n;
		cout << solve(k, n) << "\n";
	}

	return 0;
}