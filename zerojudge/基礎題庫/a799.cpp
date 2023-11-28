#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int num;
	cin >> num;
	if (num >= 0) {
		cout << num;
	}
	else {
		cout << num * (-1);
	}

	return 0;
}