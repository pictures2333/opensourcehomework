#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		// Input
		vector<int> line1;
		vector<int> line2;

		int d2;
		for (int c = 0; c < 7; c++) {
			cin >> d2;
			line1.push_back(d2);
		}
		for (int c = 0; c < 7; c++) {
			cin >> d2;
			line2.push_back(d2);
		}

		// compute
		// A
		string eA = "", eB = "", eC = "";
		if (line1[2 - 1] == line1[4 - 1] || line1[2 - 1] != line1[6 - 1]) eA = "A";
		if (line2[2 - 1] == line2[4 - 1] || line2[2 - 1] != line2[6 - 1]) eA = "A";
		// B
		if (line1[6] == 0) eB = "B";
		if (line2[6] == 1) eB = "B";
		// C
		if (line1[2 - 1] == line2[2 - 1] || line1[4 - 1] == line2[4 - 1] || line1[6 - 1] == line2[6 - 1]) eC = "C";

		string final = "";
		if (eA == "" && eB == "" && eC == "") final = "None";
		else final = eA + eB + eC;

		cout << final << endl;
	}
}
