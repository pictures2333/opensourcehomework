#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int total = 0;
	int qus;
	cin >> qus;

	if (qus <= 10) {
		total += qus * 6;
	}
	else if (qus > 10 && qus <= 20) {
		total += 10 * 6 + (qus - 10) * 2;
	}
	else if (qus > 20 && qus <= 40) {
		total += 10 * 6 + 10 * 2 + (qus - 20) * 1;
	}
	else if (qus > 40) {
		total = 100;
	}
	
	cout << total;
	
	return 0;
}