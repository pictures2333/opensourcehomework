// 202001_1 猜拳
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int tfwin(int p1, int p2) {
	if (p1 == p2) {
		return 2;
	}
	else if ((p1 == 2 && p2 == 5) || (p1 == 0 && p2 == 2) || (p1 == 5 && p2 == 0)) {
		return 1;
	}
	else if ((p1 == 2 && p2 == 0) || (p1 == 0 && p2 == 5) || (p1 == 5 && p2 == 2)) {
		return 0;
	}
}
int hwin(int p2) {
	if (p2 == 0) {
		return 5;
	}
	else if (p2 == 2) {
		return 0;
	}
	else if (p2 == 5) {
		return 2;
	}
}

int main() {
	int f, n2;
	cin >> f >> n2;
	string data;
	cin.ignore();
	getline(cin, data);
	stringstream ss;
	ss << data;
	int datas[10], n = 0;
	int data2;
	while (ss >> data2) {
		datas[n] = data2;
		n++;
	}

	int record[10];
	for (int i = 0; i < n2; i++) {
		int result;
		if (i == 0) {
			result = tfwin(f, datas[i]);
			record[i] = f;
		}
		else {
			if (i >= 2 && datas[i-1] == datas[i - 2]) {
				result = tfwin(hwin(datas[i-1]), datas[i]);
				record[i] = hwin(datas[i-1]);
			}
			else {
				result = tfwin(datas[i-1], datas[i]);
				record[i] = datas[i - 1];
			}
		}
		cout << record[i] << " ";
		if (result == 1) {
			cout << ": Won at round " << i + 1;
			break;
		}
		else if (result == 0) {
			cout << ": Lost at round " << i + 1;
			break;
		}
		else if (result == 2 && i == n2 - 1) {
			cout << ": Drew at round " << i + 1;
		}
	}

	return 0;
}