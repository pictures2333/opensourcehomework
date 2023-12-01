#include <iostream>
#include <bitset>
using namespace std;

int main() {
	int h, m;
	cin >> h >> m;
	
	h += 2;
	m += 30;
	if (m >= 60) {
		m -= 60;
		h++;
	}
	if (h >= 24) {
		h -= 24;
	}

	if (h < 10) {
		cout << "0" << h;
	}
	else { cout << h; }
	cout << ":";
	if (m < 10) {
		cout << "0" << m;
	}
	else { cout << m; }
	cout << endl;

	return 0;
}