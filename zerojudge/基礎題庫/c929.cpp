#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string broker;
	getline(cin, broker);
	string data;
	getline(cin, data);

	int i = 0;
	bool brokeone = false;
	for (i; i < data.length()-broker.length(); i++) {
		string com;
		for (int b = 0; b < broker.length(); b++) {
			com += data[i+b];
		}
		if (com == broker) {
			i += broker.length()-1;
			if (brokeone == false) {
				cout << endl;
				brokeone = true;
			}
		}
		else {
			cout << data[i];
			brokeone = false;
		}
	}
	for (i+1; i < data.length(); i++) {
		cout << data[i];
	}

	return 0;
}