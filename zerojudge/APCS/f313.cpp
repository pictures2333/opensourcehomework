#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	// input
	int r, c, k, m;
	cin >> r >> c >> k >> m;
	int map[50][50];
	cin.ignore();
	for (int i = 0; i < r; i++) {
		string data;
		getline(cin, data);
		stringstream ss;
		ss << data;
		int data2, j = 0;
		while (ss >> data2) {
			map[i][j] = data2;
			j++;
		}
	}

	// compute
	for (int i = 0; i < m; i++) {
		// copy
		int map2[50][50];
		for (int x = 0; x < r; x++) {
			for (int y = 0; y < c; y++) {
				map2[x][y] = map[x][y];
			}
		}

		for (int x = 0; x < r; x++) {
			for (int y = 0; y < c; y++) {
				if (map[x][y] != -1) {
					// top
					if (x > 0 && map[x-1][y] != -1) {
						map2[x][y] -= (map[x][y] / k);
						map2[x-1][y] += (map[x][y] / k);
					}
					// bottom
					if (x != (r - 1) && map[x+1][y] != -1) {
						map2[x][y] -= (map[x][y] / k);
						map2[x+1][y] += (map[x][y] / k);
					}
					// left
					if (y > 0 && map[x][y-1] != -1) {
						map2[x][y] -= (map[x][y] / k);
						map2[x][y-1] += (map[x][y] / k);
					}
					// right
					if (y < (c-1) && map[x][y+1] != -1) {
						map2[x][y] -= (map[x][y] / k);
						map2[x][y+1] += (map[x][y] / k);
					}
				}
			}
		}

		// 複製回來
		for (int x = 0; x < r; x++) {
			for (int y = 0; y < c; y++) {
				map[x][y] = map2[x][y];
			}
		}
	}

	int result[250], index = 0;
	for (int x = 0; x < r; x++) {
		for (int y = 0; y < c; y++) {
			if (map[x][y] >= 0) {
				result[index] = map[x][y];
				index++;
			}
		}
	}

	// sort
	while (true) {
		bool con = true;
		for (int i = 0; i < index-1; i++) {
			if (result[i] > result[i + 1]) {
				int temp = result[i + 1];
				result[i+1] = result[i];
				result[i] = temp;
				con = false;
			}
		}
		if (con) { break; }
	}
	cout << result[0] << endl << result[index - 1] << endl;

	return 0;
}