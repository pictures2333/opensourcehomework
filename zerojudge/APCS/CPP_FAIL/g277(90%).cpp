// TLE
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
	fastio; // 輸入優化

	// 輸入區
	vector<long long> nList;
	long long n;
	cin >> n;
	cin.ignore();
	string data;
	getline(cin, data);
	stringstream ss;
	ss << data;
	long long data2;
	while (ss >> data2) {
		nList.push_back(data2);
	}
	
	// 計算區
	long l = 0, r = n-1;
	while ((r - l) != 0) {
		long long min = 0;
		long long minPosition = 0;
		for (long long i = l; i <= r; i++) {
			if (i == l) {
				min = nList[i];
				minPosition = i;
			}
			else {
				if (nList[i] < min) {
					min = nList[i], minPosition = i;
				}
			}
		}

		long long sumLeft = 0, sumRight = 0;
		for (long long i = l; i <= r; i++) {
			if (i < minPosition) {
				sumLeft += nList[i];
			}
			else if (i > minPosition) {
				sumRight += nList[i];
			}
		}
		if (sumLeft > sumRight) {
			r = minPosition - 1;
		}
		else if (sumLeft <= sumRight) {
			l = minPosition + 1;
		}
	}

	cout << nList[l];

	return 0;
}