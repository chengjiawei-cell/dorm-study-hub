#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class AttendanceSystem {
private:
    static const int STUDENT_COUNT = 10;
    static const int COURSE_COUNT = 5;
    
    struct Student {
        string name;
        string id;
        int attendance;
        double scores[COURSE_COUNT];
    };
    
    Student students[STUDENT_COUNT];

public:
    // (1) 设置学生信息 - 修正了输入提示
    void setStudentInfo() {
        cout << "=== 录入学生信息 ===" << endl;
        for (int i = 0; i < STUDENT_COUNT; i++) {
            cout << "\n请输入第 " << (i + 1) << " 个学生的信息：" << endl;
            
            cout << "姓名: ";
            cin >> students[i].name;
            
            cout << "学号: ";
            cin >> students[i].id;
            
            cout << "已签到次数: ";
            cin >> students[i].attendance;
            
            // 修正：移除了多余的cout，避免重复提示
            cout << "请输入5门课的成绩:" << endl;  // 只提示一次
            for (int j = 0; j < COURSE_COUNT; j++) {
                cout << "第" << (j + 1) << "门课成绩: ";
                cin >> students[i].scores[j];
            }
        }
        cout << "所有学生信息录入完成！" << endl;
    }
    
    // (2) 显示学生信息 - 这个函数基本正确
    void displayStudentInfo() {
        cout << "\n=== 学生信息显示 ===" << endl;
        for (int i = 0; i < STUDENT_COUNT; i++) {
            cout << "\n学生 " << (i + 1) << ":" << endl;
            cout << "姓名: " << students[i].name << endl;
            cout << "学号: " << students[i].id << endl;
            cout << "已签到次数: " << students[i].attendance << endl;
            cout << "5门课成绩: ";
            for (int j = 0; j < COURSE_COUNT; j++) {
                cout << students[i].scores[j];
                if (j < COURSE_COUNT - 1) cout << ", ";
            }
            cout << endl;
        }
    }
    
    // (3) 计算平均成绩 - 这个函数基本正确
    void calculateAndDisplayAverage() {
        cout << "\n=== 学生平均成绩 ===" << endl;
        for (int i = 0; i < STUDENT_COUNT; i++) {
            double sum = 0;
            for (int j = 0; j < COURSE_COUNT; j++) {
                sum += students[i].scores[j];
            }
            double average = sum / COURSE_COUNT;
            cout << students[i].name << " (" << students[i].id << ") 的平均成绩: " 
                 << average << endl;
        }
    }
    
    // (4) 签到排名 - 修正了排序逻辑
    void sortAndDisplayAttendance() {
        cout << "\n=== 学生签到次数排名 ===" << endl;
        
        // 创建学生指针数组用于排序
        Student* sortedStudents[STUDENT_COUNT];
        for (int i = 0; i < STUDENT_COUNT; i++) {
            sortedStudents[i] = &students[i];
        }
        
        // 使用选择排序按签到次数降序排列
        for (int i = 0; i < STUDENT_COUNT - 1; i++) {
            int maxIndex = i;
            for (int j = i + 1; j < STUDENT_COUNT; j++) {
                if (sortedStudents[j]->attendance > sortedStudents[maxIndex]->attendance) {
                    maxIndex = j;
                }
            }
            // 交换指针
            if (maxIndex != i) {
                Student* temp = sortedStudents[i];
                sortedStudents[i] = sortedStudents[maxIndex];
                sortedStudents[maxIndex] = temp;
            }
        }
        
        // 显示排序结果
        for (int i = 0; i < STUDENT_COUNT; i++) {
            cout << "第" << (i + 1) << "名: " << sortedStudents[i]->name 
                 << " (" << sortedStudents[i]->id << ") - 签到次数: " 
                 << sortedStudents[i]->attendance << endl;
        }
    }
    
    // 显示菜单 - 这个函数正确
    void displayMenu() {
        cout << "\n=== 学生考勤管理系统 ===" << endl;
        cout << "1. 录入学生信息" << endl;
        cout << "2. 显示学生信息" << endl;
        cout << "3. 显示平均成绩" << endl;
        cout << "4. 显示签到排名" << endl;
        cout << "5. 退出系统" << endl;
        cout << "请选择操作 (1-5): ";
    }
};

int main() {
    AttendanceSystem system;
    int choice;
    
    cout << "欢迎使用学生考勤管理系统！" << endl;
    
    do {
        system.displayMenu();
        cin >> choice;
        
        switch (choice) {
            case 1:
                system.setStudentInfo();
                break;
            case 2:
                system.displayStudentInfo();
                break;
            case 3:
                system.calculateAndDisplayAverage();
                break;
            case 4:
                system.sortAndDisplayAttendance();
                break;
            case 5:
                cout << "感谢使用学生考勤管理系统，再见！" << endl;
                break;
            default:
                cout << "输入无效，请重新选择！" << endl;
                // 清除错误状态和缓冲区
                cin.clear();
                cin.ignore(10000, '\n');
                break;
        }
    } while (choice != 5);
    
    return 0;
}