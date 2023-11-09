#include <iostream>
#include <string>
using namespace std;

int main() {
	int lines;
	cin >> lines;
	cin.ignore();
	for (int i = 0; i < lines; i++) {
		string data2;
		getline(cin, data2);
		
		int total = 1;

		for (int j = 0; j < data2.length(); j++) {
			string data3;
			data3 = data2[j];
			total *= stoi(data3);
		}

		cout << total << endl;
	}

	return 0;
}