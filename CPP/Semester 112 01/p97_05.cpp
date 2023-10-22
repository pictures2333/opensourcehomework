#include <iostream>
using namespace std;
int main() {
	if ((float)25 / (float)200 > (float)13 / (float)120) {
		cout << "小包裝的比較便宜";
	}
	else if ((float)25 / (float)200 < (float)13 / (float)120) {
		cout << "大包裝的比較便宜";
	}
	else if ((float)25 / (float)200 == (float)13 / (float)120) {
		cout << "一樣便宜";
	}
	return 0;
}