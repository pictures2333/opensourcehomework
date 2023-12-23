#include <iostream>
#include <vector>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    fastio;
    // input
    long long n, l;
    cin >> n >> l;

    vector<long long> position;
    for (long long i = 0; i < n; i++) {
        long long input;
        cin >> input;
        position.push_back(input);
    }

    vector<long long> height;
    for (long long i = 0; i < n; i++) {
        long long input;
        cin >> input;
        height.push_back(input);
    }

    // compute
    bool hasDone = true;
    long long count;
    count = n;
    int maxHeight = 0;
    while (true) {
        vector<long long> position2;
        vector<long long> height2;
        long long rCount = 0;

        for (long long i = 0; i < count; i++) {
            // 第一棵樹:不能砍:會壓到邊界or壓到右邊的樹
            if (i == 0) {
                if (n == 1 && position[i] < height[i] && l - position[i] < height[i]) {
                    position2.push_back(position[i]);
                    height2.push_back(height[i]);
                    rCount++;
                }
                else if (n > 1 && position[i] < height[i] && position[i + 1] - position[i] < height[i]) {
                    position2.push_back(position[i]);
                    height2.push_back(height[i]);
                    rCount++;
                }
                else {
                    if (height[i] > maxHeight) maxHeight = height[i];
                }
            }
            // 最後一棵樹:不能砍:會壓到邊界or壓到左邊的樹
            else if (i == position.size() - 1) {
                if (l - position[i] < height[i] && position[i] - position[i - 1] < height[i]) {
                    position2.push_back(position[i]);
                    height2.push_back(height[i]);
                    rCount++;
                }
                else {
                    if (height[i] > maxHeight) maxHeight = height[i];
                }
            }
            // 中間的樹:不能砍:會壓到左右邊
            else {
                if (position[i + 1] - position[i] < height[i] && position[i] - position[i - 1] < height[i]) {
                    position2.push_back(position[i]);
                    height2.push_back(height[i]);
                    rCount++;
                }
                else {
                    if (height[i] > maxHeight) maxHeight = height[i];
                }
            }
        }
        // 更新
        for (long long i = 0; i < position2.size(); i++) {
            position[i] = position2[i];
            height[i] = height2[i];
        }

        if (count == rCount) break;
        count = rCount;
    }
    cout << (n - count) << endl << maxHeight << endl;
}
