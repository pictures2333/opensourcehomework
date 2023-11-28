#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string data;
	getline(cin, data);

	int i = 0;
	bool brokeone = false;
	for (i; i < data.length()-1; i++) {
		string com;
		for (int b = 0; b < 1; b++) {
			com += data[i+b];
		}
		if (com == " ") {
			if (brokeone == false) {
				cout << endl;
				brokeone = true;
			}
		}
		else {
			cout << data[i];
			brokeone = false;
		}
	}
	for (i+1; i < data.length(); i++) {
		cout << data[i];
	}

	return 0;
}