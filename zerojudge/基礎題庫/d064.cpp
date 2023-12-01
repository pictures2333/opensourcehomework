#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	int i;
	cin >> i;
	if (i % 2 == 0) { cout << "Even"; }
	else if (i % 2 == 1) { cout << "Odd"; }

	return 0;
}