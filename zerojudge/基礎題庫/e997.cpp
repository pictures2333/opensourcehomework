#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string data;
	string stus[50];

	stringstream ss;
	getline(cin, data);
	ss << data;
	string data2;
	int n=0;
	while (ss >> data2) {
		stus[n] = data2;
		n++;
	}

	string stu2[50];
	for (int i = 0; i < n; i++) {
		stu2[n - 1 - i] = stus[i];
	}

	int count;
	cin >> count;
	cin.ignore();
	cout << stu2[count - 1];

		
	return 0;
}