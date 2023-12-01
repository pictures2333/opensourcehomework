#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	// input
	int y, x;
	cin >> y >> x;
	cin.ignore();
	
	int map[20][40];
	for (int i=0; i < y; i++) {
		string data;
		getline(cin, data);
		stringstream ss;
		ss << data;
		int index = 0, data2;
		while (ss >> data2) {
			map[i][index] = data2;
			index++;
		}
	}

	// compute
	int total = 0;
	while (true) {
		bool con = true;
		// 橫排
		int temp;
		int ti, tj;
		for (int i = 0; i < y; i++) {
			temp = -1;
			ti = -1, tj = -1;
			for (int j = 0; j < x; j++) {
				if (map[i][j] != -1) {
					if (temp == -1) { 
						temp = map[i][j]; 
						ti = i, tj = j;
					}
					else {
						if (map[i][j] == temp) {
							con = false;
							total += map[i][j];
							map[i][j] = -1, map[ti][tj] = -1;
						}
						else {
							temp = map[i][j];
							ti = i, tj = j;
						}
					}
				}
			}
		}
		// 直排
		for (int j = 0; j < x; j++) {
			temp = -1;
			ti = -1, tj = -1;
			for (int i = 0; i < y; i++) {
				if (map[i][j] != -1) {
					if (temp == -1) {
						temp = map[i][j];
						ti = i, tj = j;
					}
					else {
						if (map[i][j] == temp) {
							con = false;
							total += map[i][j];
							map[i][j] = -1, map[ti][tj] = -1;
						}
						else {
							temp = map[i][j];
							ti = i, tj = j;
						}
					}
				}
			}
		}

		if (con) { break; }
	}

	// output
	cout << total;

	return 0;
}