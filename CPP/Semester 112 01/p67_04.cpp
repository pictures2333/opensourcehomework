#include <iostream>
using namespace std;
int main() {
	// 定義儲存年分、月份、日期的變數，資料型態為int
	int year;
	int month;
	int day;
	
	// 接收使用者輸入，依序存入指定變數中
	cout << "有效期限 西元年份："; // 輸出西元年份輸入提示字串
	cin >> year; // 接收使用者輸入並傳入year變數作為西元年份
	cout << "有效期限 月份："; // 輸出月份輸入提示字串
	cin >> month; // 接收使用者輸入並傳入month變數作為月份
	cout << "有效期限 日期："; // 輸出日期輸入提示字串
	cin >> day; // 接收使用者輸入並傳入day變數作為日期

	cout << endl << "本貨架商品的有效期限：西元" << year << "年" << month << "月" << day << "日"; // 輸出資訊

	return 0;
}