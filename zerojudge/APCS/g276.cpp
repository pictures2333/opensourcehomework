#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    // Input
    int n, m, k;
    cin >> n >> m >> k;
    int map[100][100];

    vector<int> demon;
    int demonCount = k;
    int c4Count = 0;
    for (int i = 0; i < k; i++) {
        int r, c, s, t;
        cin >> r >> c >> s >> t;
        demon.push_back(r);
        demon.push_back(c);
        demon.push_back(s);
        demon.push_back(t);
    }

    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) { map[i][j] = 0; }
    }

    // compute
    while (true) {
        for (int i = 0; i < k * 4; i = i + 4) {
            if (demon[i] != -1) {
                // 放炸彈
                if (map[demon[i + 1]][demon[i]] == 0) {
                    map[demon[i + 1]][demon[i]] = 1;
                    c4Count += 1;
                }
                // 移動
                demon[i] += demon[i + 2];
                demon[i + 1] += demon[i + 3];
                // 如果超出邊界
                if (demon[i] >= n || demon[i + 1] >= m || demon[i] < 0 || demon[i+1] < 0) {
                    demon[i] = -1;
                    demonCount -= 1;
                }
            }
        }

        vector<int> boomList;
        for (int i = 0; i < k * 4; i = i + 4) {
            if (demon[i] != -1) {
                if (map[demon[i + 1]][demon[i]] == 1) {
                    boomList.push_back(demon[i + 1]);
                    boomList.push_back(demon[i]);
                    demon[i] = -1;
                    demonCount -= 1;
                }
            }
        }
        for (int i = 0; i < boomList.size(); i=i+2) {
            if (map[boomList[i]][boomList[i + 1]] == 1) {
                map[boomList[i]][boomList[i + 1]] = 0;
                c4Count -= 1;
            }
        }

        // cout << endl;
        if (demonCount <= 0) {
            break;
        }
    }
    cout << c4Count;
}
