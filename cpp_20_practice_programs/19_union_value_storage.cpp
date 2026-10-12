#include <iostream>
using namespace std;

union Value {
    int integerValue;
    float floatValue;
    char characterValue;
};

int main() {
    Value value;
    int choice;
    cin >> choice;

    if (choice == 1) {
        cin >> value.integerValue;
        cout << value.integerValue << '\n';
    } else if (choice == 2) {
        cin >> value.floatValue;
        cout << value.floatValue << '\n';
    } else if (choice == 3) {
        cin >> value.characterValue;
        cout << value.characterValue << '\n';
    } else {
        cout << "Invalid choice\n";
    }

    return 0;
}
