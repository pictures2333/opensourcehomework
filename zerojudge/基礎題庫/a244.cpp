#include <iostream>
#include <string>
#include <sstream>
using namespace std;

// 數字型態用long不然會溢位

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long c, a, b;
		cin >> c >> a >> b;
		if (c == 1) { cout << a + b; }
		else if (c == 2) { cout << a - b; }
		else if (c == 3) { cout << a * b; }
		else if (c == 4) { cout << a / b; }
		cout << endl;
	}

	return 0;
}