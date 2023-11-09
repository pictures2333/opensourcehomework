#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int r, c, m;
	while (cin >> r >> c >> m) {
		// 輸入處理區
		int map[10][10];
		cin.ignore();
		for (int i = 0; i < r; i++) {
			string data;
			getline(cin, data);
			int data2;
			stringstream ss;
			ss << data;
			int n = 0;
			while (ss >> data2) {
				map[i][n] = data2;
				n++;
			}
		}
		string data;
		getline(cin, data);
		int data2;
		stringstream ss;
		ss << data;
		int actions[10];
		int n = 0;
		while (ss >> data2) {
			actions[n] = data2;
			n++;
		}

		// 運算區
		for (int a = 0; a < m; a++) {
			// 上下翻轉
			if (actions[a] == 1) {
				int maps2[10][10];
				for (int i = 0; i < r; i++) {
					for (int j = 0; j < c; j++) {
						maps2[r - 1 - i][j] = map[i][j];
					}
				}
				for (int i = 0; i < r; i++) {
					for (int j = 0; j < c; j++) {
						map[i][j] = maps2[i][j];
					}
				}
			}
			// 逆時針旋轉
			else if (actions[a] == 0) {
				int maps2[10][10];
				for (int i = 0; i < r; i++) {
					for (int j = 0; j < c; j++) {
						maps2[j][r-1-i] = map[i][j];
					}
				}
				int temp = c;
				c = r;
				r = temp;
				for (int i = 0; i < r; i++) {
					for (int j = 0; j < c; j++) {
						map[i][j] = maps2[i][j];
					}
				}
			}
		}

		// 輸出區
		cout << r << " " << c << endl;
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << map[i][j];
				if (j != (c - 1)) {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
		
	return 0;
}