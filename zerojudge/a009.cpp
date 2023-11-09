#include <iostream>
#include <string>
using namespace std;

int main() {
	string data;
	while (getline(cin, data)) {

		for (int i = 0; i < data.length(); i++) {
			cout << char(data[i] - 7);
		}
		cout << endl;
	}

	return 0;
}