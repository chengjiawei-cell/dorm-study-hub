#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    // 处理特殊情况
    if (N <= 1) {
        cout << "NO" << endl;
        return 0;
    }
    if (N == 2) {
        cout << "YES" << endl;
        return 0;
    }
    if (N % 2 == 0) {  // 偶数（除了2）都不是素数
        cout << "NO" << endl;
        return 0;
    }
    
    // 检查从3到sqrt(N)的奇数因子
    bool isPrime = true;
    int limit = sqrt(N);  // 只需要检查到sqrt(N)
    for (int i = 3; i <= limit; i += 2) {
        if (N % i == 0) {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}