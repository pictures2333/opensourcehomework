#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string data;
	while (getline(cin, data)) {
		stringstream ss;
		float data2;
		float total=0;
		float average = 0;

		ss << data;
		int n = 0;
		while (ss >> data2) {
			if (n == 0) {
				average = data2;
			}
			else {
				total += data2;
			}
			n++;
		}
		if ((total / average) > 59) {
			cout << "no" << endl;
		}
		else {
			cout << "yes" << endl;
		}
	}

	return 0;
}