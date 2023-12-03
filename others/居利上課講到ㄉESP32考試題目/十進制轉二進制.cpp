#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	string data = "";
	while (true) {
		if (n % 2 == 0) data += "0";
		else data += "1";
		if (n / 2 == 1) {
			data += "1";
			break;
		}
		n = n / 2;
	}

	for (int i = data.length() - 1; i >= 0; i--) {
		cout << data[i];
	}

	return 0;
}

// 我手邊沒有ESP32所以我就寫核心邏輯