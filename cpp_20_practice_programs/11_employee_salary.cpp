#include <iostream>
#include <string>
using namespace std;

struct Employee {
    int id;
    string name;
    double basicSalary;
};

int main() {
    Employee employee;
    cin >> employee.id >> employee.name >> employee.basicSalary;

    double hra = employee.basicSalary * 0.20;
    double da = employee.basicSalary * 0.10;
    double totalSalary = employee.basicSalary + hra + da;

    cout << employee.id << '\n';
    cout << employee.name << '\n';
    cout << totalSalary << '\n';

    return 0;
}
