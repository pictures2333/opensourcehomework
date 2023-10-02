#include <iostream>
using namespace std;
int main() {
	// 定義儲存年分、月份、日期的變數，資料型態為int
	int year;
	int month;
	int day;
	
	cout << "有效期限年月日(以空白隔開年月日)："; // 顯示輸入提示字串
	cin >> year >> month >> day; // 接收使用者輸入並傳入year, month以及day變數，分別作為年份、月份、日期

	cout << endl << "本貨架商品的有效期限：西元" << year << "年" << month << "月" << day << "日"; // 輸出資訊

	return 0;
}