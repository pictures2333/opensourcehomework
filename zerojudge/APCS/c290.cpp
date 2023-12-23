#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    int a = 0, b = 0;
    for (int i = 0; i < input.length(); i++) {
        if ((input.length() - 1 - i) % 2 == 0) {
            a += ((int)(input[i]) - 48);
        }
        else b += ((int)(input[i]) - 48);
    }
    cout << abs(a - b);
}
