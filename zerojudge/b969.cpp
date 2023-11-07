#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string data;
	getline(cin, data);

	string hello = "";
	getline(cin, hello);

	stringstream ss;
	string data2 = "";
	ss << data;
	while (ss >> data2) {
		cout << hello << ", " << data2 << endl;
	}

	return 0;
}