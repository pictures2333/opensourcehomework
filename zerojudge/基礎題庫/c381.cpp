#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	// speed up?
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	while (cin >> n >> m) {
		if (n == 0 && m == 0) break;
		cin.ignore();

		string data = "";
		for (int i = 0; i < n; i++) {
			string data2;
			getline(cin, data2);
			data += data2;
		}

		string data3;
		getline(cin, data3);
		stringstream ss;
		ss << data3;
		int data4;
		while (ss >> data4) {
			cout << data[data4 - 1];
		}
		cout << endl;
	}

	return 0;
}