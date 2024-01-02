各位寫Zerojudge的時候會碰到像是這題這樣的測資。

資料擺在一行，用空格分開。

# String

那其實C++除了可以用``char[]``來搞一個字串之外，

也可以使用``string``來搞，具體作法是

先引入函式庫
```cpp
#include <string>
```

定義一個string字串
```cpp
string a1;
```

接收一整行的輸入並存入string
```cpp
getline(cin, yourString);
```

如果你在使用``getline()``之前有用``cin``的話，那需要先``cin.ignore();``再來``getline()``，不然會出錯。

## 範例
範例測資:
```
1
69 69 69 69
``` 
```cpp
#include <string>
#include <iostream>
using namespace std;

int main(){
  int num;
  cin >> num;

  cin.ignore();
  string d1;
  getline(cin, d1);

  cout << num << endl << d1;

  return 0;
}
```
## 補充
定義string時就先塞好內容 ``string d1 = "fbk_the_cutest_fox";``

查詢string長度 ``d1.length();``

查詢string中某個字的內容 ``d1[index];``

修改string中某個字的內容 ``d1[index] = 'c';`` **(一定要用單引號，不能用雙引號)**

# StringStream & Array

現在接收到一整行的測資ㄌ，但這些資料還是放在一起，只用一個空格分開，現在要把資料一個一個提出來。

這個時候就用到``stringstream``

引入``stringstream``函式庫
```cpp
#include <sstream>
```
定義一個stringstream
```cpp
stringstream stringstream ss;
```
把資料打進去stringstream
```cpp
ss << yourString;
```
把資料一個一個拿出來
```cpp
int d2; // 建立另一個變數等下接收資料
while (ss >> d2) cout << d2;
```

執行這段程式碼，你會看到你剛剛輸入的一整行，只有以空格分開的資料，被一筆一筆的輸出ㄌ

要儲存這些資料，我們可以使用陣列

定義一個陣列
```cpp
資料型態 yourArray[大小];
```
假設我要一個存整數用的陣列，大小為4
```cpp
int a1[4];
```
也可以預先定義好陣列裡的內容，例如:
```cpp
int a1[5] = {10, 5, 6, 1, 3};
```
可以用``a1[index]``來存取陣列裡某個元素的值

也可以用``a1[index] = 69;``來改變陣列裡某個元素的值

```cpp
int a1[5] = {10, 5, 6, 1, 3}; // 建立一個陣列
cout << a1[0] << endl; // 存取陣列第0個元素(索引為0)的值
a1[4] = 0; // 修改陣列第4個元素(索引為4)的值
cout << a1[4] << endl;
```

所以我們也可以用陣列來儲存從stringstream撈出來的值
```cpp
// 輸入區
string d1;
getline(cin, d1);

// 建立一個stringstream並把資料打進去
stringstream ss;
ss << d1;

// 撈出資料並存到陣列裡
int count = 0;
int d2[10];
while (ss >> d2[count]) count++;

可以使用以下程式碼看成效
for (int i=0; i<count; i++) cout << d2[i] << endl;
```

如果stringstream需要重複使用，可以用以下程式碼清除stringstream的值

定義一個stringstream其實會比較耗效能跟時間
```cpp
ss.str("");
ss.clear();
```

上面的範例都是用整數型態的變數接收從stringstream裡撈出來的值，但也不一定要用整數型態，看題目需求。 

# Vector
陣列plus - vector

別人寫的: https://shengyu7697.github.io/std-vector/

# 白上超可愛