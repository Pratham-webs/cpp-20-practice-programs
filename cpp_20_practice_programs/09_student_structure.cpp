#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    float marks;
};

int main() {
    Student student;
    cin >> student.rollNumber;
    cin >> student.name;
    cin >> student.marks;

    cout << student.rollNumber << '\n';
    cout << student.name << '\n';
    cout << student.marks << '\n';

    return 0;
}
