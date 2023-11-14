#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int num;
	while (cin >> num) {
		int nums[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

		while (true) {
			for (int i = 0; i < num; i++) {
				cout << nums[num - 1 - i];
			}
			cout << endl;

			bool canfin = true;
			for (int i = 0; i < num; i++) {
				if (nums[i] == 0) { canfin = false; }
			}
			if (canfin) { break; }

			nums[0] += 1;
			for (int i = 0; i < num - 1; i++) {
				if (nums[i] == 2) {
					nums[i] = 0;
					nums[i + 1] += 1;
				}
			}
		}
	}
		
	return 0;
}