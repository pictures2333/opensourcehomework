#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int results[20];
	int index = 0;

	cin.ignore();
	for (int i = 0; i < n; i++) {
		// Input
		string data;
		getline(cin, data);

		stringstream ss;
		ss << data;
		int nowarray[20], data2, n2 = 0;
		while (ss >> data2) {
			nowarray[n2] = data2;
			n2++;
		}

		// Compute
		while (true) {
			bool con = true;
			for (int c = 0; c < m-1; c++) {
				if (nowarray[c] > nowarray[c+1]) {
					int temp = nowarray[c];
					nowarray[c] = nowarray[c+1];
					nowarray[c+1] = temp;
					con = false;
				}
			}
			if (con) {
				break;
			}
		}

		int maxit = nowarray[m - 1];
		results[index] = maxit;
		index++;
	}
	int total = 0;
	for (int i = 0; i < n; i++) {
		total += results[i];
	}
	cout << total << endl;

	bool no = true;
	int results2[20], index2 = 0;
	for (int i = 0; i < n; i++) {
		if (total % results[i] == 0) {
			results2[index2] = results[i];
			index2++;
			no = false;
		}
	}
	if (no) { cout << -1; }
	else {
		for (int i=0; i < index2; i++) {
			cout << results2[i];
			if (i != index2 - 1) {
				cout << " ";
			}
		}
	}
	cout << endl;

	return 0;
}