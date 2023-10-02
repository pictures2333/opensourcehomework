/*
#include <iostream>
using namespace std;
int main() {
	const int price; // 此處的兩個變數 price 跟 bonus 在定義時前面有加上const，意即定義為常數，不能被修改
	const int bonus;
	cout << "消費滿額價：";
	cin >> price; // 此處cin接收使用者輸入之後會將值傳入price跟bonus兩個變數，會需要修改這兩個變數
	cout << "折價券的金額：";
	cin >> bonus; // 因為這兩個變數在上面的程式碼已經被定義成常數，無法被修改，所以執行錯誤
	cout << "今日消費滿 " << price << " 元，送折價券 " << bonus << " 元" << endl;
}
*/

#include <iostream>
using namespace std;
int main() {
	int price; // 解決方案:不要將將price跟bonus定義為常數(移除前面的const)
	int bonus;
	cout << "消費滿額價：";
	cin >> price;
	cout << "折價券的金額：";
	cin >> bonus;
	cout << "今日消費滿 " << price << " 元，送折價券 " << bonus << " 元" << endl;
}