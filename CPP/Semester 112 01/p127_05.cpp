#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float bal, gain; 

	cout << "請輸入本金：";
	cin >> bal;
	cout << "請輸入年利率：";
	cin >> gain;

	for (int i = 1; i < 4; i++) {
		cout << "第" << i << "年的本利和：" << bal * pow((1 + (gain / 100)), i) << endl;
	}

	return 0;
}