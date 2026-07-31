#include <iostream>
using namespace std;

int main() {
    int arr[5];
    
    // 读取5个整数
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    
    // 冒泡排序
    for (int i = 0; i < 4; i++) {  // 外层循环控制轮数
        for (int j = 0; j < 4 - i; j++) {  // 内层循环进行相邻元素比较
            if (arr[j] > arr[j + 1]) {
                // 交换arr[j]和arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    // 输出排序后的数组
    for (int i = 0; i < 5; i++) {
        cout << arr[i];
        if (i < 4) {
            cout << " ";
        }
    }
    cout << endl;
    
    return 0;
}