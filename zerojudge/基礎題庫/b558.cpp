#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		int total = 1;
		for (int i = 1; i <= n; i++) {
			total += (i - 1);
		}
		cout << total << endl;
	}

	return 0;
}