#include <iostream>
#include <string>
using namespace std;
int main() {
	int m, d;
	cin >> m >> d;
	int s = (m*2+d)%3;
	if (s == 0){
		cout << "´¶³q"; 
	} else if (s == 1){
		cout << "¦N";
	} else if (s == 2){
		cout << "¤j¦N";
	}
}
