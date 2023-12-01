#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int n, m;
	while (cin >> n >> m) {

		int total = 0, count = 0;
		while (true) {
			total += (n + count);
			count++;
			if (total > m) { break; }
		}
		cout << count << endl;
	}

	return 0;
}