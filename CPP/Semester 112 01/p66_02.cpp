#include <iostream>
using namespace std;
int main() {
	int way; // 定義變數way，資料型態int
	cout << "促銷商品的陳設位置（走道）："; // 顯示輸入提示字串
	cin >> way; // 接收使用者輸入，並將使用者輸入的值傳入變數way
	cout << "今日促銷商品：高麗菜在第 " << way << " 走道"; // 顯示資訊
}