#include <iostream>
#include <limits> // เพิ่มไลบรารี limits เข้ามา

using namespace std;

int main() {
    int count[5] = {};
    char grade;
    int totalStudents = 0;

    cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
    do {
        cout << "Student [" << totalStudents + 1 << "]: ";
        cin >> grade;

        if (grade == '0') {
            break;
        } else if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' || grade == 'F') {
            switch (grade) {
                case 'A':
                    count[0]++;
                    break;
                case 'B':
                    count[1]++;
                    break;
                case 'C':
                    count[2]++;
                    break;
                case 'D':
                    count[3]++;
                    break;
                case 'F':
                    count[4]++;
                    break;
            }
            totalStudents++;
        } else {
            cout << "Wrong input. Please input again." << endl;
            cin.clear();
            cin.ignore();
            continue;
        }
    } while (true);

    cout << "In total " << totalStudents << " students." << endl;
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4] << endl;

    return 0;
}
