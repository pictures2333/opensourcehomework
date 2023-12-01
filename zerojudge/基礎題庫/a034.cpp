#include <iostream>
#include <bitset>
using namespace std;

int main() {
	int n;
	while (cin >> n) {
		bitset<32>ans(n);
		bool con = false;
		for (int i = 31; i >= 0; i--) {
			if (ans[i]) { con = true; }
			if (con) { cout << ans[i]; }
		}
		cout << endl;
	}

	return 0;
}