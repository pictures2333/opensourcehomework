Zerojudge上有像是下圖這樣的題目：

![image](https://github.com/pictures2333/opensourcehomework/assets/85096042/d35cb2b4-2849-4cbb-97c3-4d5ec11abc62)

測資會一直給，直到EOF

這時可以這樣處理資料

```cpp
#include <iostream>
using namespace std;

int main() {
    int yourInput;
    while (cin >> yourInput) {
        // code
    }

    return 0;
}
```

使用一個while迴圈，如果有cin進來，就推進變數內並運行迴圈裡的Code

如果EOF了，沒東西再進來了，迴圈就會自己結束。
