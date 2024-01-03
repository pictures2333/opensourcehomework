#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> nums;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        nums.push_back(tmp);
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            if (i == 0) total += nums[i + 1];
            else if (i == n - 1) total += nums[i - 1];
            else total += min(nums[i + 1], nums[i - 1]);
        }
    }

    cout << total;
}
