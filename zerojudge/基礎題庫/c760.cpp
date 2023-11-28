#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string data;
	getline(cin, data);

	stringstream ss;
	ss << data;
	string data2;
	while (ss >> data2) {
		for (int i = 0; i < data2.length(); i++) {
			if (i == 0) {
				cout << (char)toupper(data2[i]);
			}
			else {
				cout << data2[i];
			}
		}
		cout << endl;
	}

	return 0;
}