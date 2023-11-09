#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	int f, e, d;
	cin >> f >> e >> d;

	if (f < e) {
		for (int i = f; i <= e; i += d) {
			cout << i << " ";
		}
	}
	else if (f > e){
		for (int i = f; i >= e; i += d) {
			cout << i << " ";
		}
	}
	else if (f == e) {
		cout << f;
	}

		
	return 0;
}