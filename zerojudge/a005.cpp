#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
	int lines;
	cin >> lines;

	stringstream ss;
	cin.ignore();
	for (int i = 0; i < lines; i++) {
		string data = "";
		int datas[4] = {0, 0, 0, 0};

		getline(cin, data);
		ss << data;

		string data2 = "";
		int n = 0;
		while (ss >> data2) {
			datas[n] = stoi(data2);
			n++;
		}

		if (datas[3] - datas[2] == datas[2] - datas[1] && datas[2] - datas[1] == datas[1] - datas[0]) {
			cout << datas[0] << " " << datas[1] << " " << datas[2] << " " << datas[3] << " " << (datas[3] + (datas[3] - datas[2])) << endl;
		}
		else if (datas[3] / datas[2] == datas[2] / datas[1] && datas[2] / datas[1] && datas[1] / datas[0]) {
			cout << datas[0] << " " << datas[1] << " " << datas[2] << " " << datas[3] << " " << (datas[3] * (datas[3] / datas[2])) << endl;
		}

		ss.str("");
		ss.clear();
	}

	return 0;
}