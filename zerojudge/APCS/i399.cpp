#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	// input
	int a, b, c;
	cin >> a >> b >> c;
	int numberNums[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	numberNums[a - 1] += 1;
	numberNums[b - 1] += 1;
	numberNums[c - 1] += 1;

	int max = -1;
	for (int i = 0; i < 9; i++) {
		if (numberNums[i] > max) {
			max = numberNums[i];
		}
	}
	cout << max;

	for (int i = 8; i >= 0; i--) {
		if (numberNums[i] != 0) {
			cout << " " << i+1;
		}
	}

	return 0;
}