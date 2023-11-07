#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int people;
	cin >> people;

	int price = (int)(people / 12) * 50 + (people % 12)*5;

	cout << price;

	return 0;
}