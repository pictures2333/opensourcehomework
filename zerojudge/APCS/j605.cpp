#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int max = 0;
	int maxtime = 0;

	int fatalError = 0;

	for (int i = 0; i < n; i++) {
		int time, score;
		cin >> time >> score;

		if (i == 0) {
			maxtime = time, max = score;
		}
		else {
			if (score > max) {
				max = score;
				maxtime = time;
			}
		}

		if (score == -1) fatalError += 1;
	}

	int final = (max - n - (fatalError * 2));
	if (final < 0) { final = 0; }
	cout << final << " " << maxtime;

	return 0;
}