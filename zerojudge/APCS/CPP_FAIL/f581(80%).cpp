#include <iostream>
#include <vector>
#define fastio ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
    fastio;
    // Input
    int n, m;
    cin >> n >> m;

    vector<int> roomList;
    for (int i = 0; i < n; i++) {
        int r;
        cin >> r;
        roomList.push_back(r);
    }

    // compute
    int i = 0; // 位置
    for (int c = 0; c < m; c++) {
        int score = 0; // 總分數
        int task;
        cin >> task;

        while (score < task) {
            score += roomList[i]; // 加分
            i = (i + 1) % n; // 移位
        }
    }
    
    cout << i;
}
