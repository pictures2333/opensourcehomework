#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	// input
	int n, x;
	cin >> n >> x;

	string map;
	cin.ignore();
	getline(cin, map);
	stringstream ss;
	ss << map;
	int themap1[20], themap2[20], index = 0, index2 = 0, data2;
	while (ss >> data2) {
		// cout << x << endl << data2 << endl;
		if (n < data2) {
			themap2[index2] = data2;
			index2++;
		}
		else if (data2 < n) {
			themap1[index] = data2;
			index++;
		}
	}

	if (index > index2) { cout << index; }
	else if (index < index2) { cout << index2; }

	if (index > index2) {
		while (true) {
			bool con = true;
			for (int i = 0; i < index - 1; i++) {
				if (themap1[i] > themap1[i + 1]) {
					int temp = themap1[i];
					themap1[i] = themap1[i + 1];
					themap1[i + 1] = temp;
					con = false;
				}
			}
			if (con) { break; }
		}
		cout << " " << themap1[0];
	}
	else if (index < index2) {
		while (true) {
			bool con = true;
			for (int i = 0; i < index2 - 1; i++) {
				if (themap2[i] > themap2[i + 1]) {
					int temp = themap2[i];
					themap2[i] = themap2[i + 1];
					themap2[i + 1] = temp;
					con = false;
				}
			}
			if (con) { break; }
		}
		cout << " " << themap2[index2 - 1];
	}

	return 0;
}