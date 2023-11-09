#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
		// 輸入處理區
		int r, c;
		cin >> r >> c;
		int map[101][101];
		cin.ignore();
		for (int i = 0; i < r; i++) {
			stringstream ss;
			string data;
			getline(cin, data);

			int data2;
			ss << data;
			int n = 0;
			while (ss >> data2) {
				map[i][n] = data2;
				n++;
			}
		}

		// 地圖副本
		int map2[101][101];
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				map2[i][j] = 0;
			}
		}

		// 運算區
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				// 處理第一種地雷
				if (map[i][j] == 1) {
					// 如果左邊有空間
					if (j > 0) {
						map2[i][j - 1] += 1;
					}
					// 如果上面有空間
					if (i > 0) {
						map2[i - 1][j] += 1;
					}
					map2[i + 1][j] += 1;
					map2[i][j + 1] += 1;
					map2[i][j] += 1;
				}
				else if (map[i][j] == 2) {
					int temp = map2[i][j];
					// 處理直排
					for (int a = 0; a < r; a++) {
						map2[a][j] += 1;
					}
					// 處理橫排
					for (int a = 0; a < c; a++) {
						map2[i][a] += 1;
					}
					map2[i][j] = temp+1; // 處理炸彈位置
				}
			}
		}

		// 輸出區
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cout << map2[i][j] << " ";
			}
			cout << endl;
		}
		return 0;
}