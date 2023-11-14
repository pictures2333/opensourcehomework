#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int num;
	while (cin >> num) {
		// 輸入區
		cin.ignore();

		int numlist[1000];
		string nums;
		stringstream ss;
		getline(cin, nums);
		ss << nums;
		int data2;
		int n = 0;
		while (ss >> data2) {
			numlist[n] = data2;
			n++;
		}

		// 排序區
		bool done = false;
		while (!done) {
			int numlist2[1000];
			bool done2 = true;
			for (int i = 0; i < (num - 1); i++) {
				if (numlist[i] > numlist[i + 1]) {
					int temp = numlist[i + 1];
					numlist[i + 1] = numlist[i];
					numlist[i] = temp;
					done2 = false;
				}
			}
			if (done2) {
				done = true;
			}
		}

		// 輸出區
		for (int i = 0; i < num; i++) {
			cout << numlist[i] << " ";
		}
		cout << endl;
	}
		
	return 0;
}