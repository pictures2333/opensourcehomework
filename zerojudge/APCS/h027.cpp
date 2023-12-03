#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	// input
	int s, t, n, m, r;
	cin >> s >> t >> n >> m >> r;

	int numArray1[10][100], numArray2[10][100];

	cin.ignore();
	for (int i = 0; i < s; i++) {
		string data;
		getline(cin, data);
		int data2, index = 0;
		stringstream ss;
		ss << data;
		while (ss >> data2) {
			numArray1[i][index] = data2;
			index += 1;
		}
	}
	for (int i = 0; i < n; i++) {
		string data;
		getline(cin, data);
		int data2, index = 0;
		stringstream ss;
		ss << data;
		while (ss >> data2) {
			numArray2[i][index] = data2;
			index += 1;
		}
	}

	// compute
	int total = 0;
	long minN = 99999;
	for (int a = 0; a <= n-s; a++) {
		for (int b = 0; b <= m-t; b++) {
			int distance = 0, sumArray = 0, sumArray2 = 0;
			for (int c = 0; c < s; c++) {
				for (int d = 0; d < t; d++) {
					if (numArray1[c][d] != numArray2[a + c][b + d]) distance += 1;
					sumArray += numArray1[c][d];
					sumArray2 += numArray2[a + c][b + d];
				}
			}
			if (distance <= r) { 
				total += 1; 
				int result = abs(sumArray - sumArray2);
				if (result < minN) {
					minN = result;
				}
			}
		}
	}

	if (total == 0) {
		cout << 0 << endl << -1;
	}
	else {
		cout << total << endl << minN;
	}

	return 0;
}