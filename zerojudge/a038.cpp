#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	string data;
	getline(cin, data);

	string data2;
	for (int i = 0; i < data.length(); i++) {
		data2 = data[i] + data2;
	}
	cout << stoi(data2);

	return 0;
}