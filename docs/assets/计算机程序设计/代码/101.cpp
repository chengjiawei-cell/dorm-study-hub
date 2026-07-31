#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cm;
    cin >> cm;  // 确保使用 >> 而不是 >
    
    // 将厘米转换为米
    double meter = cm / 100.0;
    
    // 计算总英尺数（含小数）
    double total_feet = meter / 0.3048;
    
    // 提取整数英尺部分
    int feet = static_cast<int>(total_feet);
    
    // 计算剩余的英寸（小数部分 × 12）
    double remaining_inches = (total_feet - feet) * 12;
    
    // 四舍五入到最接近的整数英寸
    int inches = static_cast<int>(round(remaining_inches));
    
    // 处理英寸等于12的特殊情况
    if (inches == 12) {
        feet++;
        inches = 0;
    }
    
    cout << feet << " " << inches << endl;
    
    return 0;
}