#include <iostream>
using namespace std;

enum Day {
    Monday = 1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

int main() {
    int number;
    cin >> number;

    if (number < Monday || number > Sunday) {
        cout << "Invalid day\n";
        return 0;
    }

    Day day = static_cast<Day>(number);

    switch (day) {
        case Monday: cout << "Monday\n"; break;
        case Tuesday: cout << "Tuesday\n"; break;
        case Wednesday: cout << "Wednesday\n"; break;
        case Thursday: cout << "Thursday\n"; break;
        case Friday: cout << "Friday\n"; break;
        case Saturday: cout << "Saturday\n"; break;
        case Sunday: cout << "Sunday\n"; break;
    }

    return 0;
}
