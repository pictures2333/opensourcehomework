#include <iostream>
using namespace std;

int main() {
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1;
    cin >> a2 >> b2 >> c2;
    int n;
    cin >> n;

    // compute
    int y1, y2;
    int x1, x2;
    int max = -99999;
    for (int i = 0; i <= n; i++) {
        x1 = n - i;
        x2 = i;

        y1 = a1 * x1 * x1 + b1 * x1 + c1;
        y2 = a2 * x2 * x2 + b2 * x2 + c2;

        if (y1 + y2 > max) {
            max = y1 + y2;
        }
    }
    cout << max;
}
