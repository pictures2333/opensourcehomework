#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	int r, c;
	while (cin >> r >> c) {
		int ns[99][99];

		cin.ignore();
		for (int i = 0; i < r; i++) {
			stringstream ss;
			string data;

			getline(cin, data);

			ss << data;
			int data2;
			int n = 0;
			while (ss >> data2) {
				ns[i][n] = data2;
				n++;
			}

			ss.str("");
			ss.clear();
		}

		for (int j = 0; j < c; j++) {
			for (int i = 0; i < r; i++) {
				cout << ns[i][j] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}