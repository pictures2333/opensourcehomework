#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	int year;
	while (cin >> year) {
		if ((year % 100 != 0 && year % 4 == 0) || year % 400 == 0) {
			cout << "閏年" << endl;
		}
		else {
			cout << "平年" << endl;
		}
	}

	return 0;
}